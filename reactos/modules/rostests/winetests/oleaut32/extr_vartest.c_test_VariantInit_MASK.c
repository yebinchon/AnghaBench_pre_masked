
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int VARIANT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
  VARIANT VAR_1;

  FUNC_2(&VAR_1, -1, sizeof(VAR_1));
  FUNC_1(&VAR_1);
  FUNC_3(FUNC_0(&VAR_1) == VAR_0, "VariantInit() returned vt %d\n", FUNC_0(&VAR_1));
}
