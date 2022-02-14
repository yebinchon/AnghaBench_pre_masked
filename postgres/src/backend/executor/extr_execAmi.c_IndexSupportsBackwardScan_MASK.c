
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int relam; } ;
struct TYPE_5__ {int amcanbackward; } ;
typedef int Oid ;
typedef TYPE_1__ IndexAmRoutine ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_8(Oid VAR_2)
{
 bool VAR_3;
 HeapTuple VAR_4;
 Form_pg_class VAR_5;
 IndexAmRoutine *VAR_6;


 VAR_4 = FUNC_5(VAR_1, FUNC_3(VAR_2));
 if (!FUNC_2(VAR_4))
  FUNC_6(VAR_0, "cache lookup failed for relation %u", VAR_2);
 VAR_5 = (Form_pg_class) FUNC_0(VAR_4);


 VAR_6 = FUNC_1(VAR_5->relam, 0);

 VAR_3 = VAR_6->amcanbackward;

 FUNC_7(VAR_6);
 FUNC_4(VAR_4);

 return VAR_3;
}
