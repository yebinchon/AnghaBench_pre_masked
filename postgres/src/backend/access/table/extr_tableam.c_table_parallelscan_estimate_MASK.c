
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_tableam; } ;
struct TYPE_5__ {int (* parallelscan_estimate ) (TYPE_2__*) ;} ;
typedef scalar_t__ Snapshot ;
typedef int Size ;
typedef TYPE_2__* Relation ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

Size
FUNC_5(Relation VAR_1, Snapshot VAR_2)
{
 Size VAR_3 = 0;

 if (FUNC_2(VAR_2))
  VAR_3 = FUNC_3(VAR_3, FUNC_1(VAR_2));
 else
  FUNC_0(VAR_2 == VAR_0);

 VAR_3 = FUNC_3(VAR_3, VAR_1->rd_tableam->parallelscan_estimate(VAR_1));

 return VAR_3;
}
