
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = (int) ((VAR_4 > VAR_3) ? VAR_3 : VAR_4);

 char *VAR_6 = FUNC_0(VAR_5 + 1);

 if (VAR_6)
 {
  FUNC_1(VAR_6, VAR_2, VAR_5);
  VAR_6[VAR_5] = '\0';
 }
 else
  VAR_1 = VAR_0;

 return VAR_6;
}
