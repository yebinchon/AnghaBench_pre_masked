
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TimeLineID ;
struct TYPE_3__ {int ThisTimeLineID; int redo; } ;
struct TYPE_4__ {TYPE_1__ checkPointCopy; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

void
FUNC_2(XLogRecPtr *VAR_3, TimeLineID *VAR_4)
{
 FUNC_0(VAR_1, VAR_2);
 *VAR_3 = VAR_0->checkPointCopy.redo;
 *VAR_4 = VAR_0->checkPointCopy.ThisTimeLineID;
 FUNC_1(VAR_1);
}
