
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*) ;
 char* VAR_2 ;

__attribute__((used)) static char *
FUNC_8(const char *VAR_3)
{
 char *VAR_4;
 int VAR_5,
    VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;





 if (FUNC_7(VAR_3, "0123456789+-.eE") != FUNC_6(VAR_3))
  return FUNC_4(VAR_3);

 VAR_5 = FUNC_6(VAR_3) + FUNC_1(VAR_3);
 VAR_4 = FUNC_3(VAR_5 + 1);
 VAR_9 = 0;
 VAR_6 = FUNC_2(VAR_3);


 VAR_7 = VAR_6 % VAR_1;
 if (VAR_7 == 0)
  VAR_7 = VAR_1;


 if (VAR_3[0] == '-' || VAR_3[0] == '+')
 {
  VAR_4[VAR_9++] = VAR_3[0];
  VAR_3++;
 }


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {

  if (VAR_8 > 0 && --VAR_7 == 0)
  {
   FUNC_5(&VAR_4[VAR_9], VAR_2);
   VAR_9 += FUNC_6(VAR_2);
   VAR_7 = VAR_1;
  }
  VAR_4[VAR_9++] = VAR_3[VAR_8];
 }


 if (VAR_3[VAR_8] == '.')
 {
  FUNC_5(&VAR_4[VAR_9], VAR_0);
  VAR_9 += FUNC_6(VAR_0);
  VAR_8++;
 }


 FUNC_5(&VAR_4[VAR_9], &VAR_3[VAR_8]);


 FUNC_0(FUNC_6(VAR_4) <= VAR_5);

 return VAR_4;
}
