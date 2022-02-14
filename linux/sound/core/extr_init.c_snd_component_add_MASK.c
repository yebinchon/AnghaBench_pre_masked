
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {char const* components; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*) ;

int FUNC_4(struct snd_card *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_3(VAR_1->components, VAR_2);
 if (VAR_3 != ((void*)0)) {
  if (VAR_3[VAR_4] == '\0' || VAR_3[VAR_4] == ' ')
   return 1;
 }
 if (FUNC_2(VAR_1->components) + 1 + VAR_4 + 1 > sizeof(VAR_1->components)) {
  FUNC_0();
  return -VAR_0;
 }
 if (VAR_1->components[0] != '\0')
  FUNC_1(VAR_1->components, " ");
 FUNC_1(VAR_1->components, VAR_2);
 return 0;
}
