
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* query_data; } ;
typedef TYPE_2__ plperl_query_entry ;
struct TYPE_14__ {int nargs; int plan; int * argtypioparams; int * arginfuncs; int * argtypes; } ;
typedef TYPE_3__ plperl_query_desc ;
struct TYPE_18__ {TYPE_1__* prodesc; } ;
struct TYPE_17__ {int query_hash; } ;
struct TYPE_16__ {int message; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_12__ {int fn_readonly; } ;
typedef int SV ;
typedef int ResourceOwner ;
typedef TYPE_4__* Portal ;
typedef int MemoryContext ;
typedef TYPE_5__ ErrorData ;
typedef char Datum ;


 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_4__* FUNC_10 (int *,int ,char*,char*,int ) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 TYPE_8__* VAR_5 ;
 int FUNC_15 (int ,char*,...) ;
 TYPE_2__* FUNC_16 (int ,char*,int ,int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 TYPE_6__* VAR_6 ;
 char FUNC_19 (int *,int ,int,int *,int *,int ,int*) ;

SV *
FUNC_20(char *VAR_7, int VAR_8, SV **VAR_9)
{
 int VAR_10;
 char *VAR_11;
 Datum *VAR_12;
 plperl_query_desc *VAR_13;
 plperl_query_entry *VAR_14;
 SV *VAR_15;
 Portal VAR_16 = ((void*)0);





 MemoryContext VAR_17 = VAR_0;
 ResourceOwner VAR_18 = VAR_1;

 FUNC_12();

 FUNC_0(((void*)0));

 FUNC_3(VAR_17);

 FUNC_6();
 {



  VAR_14 = FUNC_16(VAR_6->query_hash, VAR_7,
         VAR_3, ((void*)0));
  if (VAR_14 == ((void*)0))
   FUNC_15(VAR_2, "spi_query_prepared: Invalid prepared query passed");

  VAR_13 = VAR_14->query_data;
  if (VAR_13 == ((void*)0))
   FUNC_15(VAR_2, "spi_query_prepared: plperl query_hash value vanished");

  if (VAR_13->nargs != VAR_8)
   FUNC_15(VAR_2, "spi_query_prepared: expected %d argument(s), %d passed",
     VAR_13->nargs, VAR_8);




  if (VAR_8 > 0)
  {
   VAR_11 = (char *) FUNC_17(VAR_8);
   VAR_12 = (Datum *) FUNC_17(VAR_8 * sizeof(Datum));
  }
  else
  {
   VAR_11 = ((void*)0);
   VAR_12 = ((void*)0);
  }

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
  {
   bool VAR_19;

   VAR_12[VAR_10] = FUNC_19(VAR_9[VAR_10],
             VAR_13->argtypes[VAR_10],
             -1,
             ((void*)0),
             &VAR_13->arginfuncs[VAR_10],
             VAR_13->argtypioparams[VAR_10],
             &VAR_19);
   VAR_11[VAR_10] = VAR_19 ? 'n' : ' ';
  }




  VAR_16 = FUNC_10(((void*)0), VAR_13->plan, VAR_12, VAR_11,
         VAR_5->prodesc->fn_readonly);
  if (VAR_8 > 0)
  {
   FUNC_18(VAR_12);
   FUNC_18(VAR_11);
  }
  if (VAR_16 == ((void*)0))
   FUNC_15(VAR_2, "SPI_cursor_open() failed:%s",
     FUNC_11(VAR_4));

  VAR_15 = FUNC_14(VAR_16->name);

  FUNC_7(VAR_16);


  FUNC_8();
  FUNC_3(VAR_17);
  VAR_1 = VAR_18;
 }
 FUNC_4();
 {
  ErrorData *VAR_20;


  FUNC_3(VAR_17);
  VAR_20 = FUNC_1();
  FUNC_2();


  FUNC_9();
  FUNC_3(VAR_17);
  VAR_1 = VAR_18;


  FUNC_13(VAR_20->message);


  return ((void*)0);
 }
 FUNC_5();

 return VAR_15;
}
