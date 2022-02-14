
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int extnodename; } ;
struct TYPE_8__ {int (* nodeEqual ) (TYPE_2__ const*,TYPE_2__ const*) ;} ;
typedef TYPE_1__ ExtensibleNodeMethods ;
typedef TYPE_2__ ExtensibleNode ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__ const*,TYPE_2__ const*) ;

__attribute__((used)) static bool
FUNC_3(const ExtensibleNode *VAR_1, const ExtensibleNode *VAR_2)
{
 const ExtensibleNodeMethods *VAR_3;

 FUNC_0(VAR_0);


 VAR_3 = FUNC_1(VAR_1->extnodename, 0);


 if (!VAR_3->nodeEqual(VAR_1, VAR_2))
  return 0;

 return 1;
}
