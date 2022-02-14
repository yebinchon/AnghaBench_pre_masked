
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static Datum
FUNC_5(const char *VAR_3, int VAR_4)
{
 char *VAR_5;

 VAR_5 = (char *) FUNC_4(VAR_4 + VAR_1);

 if (VAR_4 + VAR_2 <= VAR_0)
 {
  FUNC_2(VAR_5, VAR_4 + VAR_2);
  if (VAR_4)
   FUNC_3(VAR_5 + VAR_2, VAR_3, VAR_4);
 }
 else
 {
  FUNC_1(VAR_5, VAR_4 + VAR_1);
  FUNC_3(VAR_5 + VAR_1, VAR_3, VAR_4);
 }

 return FUNC_0(VAR_5);
}
