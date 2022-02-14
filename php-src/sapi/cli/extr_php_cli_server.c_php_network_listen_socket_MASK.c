
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int val ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int php_socket_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct sockaddr*,int) ;
 struct sockaddr* FUNC_8 (int,int) ;
 int VAR_8 ;
 int FUNC_9 (struct sockaddr**) ;
 int FUNC_10 (char const*,int,struct sockaddr***,int **) ;
 int FUNC_11 () ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int,int ,int ,char*,int) ;
 int FUNC_14 (int,int,int ) ;

__attribute__((used)) static php_socket_t FUNC_15(const char *VAR_9, int *VAR_10, int VAR_11, int *VAR_12, socklen_t *VAR_13, zend_string **VAR_14)
{
 php_socket_t VAR_15 = VAR_3;
 int VAR_16 = 0;
 struct sockaddr *VAR_17 = ((void*)0), **VAR_18, **VAR_19;

 int VAR_20 = FUNC_10(VAR_9, VAR_11, &VAR_19, VAR_14);
 if (VAR_20 == 0) {
  return -1;
 }
 for (VAR_18 = VAR_19; *VAR_18; VAR_18++) {
  if (VAR_17) {
   FUNC_7(VAR_17, 1);
   VAR_17 = ((void*)0);
  }

  VAR_15 = FUNC_14((*VAR_18)->sa_family, VAR_11, 0);
  if (VAR_15 == VAR_3) {
   continue;
  }

  switch ((*VAR_18)->sa_family) {
  case 129:
   VAR_17 = FUNC_8(sizeof(struct sockaddr_in), 1);
   *(struct sockaddr_in *)VAR_17 = *(struct sockaddr_in *)*VAR_18;
   ((struct sockaddr_in *)VAR_17)->sin_port = FUNC_4(*VAR_10);
   *VAR_13 = sizeof(struct sockaddr_in);
   break;
  default:

   *VAR_13 = 0;
   FUNC_2(VAR_15);
   continue;
  }
  if (FUNC_1(VAR_15, VAR_17, *VAR_13) == VAR_0) {
   VAR_16 = FUNC_11();
   if (VAR_16 == VAR_2 || VAR_16 == VAR_1) {
    goto out;
   }
   FUNC_2(VAR_15);
   VAR_15 = VAR_3;
   continue;
  }
  VAR_16 = 0;

  *VAR_12 = VAR_17->sa_family;
  if (*VAR_10 == 0) {
   if (FUNC_3(VAR_15, VAR_17, VAR_13)) {
    VAR_16 = FUNC_11();
    goto out;
   }
   switch (VAR_17->sa_family) {





   case 129:
    *VAR_10 = FUNC_6(((struct sockaddr_in *)VAR_17)->sin_port);
    break;
   }
  }

  break;
 }

 if (VAR_15 == VAR_3) {
  goto out;
 }

 if (FUNC_5(VAR_15, VAR_5)) {
  VAR_16 = FUNC_11();
  goto out;
 }

out:
 if (VAR_17) {
  FUNC_7(VAR_17, 1);
 }
 if (VAR_19) {
  FUNC_9(VAR_19);
 }
 if (VAR_16) {
  if (FUNC_0(VAR_15)) {
   FUNC_2(VAR_15);
  }
  if (VAR_14) {
   *VAR_14 = FUNC_12(VAR_16);
  }
  return VAR_3;
 }
 return VAR_15;
}
