
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfgname; int cfgnamespace; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef scalar_t__ GucSource ;
typedef TYPE_1__* Form_pg_ts_config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int ,int ) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

bool
FUNC_19(char **VAR_7, void **VAR_8, GucSource VAR_9)
{





 if (FUNC_2() && VAR_3 != VAR_2)
 {
  Oid VAR_10;
  HeapTuple VAR_11;
  Form_pg_ts_config VAR_12;
  char *VAR_13;

  VAR_10 = FUNC_14(FUNC_18(*VAR_7), 1);





  if (!FUNC_5(VAR_10))
  {
   if (VAR_9 == VAR_5)
   {
    FUNC_9(VAR_4,
      (FUNC_10(VAR_0),
       FUNC_11("text search configuration \"%s\" does not exist", *VAR_7)));
    return 1;
   }
   else
    return 0;
  }





  VAR_11 = FUNC_7(VAR_6, FUNC_4(VAR_10));
  if (!FUNC_1(VAR_11))
   FUNC_8(VAR_1, "cache lookup failed for text search configuration %u",
     VAR_10);
  VAR_12 = (Form_pg_ts_config) FUNC_0(VAR_11);

  VAR_13 = FUNC_16(FUNC_13(VAR_12->cfgnamespace),
           FUNC_3(VAR_12->cfgname));

  FUNC_6(VAR_11);


  FUNC_12(*VAR_7);
  *VAR_7 = FUNC_17(VAR_13);
  FUNC_15(VAR_13);
  if (!*VAR_7)
   return 0;
 }

 return 1;
}
