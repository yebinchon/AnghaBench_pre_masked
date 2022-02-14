
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* query_data; } ;
typedef TYPE_2__ plperl_query_entry ;
struct TYPE_11__ {int nargs; int plan; int * argtypioparams; int * arginfuncs; int * argtypes; } ;
typedef TYPE_3__ plperl_query_desc ;
struct TYPE_14__ {TYPE_1__* prodesc; } ;
struct TYPE_13__ {int query_hash; } ;
struct TYPE_12__ {int message; } ;
struct TYPE_9__ {int fn_readonly; } ;
typedef int SV ;
typedef int ResourceOwner ;
typedef int MemoryContext ;
typedef int HV ;
typedef TYPE_4__ ErrorData ;
typedef char Datum ;


 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 TYPE_7__* VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int ,char*,...) ;
 TYPE_2__* FUNC_15 (int ,char*,int ,int *) ;
 int ** FUNC_16 (int *,char*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 TYPE_5__* VAR_8 ;
 int * FUNC_19 (int ,int ,int) ;
 char FUNC_20 (int *,int ,int,int *,int *,int ,int*) ;

HV *
FUNC_21(char *VAR_9, HV *VAR_10, int VAR_11, SV **VAR_12)
{
 HV *VAR_13;
 SV **VAR_14;
 int VAR_15,
    VAR_16,
    VAR_17;
 char *VAR_18;
 Datum *VAR_19;
 plperl_query_desc *VAR_20;
 plperl_query_entry *VAR_21;





 MemoryContext VAR_22 = VAR_0;
 ResourceOwner VAR_23 = VAR_1;

 FUNC_12();

 FUNC_0(((void*)0));

 FUNC_3(VAR_22);

 FUNC_6();
 {
  VAR_7;




  VAR_21 = FUNC_15(VAR_8->query_hash, VAR_9,
         VAR_3, ((void*)0));
  if (VAR_21 == ((void*)0))
   FUNC_14(VAR_2, "spi_exec_prepared: Invalid prepared query passed");

  VAR_20 = VAR_21->query_data;
  if (VAR_20 == ((void*)0))
   FUNC_14(VAR_2, "spi_exec_prepared: plperl query_hash value vanished");

  if (VAR_20->nargs != VAR_11)
   FUNC_14(VAR_2, "spi_exec_prepared: expected %d argument(s), %d passed",
     VAR_20->nargs, VAR_11);




  VAR_16 = 0;
  if (VAR_10 != ((void*)0))
  {
   VAR_14 = FUNC_16(VAR_10, "limit");
   if (VAR_14 && *VAR_14 && FUNC_10(*VAR_14))
    VAR_16 = FUNC_11(*VAR_14);
  }



  if (VAR_11 > 0)
  {
   VAR_18 = (char *) FUNC_17(VAR_11);
   VAR_19 = (Datum *) FUNC_17(VAR_11 * sizeof(Datum));
  }
  else
  {
   VAR_18 = ((void*)0);
   VAR_19 = ((void*)0);
  }

  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
  {
   bool VAR_24;

   VAR_19[VAR_15] = FUNC_20(VAR_12[VAR_15],
             VAR_20->argtypes[VAR_15],
             -1,
             ((void*)0),
             &VAR_20->arginfuncs[VAR_15],
             VAR_20->argtypioparams[VAR_15],
             &VAR_24);
   VAR_18[VAR_15] = VAR_24 ? 'n' : ' ';
  }




  VAR_17 = FUNC_9(VAR_20->plan, VAR_19, VAR_18,
          VAR_6->prodesc->fn_readonly, VAR_16);
  VAR_13 = FUNC_19(VAR_5, VAR_4,
             VAR_17);
  if (VAR_11 > 0)
  {
   FUNC_18(VAR_19);
   FUNC_18(VAR_18);
  }


  FUNC_7();
  FUNC_3(VAR_22);
  VAR_1 = VAR_23;
 }
 FUNC_4();
 {
  ErrorData *VAR_25;


  FUNC_3(VAR_22);
  VAR_25 = FUNC_1();
  FUNC_2();


  FUNC_8();
  FUNC_3(VAR_22);
  VAR_1 = VAR_23;


  FUNC_13(VAR_25->message);


  return ((void*)0);
 }
 FUNC_5();

 return VAR_13;
}
