
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type_id; scalar_t__ tupDesc_identifier; TYPE_7__* tupDesc; int typrelid; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_12__ {scalar_t__ tdrefcount; } ;
struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ reltype; } ;
typedef TYPE_3__* Relation ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_5 (int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(TypeCacheEntry *VAR_3)
{
 Relation VAR_4;

 if (!FUNC_1(VAR_3->typrelid))
  FUNC_3(VAR_1, "invalid typrelid for composite type %u",
    VAR_3->type_id);
 VAR_4 = FUNC_5(VAR_3->typrelid, VAR_0);
 FUNC_0(VAR_4->rd_rel->reltype == VAR_3->type_id);







 VAR_3->tupDesc = FUNC_2(VAR_4);

 FUNC_0(VAR_3->tupDesc->tdrefcount > 0);
 VAR_3->tupDesc->tdrefcount++;





 VAR_3->tupDesc_identifier = ++VAR_2;

 FUNC_4(VAR_4, VAR_0);
}
