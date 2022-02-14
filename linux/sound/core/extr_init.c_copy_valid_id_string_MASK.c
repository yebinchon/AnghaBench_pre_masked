
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {char* id; } ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static void FUNC_3(struct snd_card *VAR_0, const char *VAR_1,
     const char *VAR_2)
{
 char *VAR_3 = VAR_0->id;

 while (*VAR_2 && !FUNC_0(*VAR_2))
  VAR_2++;
 if (FUNC_2(*VAR_2))
  *VAR_3++ = FUNC_1(*VAR_1) ? *VAR_1 : 'D';
 while (*VAR_2 && (size_t)(VAR_3 - VAR_0->id) < sizeof(VAR_0->id) - 1) {
  if (FUNC_0(*VAR_2))
   *VAR_3++ = *VAR_2;
  VAR_2++;
 }
 *VAR_3 = 0;
}
