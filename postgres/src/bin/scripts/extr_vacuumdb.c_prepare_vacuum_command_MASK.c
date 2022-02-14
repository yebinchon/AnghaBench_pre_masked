
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ and_analyze; scalar_t__ verbose; scalar_t__ freeze; scalar_t__ full; scalar_t__ skip_locked; scalar_t__ disable_page_skipping; scalar_t__ analyze_only; } ;
typedef TYPE_1__ vacuumingOptions ;
typedef int PQExpBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(PQExpBuffer VAR_0, int VAR_1,
        vacuumingOptions *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = " (";
 const char *VAR_5 = ", ";
 const char *VAR_6 = VAR_4;

 FUNC_4(VAR_0);

 if (VAR_2->analyze_only)
 {
  FUNC_3(VAR_0, "ANALYZE");


  if (VAR_1 >= 110000)
  {
   if (VAR_2->skip_locked)
   {

    FUNC_0(VAR_1 >= 120000);
    FUNC_1(VAR_0, "%sSKIP_LOCKED", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_2->verbose)
   {
    FUNC_1(VAR_0, "%sVERBOSE", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_6 != VAR_4)
    FUNC_2(VAR_0, ')');
  }
  else
  {
   if (VAR_2->verbose)
    FUNC_3(VAR_0, " VERBOSE");
  }
 }
 else
 {
  FUNC_3(VAR_0, "VACUUM");


  if (VAR_1 >= 90000)
  {
   if (VAR_2->disable_page_skipping)
   {

    FUNC_0(VAR_1 >= 90600);
    FUNC_1(VAR_0, "%sDISABLE_PAGE_SKIPPING", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_2->skip_locked)
   {

    FUNC_0(VAR_1 >= 120000);
    FUNC_1(VAR_0, "%sSKIP_LOCKED", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_2->full)
   {
    FUNC_1(VAR_0, "%sFULL", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_2->freeze)
   {
    FUNC_1(VAR_0, "%sFREEZE", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_2->verbose)
   {
    FUNC_1(VAR_0, "%sVERBOSE", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_2->and_analyze)
   {
    FUNC_1(VAR_0, "%sANALYZE", VAR_6);
    VAR_6 = VAR_5;
   }
   if (VAR_6 != VAR_4)
    FUNC_2(VAR_0, ')');
  }
  else
  {
   if (VAR_2->full)
    FUNC_3(VAR_0, " FULL");
   if (VAR_2->freeze)
    FUNC_3(VAR_0, " FREEZE");
   if (VAR_2->verbose)
    FUNC_3(VAR_0, " VERBOSE");
   if (VAR_2->and_analyze)
    FUNC_3(VAR_0, " ANALYZE");
  }
 }

 FUNC_1(VAR_0, " %s;", VAR_3);
}
