
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* slot; } ;
struct TYPE_6__ {size_t slot; scalar_t__ generation; } ;
struct TYPE_5__ {scalar_t__ generation; int terminate; } ;
typedef TYPE_1__ BackgroundWorkerSlot ;
typedef TYPE_2__ BackgroundWorkerHandle ;


 int FUNC_0 (int) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 size_t VAR_4 ;

void
FUNC_4(BackgroundWorkerHandle *VAR_5)
{
 BackgroundWorkerSlot *VAR_6;
 bool VAR_7 = 0;

 FUNC_0(VAR_5->slot < VAR_4);
 VAR_6 = &VAR_0->slot[VAR_5->slot];


 FUNC_1(VAR_1, VAR_2);
 if (VAR_5->generation == VAR_6->generation)
 {
  VAR_6->terminate = 1;
  VAR_7 = 1;
 }
 FUNC_2(VAR_1);


 if (VAR_7)
  FUNC_3(VAR_3);
}
