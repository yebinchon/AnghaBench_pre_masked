
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(int VAR_5)
{
 int VAR_6;


 if (!VAR_4)
  return VAR_1;


 if (VAR_5 < 0 || VAR_5 >= VAR_0 || !FUNC_3(VAR_5))
  return VAR_1;


 VAR_6 = FUNC_4();
 if (VAR_5 == FUNC_0(VAR_6))
  return VAR_6;


 VAR_6 = FUNC_1(FUNC_2(VAR_5), VAR_2);


 return VAR_6 < VAR_3 ? VAR_6 : VAR_1;
}
