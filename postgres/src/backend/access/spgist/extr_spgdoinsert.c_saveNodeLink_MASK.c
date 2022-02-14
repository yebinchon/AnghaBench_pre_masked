
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; int node; int offnum; int page; } ;
typedef scalar_t__ SpGistInnerTuple ;
typedef TYPE_1__ SPPageDesc ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_0, SPPageDesc *VAR_1,
    BlockNumber VAR_2, OffsetNumber VAR_3)
{
 SpGistInnerTuple VAR_4;

 VAR_4 = (SpGistInnerTuple) FUNC_1(VAR_1->page,
            FUNC_2(VAR_1->page, VAR_1->offnum));

 FUNC_3(VAR_4, VAR_1->node, VAR_2, VAR_3);

 FUNC_0(VAR_1->buffer);
}
