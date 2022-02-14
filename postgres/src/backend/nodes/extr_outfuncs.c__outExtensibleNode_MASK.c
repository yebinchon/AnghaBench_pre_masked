
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int extnodename; } ;
struct TYPE_6__ {int (* nodeOut ) (int ,TYPE_2__ const*) ;} ;
typedef int StringInfo ;
typedef TYPE_1__ ExtensibleNodeMethods ;
typedef TYPE_2__ ExtensibleNode ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_2__ const*) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_1, const ExtensibleNode *VAR_2)
{
 const ExtensibleNodeMethods *VAR_3;

 VAR_3 = FUNC_0(VAR_2->extnodename, 0);

 FUNC_1("EXTENSIBLENODE");

 FUNC_2(VAR_0);


 VAR_3->nodeOut(VAR_1, VAR_2);
}
