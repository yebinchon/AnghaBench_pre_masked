
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* parent; } ;
struct TYPE_6__ {int relids; } ;
typedef int Relids ;
typedef TYPE_2__ Path ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

Relids
FUNC_4(Path *VAR_0, Path *VAR_1)
{
 Relids VAR_2 = FUNC_1(VAR_0);
 Relids VAR_3 = FUNC_1(VAR_1);
 Relids VAR_4;


 FUNC_0(!FUNC_2(VAR_2, VAR_1->parent->relids));
 FUNC_0(!FUNC_2(VAR_3, VAR_0->parent->relids));

 VAR_4 = FUNC_3(VAR_2, VAR_3);

 return VAR_4;
}
