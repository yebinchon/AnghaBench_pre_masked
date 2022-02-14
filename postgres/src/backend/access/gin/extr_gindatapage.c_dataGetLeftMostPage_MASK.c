
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ maxoff; } ;
typedef int PostingItem ;
typedef int Page ;
typedef int GinBtree ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static BlockNumber
FUNC_6(GinBtree VAR_1, Page VAR_2)
{
 PostingItem *VAR_3;

 FUNC_0(!FUNC_4(VAR_2));
 FUNC_0(FUNC_3(VAR_2));
 FUNC_0(FUNC_2(VAR_2)->maxoff >= VAR_0);

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 return FUNC_5(VAR_3);
}
