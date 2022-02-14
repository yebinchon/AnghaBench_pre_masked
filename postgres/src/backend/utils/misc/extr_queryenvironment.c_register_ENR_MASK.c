
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_10__ {TYPE_1__ md; } ;
struct TYPE_9__ {int namedRelList; } ;
typedef TYPE_2__ QueryEnvironment ;
typedef TYPE_3__* EphemeralNamedRelation ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void
FUNC_3(QueryEnvironment *VAR_0, EphemeralNamedRelation VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(FUNC_1(VAR_0, VAR_1->md.name) == ((void*)0));

 VAR_0->namedRelList = FUNC_2(VAR_0->namedRelList, VAR_1);
}
