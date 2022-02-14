
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tupDesc_identifier; scalar_t__ typtype; int * tupDesc; int domainBaseType; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_8__ {int rectypeid; TYPE_2__* datatype; } ;
struct TYPE_7__ {scalar_t__ tupdesc_id; int typoid; TYPE_1__* tcache; int atttypmod; int * origtypname; } ;
typedef TYPE_2__ PLpgSQL_type ;
typedef TYPE_3__ PLpgSQL_rec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_7(PLpgSQL_rec *VAR_6)
{
 PLpgSQL_type *VAR_7 = VAR_6->datatype;
 TypeCacheEntry *VAR_8;

 if (VAR_6->rectypeid == VAR_2)
  return;
 FUNC_0(VAR_7 != ((void*)0));
 if (VAR_7->tcache &&
  VAR_7->tcache->tupDesc_identifier == VAR_7->tupdesc_id)
  return;






 if (VAR_7->origtypname != ((void*)0))
 {

  FUNC_6(((void*)0), VAR_7->origtypname,
        &VAR_7->typoid,
        &VAR_7->atttypmod);
 }


 VAR_8 = FUNC_5(VAR_7->typoid,
         VAR_4 |
         VAR_3);
 if (VAR_8->typtype == VAR_5)
  VAR_8 = FUNC_5(VAR_8->domainBaseType,
          VAR_4);
 if (VAR_8->tupDesc == ((void*)0))
 {




  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("type %s is not composite",
      FUNC_4(VAR_7->typoid))));
 }





 VAR_7->tcache = VAR_8;
 VAR_7->tupdesc_id = VAR_8->tupDesc_identifier;




 VAR_6->rectypeid = VAR_7->typoid;
}
