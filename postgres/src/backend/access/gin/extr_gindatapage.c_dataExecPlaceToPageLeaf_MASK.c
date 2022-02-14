
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int walinfolen; int walinfo; } ;
typedef TYPE_1__ disassembledLeaf ;
struct TYPE_6__ {int isBuild; int index; } ;
typedef int GinBtreeStack ;
typedef TYPE_2__* GinBtree ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(GinBtree VAR_0, Buffer VAR_1, GinBtreeStack *VAR_2,
      void *VAR_3, void *VAR_4)
{
 disassembledLeaf *VAR_5 = (disassembledLeaf *) VAR_4;


 FUNC_2(VAR_1, VAR_5);


 if (FUNC_0(VAR_0->index) && !VAR_0->isBuild)
 {
  FUNC_1(0, VAR_5->walinfo, VAR_5->walinfolen);
 }
}
