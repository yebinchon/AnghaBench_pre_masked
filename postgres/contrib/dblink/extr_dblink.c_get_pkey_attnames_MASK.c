
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleDesc ;
struct TYPE_9__ {int * values; } ;
struct TYPE_11__ {int indnkeyatts; TYPE_1__ indkey; scalar_t__ indisprimary; } ;
struct TYPE_10__ {int rd_att; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_11 (int ,int ) ;

__attribute__((used)) static char **
FUNC_12(Relation VAR_6, int16 *VAR_7)
{
 Relation VAR_8;
 ScanKeyData VAR_9;
 SysScanDesc VAR_10;
 HeapTuple VAR_11;
 int VAR_12;
 char **VAR_13 = ((void*)0);
 TupleDesc VAR_14;


 *VAR_7 = 0;

 VAR_14 = VAR_6->rd_att;


 VAR_8 = FUNC_11(VAR_5, VAR_0);
 FUNC_5(&VAR_9,
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(FUNC_3(VAR_6)));

 VAR_10 = FUNC_7(VAR_8, VAR_4, 1,
         ((void*)0), 1, &VAR_9);

 while (FUNC_1(VAR_11 = FUNC_9(VAR_10)))
 {
  Form_pg_index VAR_15 = (Form_pg_index) FUNC_0(VAR_11);


  if (VAR_15->indisprimary)
  {
   *VAR_7 = VAR_15->indnkeyatts;
   if (*VAR_7 > 0)
   {
    VAR_13 = (char **) FUNC_6(*VAR_7 * sizeof(char *));

    for (VAR_12 = 0; VAR_12 < *VAR_7; VAR_12++)
     VAR_13[VAR_12] = FUNC_4(VAR_14, VAR_15->indkey.values[VAR_12]);
   }
   break;
  }
 }

 FUNC_8(VAR_10);
 FUNC_10(VAR_8, VAR_0);

 return VAR_13;
}
