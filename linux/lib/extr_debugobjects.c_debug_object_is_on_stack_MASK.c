
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,void*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, int VAR_2)
{
 int VAR_3;
 static int VAR_4;

 if (VAR_4 > 4)
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == VAR_2)
  return;

 VAR_4++;
 if (VAR_3)
  FUNC_2("object %p is on stack %p, but NOT annotated.\n", VAR_1,
    FUNC_3(VAR_0));
 else
  FUNC_2("object %p is NOT on stack %p, but annotated.\n", VAR_1,
    FUNC_3(VAR_0));

 FUNC_0(1);
}
