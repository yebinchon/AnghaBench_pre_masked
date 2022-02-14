
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int attLabelType; int attPrefixType; int attLeafType; int attType; int config; } ;
struct TYPE_5__ {int isBuild; int myXid; int deadTupleStorage; int attLabelType; int attPrefixType; int attLeafType; int attType; int config; } ;
typedef TYPE_1__ SpGistState ;
typedef TYPE_2__ SpGistCache ;
typedef int Relation ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

void
FUNC_3(SpGistState *VAR_1, Relation VAR_2)
{
 SpGistCache *VAR_3;


 VAR_3 = FUNC_2(VAR_2);

 VAR_1->config = VAR_3->config;
 VAR_1->attType = VAR_3->attType;
 VAR_1->attLeafType = VAR_3->attLeafType;
 VAR_1->attPrefixType = VAR_3->attPrefixType;
 VAR_1->attLabelType = VAR_3->attLabelType;


 VAR_1->deadTupleStorage = FUNC_1(VAR_0);


 VAR_1->myXid = FUNC_0();


 VAR_1->isBuild = 0;
}
