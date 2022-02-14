
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_7 (int ,int ) ;

void
FUNC_8(char *VAR_6, Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;

 VAR_9 = FUNC_7(FUNC_5(((void*)0), VAR_6, -1), VAR_0);

 if (VAR_9->rd_rel->relkind != VAR_5 &&
  VAR_9->rd_rel->relkind != VAR_4)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("\"%s\" is not a table or materialized view",
      VAR_6)));


 if (!FUNC_0(VAR_9, VAR_7, VAR_8, (Datum) 0,
       VAR_0, 0))
  FUNC_1(VAR_2, "\"%s\" does not require a toast table",
    VAR_6);

 FUNC_6(VAR_9, VAR_3);
}
