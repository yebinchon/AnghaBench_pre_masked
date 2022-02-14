
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ReindexIndexCallbackState {int concurrent; int locked_table_oid; } ;
struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relkind; char relpersistence; } ;
typedef TYPE_2__* Relation ;
typedef int RangeVar ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,struct ReindexIndexCallbackState*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,char,int) ;

void
FUNC_6(RangeVar *VAR_7, int VAR_8, bool VAR_9)
{
 struct ReindexIndexCallbackState VAR_10;
 Oid VAR_11;
 Relation VAR_12;
 char VAR_13;






 VAR_10.concurrent = VAR_9;
 VAR_10.locked_table_oid = VAR_1;
 VAR_11 = FUNC_0(VAR_7,
           VAR_9 ? VAR_6 : VAR_0,
           0,
           VAR_5,
           &VAR_10);





 VAR_12 = FUNC_4(VAR_11, VAR_2);

 if (VAR_12->rd_rel->relkind == VAR_4)
 {
  FUNC_1(VAR_12);
  return;
 }

 VAR_13 = VAR_12->rd_rel->relpersistence;
 FUNC_3(VAR_12, VAR_2);

 if (VAR_9)
  FUNC_2(VAR_11, VAR_8);
 else
  FUNC_5(VAR_11, 0, VAR_13,
       VAR_8 | VAR_3);
}
