
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port; int * path; int * host; int * scheme; } ;
typedef TYPE_1__ php_url ;
typedef int php_stream_wrapper ;
typedef int php_stream_context ;
typedef int php_stream ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,char*) ;
 int * FUNC_3 (int *,char const*,char*,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (char const*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(php_stream_wrapper *VAR_2, const char *VAR_3, const char *VAR_4, int VAR_5, php_stream_context *VAR_6)
{
 php_stream *VAR_7 = ((void*)0);
 php_url *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10;
 char VAR_11[512];

 VAR_8 = FUNC_7(VAR_3);
 VAR_9 = FUNC_7(VAR_4);



 if (!VAR_8 ||
  !VAR_9 ||
  !VAR_8->scheme ||
  !VAR_9->scheme ||
  !FUNC_8(VAR_8->scheme, VAR_9->scheme) ||
  !VAR_8->host ||
  !VAR_9->host ||
  !FUNC_8(VAR_8->host, VAR_9->host) ||
  (VAR_8->port != VAR_9->port &&
   VAR_8->port * VAR_9->port != 0 &&
   VAR_8->port + VAR_9->port != 21) ||
  !VAR_8->path ||
  !VAR_9->path) {
  goto rename_errexit;
 }

 VAR_7 = FUNC_3(VAR_2, VAR_3, "r", 0, ((void*)0), VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_7) {
  if (VAR_5 & VAR_1) {
   FUNC_2(((void*)0), VAR_0, "Unable to connect to %s", FUNC_1(VAR_8->host));
  }
  goto rename_errexit;
 }


 FUNC_5(VAR_7, "RNFR %s\r\n", (VAR_8->path != ((void*)0) ? FUNC_1(VAR_8->path) : "/"));

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 300 || VAR_10 > 399) {
  if (VAR_5 & VAR_1) {
   FUNC_2(((void*)0), VAR_0, "Error Renaming file: %s", VAR_11);
  }
  goto rename_errexit;
 }


 FUNC_5(VAR_7, "RNTO %s\r\n", (VAR_9->path != ((void*)0) ? FUNC_1(VAR_9->path) : "/"));

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 200 || VAR_10 > 299) {
  if (VAR_5 & VAR_1) {
   FUNC_2(((void*)0), VAR_0, "Error Renaming file: %s", VAR_11);
  }
  goto rename_errexit;
 }

 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 FUNC_4(VAR_7);
 return 1;

rename_errexit:
 if (VAR_8) {
  FUNC_6(VAR_8);
 }
 if (VAR_9) {
  FUNC_6(VAR_9);
 }
 if (VAR_7) {
  FUNC_4(VAR_7);
 }
 return 0;
}
