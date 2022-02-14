
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
typedef int php_socket_t ;
struct TYPE_4__ {int server_sock; char* host; int port; char* document_root; size_t document_root_len; char* router; size_t router_len; int is_running; int clients; int poller; int socklen; int address_family; } ;
typedef TYPE_1__ php_cli_server ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_6 ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,int) ;
 char* FUNC_5 (char const*,size_t,int) ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,char*,int,char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int*,int ,int *,int *,int **) ;
 int VAR_8 ;
 char* FUNC_11 (char*,char) ;
 size_t FUNC_12 (char const*) ;
 int FUNC_13 (char*,char**,int) ;
 int FUNC_14 (int *,int ,int *,int ,int) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(php_cli_server *VAR_9, const char *VAR_10, const char *VAR_11, const char *VAR_12)
{
 int VAR_13 = VAR_5;
 char *VAR_14 = ((void*)0);
 zend_string *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 int VAR_19 = 3000;
 php_socket_t VAR_20 = VAR_3;
 char *VAR_21 = ((void*)0);

 if (VAR_10[0] == '[') {
  VAR_14 = FUNC_4(VAR_10 + 1, 1);
  if (!VAR_14) {
   return VAR_0;
  }
  VAR_21 = FUNC_11(VAR_14, ']');
  if (VAR_21) {
   *VAR_21++ = '\0';
   if (*VAR_21 == ':') {
    VAR_19 = FUNC_13(VAR_21 + 1, &VAR_21, 10);
    if (VAR_19 <= 0 || VAR_19 > 65535) {
     VAR_21 = ((void*)0);
    }
   } else if (*VAR_21 != '\0') {
    VAR_21 = ((void*)0);
   }
  }
 } else {
  VAR_14 = FUNC_4(VAR_10, 1);
  if (!VAR_14) {
   return VAR_0;
  }
  VAR_21 = FUNC_11(VAR_14, ':');
  if (VAR_21) {
   *VAR_21++ = '\0';
   VAR_19 = FUNC_13(VAR_21, &VAR_21, 10);
   if (VAR_19 <= 0 || VAR_19 > 65535) {
    VAR_21 = ((void*)0);
   }
  }
 }
 if (!VAR_21) {
  FUNC_2(VAR_8, "Invalid address: %s\n", VAR_10);
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_20 = FUNC_10(VAR_14, &VAR_19, VAR_4, &VAR_9->address_family, &VAR_9->socklen, &VAR_15);
 if (VAR_20 == VAR_3) {
  FUNC_6(VAR_1, "Failed to listen on %s:%d (reason: %s)", VAR_14, VAR_19, VAR_15 ? FUNC_0(VAR_15) : "?");
  if (VAR_15) {
   FUNC_15(VAR_15, 0);
  }
  VAR_13 = VAR_0;
  goto out;
 }
 VAR_9->server_sock = VAR_20;

 VAR_18 = FUNC_9(&VAR_9->poller);
 if (VAR_5 != VAR_18) {
  goto out;
 }

 FUNC_8(&VAR_9->poller, VAR_2, VAR_20);

 VAR_9->host = VAR_14;
 VAR_9->port = VAR_19;

 FUNC_14(&VAR_9->clients, 0, ((void*)0), VAR_7, 1);

 {
  size_t VAR_22 = FUNC_12(VAR_11);
  VAR_16 = FUNC_5(VAR_11, VAR_22, 1);
  if (!VAR_16) {
   VAR_13 = VAR_0;
   goto out;
  }
  VAR_9->document_root = VAR_16;
  VAR_9->document_root_len = VAR_22;
 }

 if (VAR_12) {
  size_t VAR_23 = FUNC_12(VAR_12);
  VAR_17 = FUNC_5(VAR_12, VAR_23, 1);
  if (!VAR_17) {
   VAR_13 = VAR_0;
   goto out;
  }
  VAR_9->router = VAR_17;
  VAR_9->router_len = VAR_23;
 } else {
  VAR_9->router = ((void*)0);
  VAR_9->router_len = 0;
 }

 if (FUNC_7(VAR_9, VAR_6) == VAR_0) {
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_9->is_running = 1;
out:
 if (VAR_13 != VAR_5) {
  if (VAR_14) {
   FUNC_3(VAR_14, 1);
  }
  if (VAR_16) {
   FUNC_3(VAR_16, 1);
  }
  if (VAR_17) {
   FUNC_3(VAR_17, 1);
  }
  if (VAR_20 > -1) {
   FUNC_1(VAR_20);
  }
 }
 return VAR_13;
}
