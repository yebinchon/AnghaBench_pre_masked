
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa ;
typedef int php_sockaddr_storage ;
struct TYPE_3__ {int socket; } ;
typedef TYPE_1__ php_netstream_data_t ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int * FUNC_1 () ;
 int FUNC_2 (struct sockaddr*,int,int **,struct sockaddr**,int*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*,int ,int,struct sockaddr*,int*) ;

__attribute__((used)) static inline int FUNC_5(php_netstream_data_t *VAR_1, char *VAR_2, size_t VAR_3, int VAR_4,
  zend_string **VAR_5,
  struct sockaddr **VAR_6, socklen_t *VAR_7
  )
{
 int VAR_8;
 int VAR_9 = VAR_5 || VAR_6;

 if (VAR_9) {
  php_sockaddr_storage VAR_10;
  socklen_t VAR_11 = sizeof(VAR_10);
  VAR_8 = FUNC_4(VAR_1->socket, VAR_2, FUNC_0(VAR_3), VAR_4, (struct sockaddr*)&VAR_10, &VAR_11);
  VAR_8 = (VAR_8 == VAR_0) ? -1 : VAR_8;
  if (VAR_11) {
   FUNC_2((struct sockaddr*)&VAR_10, VAR_11,
     VAR_5, VAR_6, VAR_7);
  } else {
   if (VAR_5) {
    *VAR_5 = FUNC_1();
   }
   if (VAR_6) {
    *VAR_6 = ((void*)0);
    *VAR_7 = 0;
   }
  }
 } else {
  VAR_8 = FUNC_3(VAR_1->socket, VAR_2, FUNC_0(VAR_3), VAR_4);
  VAR_8 = (VAR_8 == VAR_0) ? -1 : VAR_8;
 }

 return VAR_8;
}
