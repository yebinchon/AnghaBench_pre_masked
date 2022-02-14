
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa_t ;
typedef int sa ;
typedef int WSADATA ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int ,scalar_t__,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int*,int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 () ;
 int VAR_11 ;
 int FUNC_9 (int ,char*,int) ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,struct sockaddr*,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int *,int,int *,int ,int) ;

int FUNC_13(void)
{
 if (!VAR_13) {

  sa_t VAR_15;
  socklen_t VAR_16 = sizeof(VAR_15);

  FUNC_12(&VAR_10, 8, ((void*)0), VAR_9, 1);
  FUNC_7("FCGI_MPXS_CONNS", sizeof("FCGI_MPXS_CONNS")-1, "0", sizeof("0")-1);

  VAR_13 = 1;
  VAR_7 = 0;
  if (FUNC_11(0, (struct sockaddr *)&VAR_15, &VAR_16) != 0 && VAR_7 == VAR_0) {
   FUNC_8();
   return VAR_12 = 1;
  } else {
   return VAR_12 = 0;
  }

 }
 return VAR_12;
}
