
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ginxlogRecompressDataLeaf ;
struct TYPE_2__ {int offset; int newitem; } ;
typedef TYPE_1__ ginxlogInsertDataInternal ;
typedef int PostingItem ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(Buffer VAR_0, bool VAR_1, BlockNumber VAR_2, void *VAR_3)
{
 Page VAR_4 = FUNC_1(VAR_0);

 if (VAR_1)
 {
  ginxlogRecompressDataLeaf *VAR_5 = (ginxlogRecompressDataLeaf *) VAR_3;

  FUNC_0(FUNC_4(VAR_4));

  FUNC_6(VAR_4, VAR_5);
 }
 else
 {
  ginxlogInsertDataInternal *VAR_6 = (ginxlogInsertDataInternal *) VAR_3;
  PostingItem *VAR_7;

  FUNC_0(!FUNC_4(VAR_4));


  VAR_7 = FUNC_3(VAR_4, VAR_6->offset);
  FUNC_5(VAR_7, VAR_2);

  FUNC_2(VAR_4, &VAR_6->newitem, VAR_6->offset);
 }
}
