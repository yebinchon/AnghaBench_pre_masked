
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zic_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static zic_t
FUNC_3(char *VAR_0, bool *VAR_1)
{
 int VAR_2 = -1;
 zic_t VAR_3;
 size_t VAR_4 = FUNC_2(VAR_0);

 if (VAR_4 != 0)
 {
  char *VAR_5 = VAR_0 + VAR_4 - 1;

  switch (*VAR_5)
  {
   case 'd':
    VAR_2 = 1;
    *VAR_5 = '\0';
    break;
   case 's':
    VAR_2 = 0;
    *VAR_5 = '\0';
    break;
  }
 }
 VAR_3 = FUNC_1(VAR_0, FUNC_0("invalid saved time"));
 *VAR_1 = VAR_2 < 0 ? VAR_3 != 0 : VAR_2;
 return VAR_3;
}
