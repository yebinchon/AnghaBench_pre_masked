
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** dirname; int * dirdesc; scalar_t__ depth; scalar_t__ baselen; } ;
typedef TYPE_1__ pg_tzenum ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*) ;

pg_tzenum *
FUNC_8(void)
{
 pg_tzenum *VAR_1 = (pg_tzenum *) FUNC_4(sizeof(pg_tzenum));
 char *VAR_2 = FUNC_6(FUNC_5());

 VAR_1->baselen = FUNC_7(VAR_2) + 1;
 VAR_1->depth = 0;
 VAR_1->dirname[0] = VAR_2;
 VAR_1->dirdesc[0] = FUNC_0(VAR_2);
 if (!VAR_1->dirdesc[0])
  FUNC_1(VAR_0,
    (FUNC_2(),
     FUNC_3("could not open directory \"%s\": %m", VAR_2)));
 return VAR_1;
}
