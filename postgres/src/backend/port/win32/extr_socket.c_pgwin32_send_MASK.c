
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* buf; } ;
typedef TYPE_1__ WSABUF ;
typedef int SOCKET ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int,scalar_t__*,int,int *,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,int ) ;

int
FUNC_5(SOCKET VAR_8, const void *VAR_9, int VAR_10, int VAR_11)
{
 WSABUF VAR_12;
 int VAR_13;
 DWORD VAR_14;

 if (FUNC_3())
  return -1;

 VAR_12.len = VAR_10;
 VAR_12.buf = (char *) VAR_9;





 for (;;)
 {
  VAR_13 = FUNC_2(VAR_8, &VAR_12, 1, &VAR_14, VAR_11, ((void*)0), ((void*)0));
  if (VAR_13 != VAR_4 && VAR_14 > 0)

   return VAR_14;

  if (VAR_13 == VAR_4 &&
   FUNC_1() != VAR_5)
  {
   FUNC_0();
   return -1;
  }

  if (VAR_7)
  {




   VAR_6 = VAR_0;
   return -1;
  }



  if (FUNC_4(VAR_8, VAR_2 | VAR_1, VAR_3) == 0)
   return -1;
 }

 return -1;
}
