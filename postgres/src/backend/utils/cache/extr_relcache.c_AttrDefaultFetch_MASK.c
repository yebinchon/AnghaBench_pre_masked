
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* constr; } ;
struct TYPE_19__ {scalar_t__ adnum; int * adbin; } ;
struct TYPE_18__ {scalar_t__ adnum; } ;
struct TYPE_17__ {int attname; } ;
struct TYPE_16__ {TYPE_9__* rd_att; } ;
struct TYPE_15__ {int num_defval; TYPE_5__* defval; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__* Form_pg_attrdef ;
typedef int Datum ;
typedef TYPE_5__ AttrDefault ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 char* FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (TYPE_9__*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (int ,char*,scalar_t__,int ) ;
 int FUNC_11 (int ,int ,TYPE_9__*,int*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18(Relation VAR_9)
{
 AttrDefault *VAR_10 = VAR_9->rd_att->constr->defval;
 int VAR_11 = VAR_9->rd_att->constr->num_defval;
 Relation VAR_12;
 SysScanDesc VAR_13;
 ScanKeyData VAR_14;
 HeapTuple VAR_15;
 Datum VAR_16;
 bool VAR_17;
 int VAR_18;
 int VAR_19;

 FUNC_7(&VAR_14,
    VAR_2,
    VAR_5, VAR_7,
    FUNC_4(FUNC_6(VAR_9)));

 VAR_12 = FUNC_17(VAR_4, VAR_0);
 VAR_13 = FUNC_13(VAR_12, VAR_3, 1,
        ((void*)0), 1, &VAR_14);
 VAR_18 = 0;

 while (FUNC_1(VAR_15 = FUNC_15(VAR_13)))
 {
  Form_pg_attrdef VAR_20 = (Form_pg_attrdef) FUNC_0(VAR_15);
  Form_pg_attribute VAR_21 = FUNC_9(VAR_9->rd_att, VAR_20->adnum - 1);

  for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++)
  {
   if (VAR_20->adnum != VAR_10[VAR_19].adnum)
    continue;
   if (VAR_10[VAR_19].adbin != ((void*)0))
    FUNC_10(VAR_8, "multiple attrdef records found for attr %s of rel %s",
      FUNC_3(VAR_21->attname),
      FUNC_5(VAR_9));
   else
    VAR_18++;

   VAR_16 = FUNC_11(VAR_15,
         VAR_1,
         VAR_12->rd_att, &VAR_17);
   if (VAR_17)
    FUNC_10(VAR_8, "null adbin for attr %s of rel %s",
      FUNC_3(VAR_21->attname),
      FUNC_5(VAR_9));
   else
   {

    char *VAR_22 = FUNC_8(VAR_16);

    VAR_10[VAR_19].adbin = FUNC_2(VAR_6, VAR_22);
    FUNC_12(VAR_22);
   }
   break;
  }

  if (VAR_19 >= VAR_11)
   FUNC_10(VAR_8, "unexpected attrdef record found for attr %d of rel %s",
     VAR_20->adnum, FUNC_5(VAR_9));
 }

 FUNC_14(VAR_13);
 FUNC_16(VAR_12, VAR_0);
}
