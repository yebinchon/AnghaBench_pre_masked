
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int dumpId; TYPE_2__* namespace; int name; } ;
struct TYPE_16__ {TYPE_4__ dobj; int rolname; } ;
typedef TYPE_5__ TableInfo ;
struct TYPE_14__ {int dump; int dumpId; int catId; int name; } ;
struct TYPE_18__ {TYPE_3__ dobj; scalar_t__ separate; TYPE_5__* contable; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_13__ {TYPE_1__ dobj; } ;
typedef TYPE_6__* PQExpBuffer ;
typedef TYPE_7__ ConstraintInfo ;
typedef int Archive ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,char*,int ) ;
 TYPE_6__* FUNC_1 () ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(Archive *VAR_1, ConstraintInfo *VAR_2)
{
 TableInfo *VAR_3 = VAR_2->contable;
 PQExpBuffer VAR_4 = FUNC_1();
 char *VAR_5;

 VAR_5 = FUNC_6(FUNC_4(VAR_3->dobj.name));

 FUNC_0(VAR_4, "CONSTRAINT %s ON",
       FUNC_4(VAR_2->dobj.name));

 if (VAR_2->dobj.dump & VAR_0)
  FUNC_3(VAR_1, VAR_4->data, VAR_5,
     VAR_3->dobj.namespace->dobj.name,
     VAR_3->rolname,
     VAR_2->dobj.catId, 0,
     VAR_2->separate ? VAR_2->dobj.dumpId : VAR_3->dobj.dumpId);

 FUNC_2(VAR_4);
 FUNC_5(VAR_5);
}
