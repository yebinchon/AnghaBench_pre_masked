
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rightlink; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

Buffer
FUNC_9(Buffer VAR_1, Relation VAR_2, int VAR_3)
{
 Buffer VAR_4;
 Page VAR_5 = FUNC_0(VAR_1);
 bool VAR_6 = FUNC_4(VAR_5);
 bool VAR_7 = FUNC_2(VAR_5);
 BlockNumber VAR_8 = FUNC_1(VAR_5)->rightlink;

 VAR_4 = FUNC_6(VAR_2, VAR_8);
 FUNC_5(VAR_4, VAR_3);
 FUNC_7(VAR_1);


 VAR_5 = FUNC_0(VAR_4);
 if (VAR_6 != FUNC_4(VAR_5) || VAR_7 != FUNC_2(VAR_5))
  FUNC_8(VAR_0, "right sibling of GIN page is of different type");





 if (FUNC_3(VAR_5))
  FUNC_8(VAR_0, "right sibling of GIN page was deleted");

 return VAR_4;
}
