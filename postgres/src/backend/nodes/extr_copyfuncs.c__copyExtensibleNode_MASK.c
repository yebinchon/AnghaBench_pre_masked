
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int extnodename; } ;
struct TYPE_8__ {int (* nodeCopy ) (TYPE_2__*,TYPE_2__ const*) ;int node_size; } ;
typedef TYPE_1__ ExtensibleNodeMethods ;
typedef TYPE_2__ ExtensibleNode ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__ const*) ;

__attribute__((used)) static ExtensibleNode *
FUNC_4(const ExtensibleNode *VAR_2)
{
 ExtensibleNode *VAR_3;
 const ExtensibleNodeMethods *VAR_4;

 VAR_4 = FUNC_1(VAR_2->extnodename, 0);
 VAR_3 = (ExtensibleNode *) FUNC_2(VAR_4->node_size,
           VAR_0);
 FUNC_0(VAR_1);


 VAR_4->nodeCopy(VAR_3, VAR_2);

 return VAR_3;
}
