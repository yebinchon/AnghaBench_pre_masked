
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Selectivity ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static Selectivity
FUNC_3(const char *VAR_2, int VAR_3, bool VAR_4,
      int VAR_5)
{
 Selectivity VAR_6;


 if (VAR_3 > 0 && VAR_2[VAR_3 - 1] == '$' &&
  (VAR_3 == 1 || VAR_2[VAR_3 - 2] != '\\'))
 {

  VAR_6 = FUNC_2(VAR_2, VAR_3 - 1, VAR_4);
 }
 else
 {

  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
  VAR_6 *= VAR_1;
 }


 if (VAR_5 > 0)
  VAR_6 /= FUNC_1(VAR_0, VAR_5);


 FUNC_0(VAR_6);
 return VAR_6;
}
