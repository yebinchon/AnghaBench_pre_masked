
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rd_node; } ;
typedef TYPE_1__* Relation ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_3 ;

BlockNumber
FUNC_5(Relation VAR_4, BlockNumber VAR_5)
{
 BlockNumber VAR_6;

 FUNC_0(VAR_2, VAR_1);
 VAR_6 = FUNC_4(VAR_4->rd_node, 0, 0);
 FUNC_1(VAR_2);







 if (VAR_6 >= VAR_5)
  VAR_6 = 0;
 return VAR_6;
}
