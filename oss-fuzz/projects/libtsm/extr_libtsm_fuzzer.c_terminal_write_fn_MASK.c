
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsm_vte {int dummy; } ;
typedef int out ;



__attribute__((used)) static void FUNC_0(struct tsm_vte *VAR_0,
         const char *VAR_1,
         size_t VAR_2,
         void *VAR_3)
{

  static char VAR_4[4096];
  while (VAR_2--)
    VAR_4[VAR_2 % sizeof(VAR_4)] = VAR_1[VAR_2];
}
