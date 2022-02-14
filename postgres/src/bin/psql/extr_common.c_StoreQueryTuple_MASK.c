
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vars; int gset_prefix; } ;
typedef int PGresult ;


 char* FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int ,int) ;
 char* FUNC_2 (int const*,int ,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_8 (char*,int ,char*) ;

__attribute__((used)) static bool
FUNC_9(const PGresult *VAR_1)
{
 bool VAR_2 = 1;

 if (FUNC_4(VAR_1) < 1)
 {
  FUNC_7("no rows returned for \\gset");
  VAR_2 = 0;
 }
 else if (FUNC_4(VAR_1) > 1)
 {
  FUNC_7("more than one row returned for \\gset");
  VAR_2 = 0;
 }
 else
 {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_1); VAR_3++)
  {
   char *VAR_4 = FUNC_0(VAR_1, VAR_3);
   char *VAR_5;
   char *VAR_6;


   VAR_5 = FUNC_8("%s%s", VAR_0.gset_prefix, VAR_4);

   if (!FUNC_1(VAR_1, 0, VAR_3))
    VAR_6 = FUNC_2(VAR_1, 0, VAR_3);
   else
   {

    VAR_6 = ((void*)0);
   }

   if (!FUNC_5(VAR_0.vars, VAR_5, VAR_6))
   {
    FUNC_6(VAR_5);
    VAR_2 = 0;
    break;
   }

   FUNC_6(VAR_5);
  }
 }

 return VAR_2;
}
