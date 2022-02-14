
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* config_fn_t ) (char*,char*,void*) ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(config_fn_t VAR_2, void *VAR_3, char *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 char *VAR_7;


 for (;;) {
  VAR_6 = FUNC_0();
  if (VAR_1)
   break;
  if (!FUNC_1(VAR_6))
   break;
  VAR_4[VAR_5++] = VAR_6;
  if (VAR_5 >= VAR_0)
   return -1;
 }
 VAR_4[VAR_5] = 0;
 while (VAR_6 == ' ' || VAR_6 == '\t')
  VAR_6 = FUNC_0();

 VAR_7 = ((void*)0);
 if (VAR_6 != '\n') {
  if (VAR_6 != '=')
   return -1;
  VAR_7 = FUNC_2();
  if (!VAR_7)
   return -1;
 }
 return VAR_2(VAR_4, VAR_7, VAR_3);
}
