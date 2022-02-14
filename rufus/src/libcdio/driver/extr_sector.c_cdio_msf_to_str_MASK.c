
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m; int s; int f; } ;
typedef TYPE_1__ msf_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int,int,int) ;
 char* FUNC_1 (char*) ;

char *
FUNC_2 (const msf_t *VAR_0)
{
  char VAR_1[16];

  FUNC_0 (VAR_1, sizeof (VAR_1), "%2.2x:%2.2x:%2.2x", VAR_0->m, VAR_0->s, VAR_0->f);
  return FUNC_1 (VAR_1);
}
