
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct winsize {int ws_row; } ;
struct TYPE_3__ {unsigned short pager; int pager_min_lines; } ;
typedef TYPE_1__ printTableOpt ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,struct winsize*) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 () ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

FILE *
FUNC_9(int VAR_4, const printTableOpt *VAR_5)
{

 if (VAR_5 && VAR_5->pager && FUNC_4(FUNC_1(VAR_2)) && FUNC_4(FUNC_1(VAR_3)))
 {
  {
   const char *VAR_6;
   FILE *VAR_7;

   VAR_6 = FUNC_2("PSQL_PAGER");
   if (!VAR_6)
    VAR_6 = FUNC_2("PAGER");
   if (!VAR_6)
    VAR_6 = VAR_0;
   else
   {

    if (FUNC_8(VAR_6, " \t\r\n") == FUNC_7(VAR_6))
     return VAR_3;
   }
   FUNC_0();
   VAR_7 = FUNC_5(VAR_6, "w");
   if (VAR_7)
    return VAR_7;

   FUNC_6();
  }
 }

 return VAR_3;
}
