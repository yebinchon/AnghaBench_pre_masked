
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
  HDC VAR_4;

  VAR_4 = FUNC_0(((void*)0));
  if (((void*)0) == VAR_4)
    {
      return;
    }

  FUNC_3(L"Display settings %d * %d * %d\n", FUNC_1(VAR_4, VAR_1),
          FUNC_1(VAR_4, VAR_3), FUNC_1(VAR_4, VAR_0) * FUNC_1(VAR_4, VAR_2));

  FUNC_2(((void*)0), VAR_4);
}
