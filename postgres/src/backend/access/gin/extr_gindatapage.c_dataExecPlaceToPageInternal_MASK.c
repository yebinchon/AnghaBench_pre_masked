
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int newitem; int offset; } ;
typedef TYPE_1__ ginxlogInsertDataInternal ;
struct TYPE_8__ {int isBuild; int index; } ;
struct TYPE_7__ {int off; } ;
typedef int PostingItem ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_2__ GinBtreeStack ;
typedef TYPE_3__* GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(GinBtree VAR_0, Buffer VAR_1, GinBtreeStack *VAR_2,
       void *VAR_3, BlockNumber VAR_4,
       void *VAR_5)
{
 Page VAR_6 = FUNC_0(VAR_1);
 OffsetNumber VAR_7 = VAR_2->off;
 PostingItem *VAR_8;


 VAR_8 = FUNC_2(VAR_6, VAR_7);
 FUNC_3(VAR_8, VAR_4);


 VAR_8 = (PostingItem *) VAR_3;
 FUNC_1(VAR_6, VAR_8, VAR_7);

 if (FUNC_4(VAR_0->index) && !VAR_0->isBuild)
 {





  static ginxlogInsertDataInternal VAR_9;

  VAR_9.offset = VAR_7;
  VAR_9.newitem = *VAR_8;

  FUNC_5(0, (char *) &VAR_9,
       sizeof(ginxlogInsertDataInternal));
 }
}
