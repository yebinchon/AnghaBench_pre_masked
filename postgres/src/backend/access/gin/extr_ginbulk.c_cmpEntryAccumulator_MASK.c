
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ginstate; } ;
struct TYPE_3__ {int category; int key; int attnum; } ;
typedef int RBTNode ;
typedef TYPE_1__ GinEntryAccumulator ;
typedef TYPE_2__ BuildAccumulator ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const RBTNode *VAR_0, const RBTNode *VAR_1, void *VAR_2)
{
 const GinEntryAccumulator *VAR_3 = (const GinEntryAccumulator *) VAR_0;
 const GinEntryAccumulator *VAR_4 = (const GinEntryAccumulator *) VAR_1;
 BuildAccumulator *VAR_5 = (BuildAccumulator *) VAR_2;

 return FUNC_0(VAR_5->ginstate,
        VAR_3->attnum, VAR_3->key, VAR_3->category,
        VAR_4->attnum, VAR_4->key, VAR_4->category);
}
