
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(text *VAR_0, text *VAR_1)
{
 int VAR_2;
 int VAR_3,
    VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_2(VAR_1);

 VAR_2 = FUNC_3(FUNC_1(VAR_0), FUNC_1(VAR_1), FUNC_0(VAR_3, VAR_4));
 if (VAR_2 != 0)
  return VAR_2;
 else if (VAR_3 < VAR_4)
  return -1;
 else if (VAR_3 > VAR_4)
  return 1;
 else
  return 0;
}
