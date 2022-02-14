
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
struct sockaddr_in6 {int sin6_family; void* sin6_port; } ;
struct sockaddr_in {int sin_family; void* sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int sockoptval ;
typedef int socklen_t ;
typedef int php_socket_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 long VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct sockaddr**) ;
 int FUNC_4 (char const*,int,struct sockaddr***,int **) ;
 int FUNC_5 () ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int,int ,int ,char*,int) ;
 int FUNC_8 (int,int,int ) ;

php_socket_t FUNC_9(const char *VAR_15, unsigned VAR_16,
  int VAR_17, long VAR_18, zend_string **VAR_19, int *VAR_20
  )
{
 int VAR_21, VAR_22, VAR_23 = 0;
 php_socket_t VAR_24;
 struct sockaddr **VAR_25, **VAR_26, *VAR_27;
 socklen_t VAR_28;
 int VAR_29 = 1;

 VAR_21 = FUNC_4(VAR_15, VAR_17, &VAR_26, VAR_19);

 if (VAR_21 == 0) {

  return -1;
 }

 for (VAR_25 = VAR_26; *VAR_25 != ((void*)0); VAR_25++) {
  VAR_27 = *VAR_25;


  VAR_24 = FUNC_8(VAR_27->sa_family, VAR_17, 0);

  if (VAR_24 == VAR_4) {
   continue;
  }

  switch (VAR_27->sa_family) {







   case 129:
    ((struct sockaddr_in *)VAR_27)->sin_family = VAR_27->sa_family;
    ((struct sockaddr_in *)VAR_27)->sin_port = FUNC_2(VAR_16);
    VAR_28 = sizeof(struct sockaddr_in);
    break;
   default:

    VAR_28 = 0;
    VAR_27 = ((void*)0);
  }

  if (VAR_27) {
   VAR_22 = FUNC_0(VAR_24, VAR_27, VAR_28);

   if (VAR_22 != VAR_3) {
    goto bound;
   }

   VAR_23 = FUNC_5();
  }

  FUNC_1(VAR_24);
 }
 VAR_24 = -1;

 if (VAR_20) {
  *VAR_20 = VAR_23;
 }
 if (VAR_19) {
  *VAR_19 = FUNC_6(VAR_23);
 }

bound:

 FUNC_3(VAR_26);

 return VAR_24;

}
