
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* buf; } ;
typedef TYPE_1__ WSABUF ;
typedef int SOCKET ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int,int*,int*,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int,int ) ;

int
FUNC_8(SOCKET VAR_10, char *VAR_11, int VAR_12, int VAR_13)
{
 WSABUF VAR_14;
 int VAR_15;
 DWORD VAR_16;
 DWORD VAR_17 = VAR_13;
 int VAR_18;

 if (FUNC_6())
  return -1;

 VAR_14.len = VAR_12;
 VAR_14.buf = VAR_11;

 VAR_15 = FUNC_2(VAR_10, &VAR_14, 1, &VAR_16, &VAR_17, ((void*)0), ((void*)0));
 if (VAR_15 != VAR_6)
  return VAR_16;

 if (FUNC_1() != VAR_7)
 {
  FUNC_0();
  return -1;
 }

 if (VAR_9)
 {




  VAR_8 = VAR_0;
  return -1;
 }



 for (VAR_18 = 0; VAR_18 < 5; VAR_18++)
 {
  if (FUNC_7(VAR_10, VAR_3 | VAR_2 | VAR_1,
          VAR_4) == 0)
   return -1;

  VAR_15 = FUNC_2(VAR_10, &VAR_14, 1, &VAR_16, &VAR_17, ((void*)0), ((void*)0));
  if (VAR_15 != VAR_6)
   return VAR_16;
  if (FUNC_1() != VAR_7)
  {
   FUNC_0();
   return -1;
  }
  FUNC_5(10000);
 }
 FUNC_3(VAR_5,
   (FUNC_4("could not read from ready socket (after retries)")));
 VAR_8 = VAR_0;
 return -1;
}
