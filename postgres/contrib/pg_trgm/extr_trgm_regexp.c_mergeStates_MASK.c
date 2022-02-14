
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; int flags; } ;
typedef TYPE_1__ TrgmState ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(TrgmState *VAR_0, TrgmState *VAR_1)
{
 FUNC_0(VAR_0 != VAR_1);
 FUNC_0(!VAR_0->parent);
 FUNC_0(!VAR_1->parent);


 VAR_0->flags |= VAR_1->flags;


 VAR_1->parent = VAR_0;
}
