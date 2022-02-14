
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* key; } ;
typedef TYPE_1__ PostingItem ;
typedef int Page ;
typedef int GinBtree ;
typedef int BlockNumber ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 void** FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(GinBtree VAR_1, Page VAR_2, BlockNumber VAR_3, Page VAR_4, BlockNumber VAR_5, Page VAR_6)
{
 PostingItem VAR_7,
    VAR_8;

 VAR_7.key = *FUNC_1(VAR_4);
 FUNC_2(&VAR_7, VAR_3);
 FUNC_0(VAR_2, &VAR_7, VAR_0);

 VAR_8.key = *FUNC_1(VAR_6);
 FUNC_2(&VAR_8, VAR_5);
 FUNC_0(VAR_2, &VAR_8, VAR_0);
}
