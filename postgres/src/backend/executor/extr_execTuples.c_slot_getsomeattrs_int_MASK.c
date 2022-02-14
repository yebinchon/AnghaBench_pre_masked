
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int tts_nvalid; TYPE_2__* tts_ops; TYPE_1__* tts_tupleDescriptor; } ;
typedef TYPE_3__ TupleTableSlot ;
struct TYPE_8__ {int (* getsomeattrs ) (TYPE_3__*,int) ;} ;
struct TYPE_7__ {int natts; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int) ;

void
FUNC_5(TupleTableSlot *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1->tts_nvalid < VAR_2);
 FUNC_0(VAR_2 > 0);

 if (FUNC_4(VAR_2 > VAR_1->tts_tupleDescriptor->natts))
  FUNC_1(VAR_0, "invalid attribute number %d", VAR_2);


 VAR_1->tts_ops->getsomeattrs(VAR_1, VAR_2);





 if (FUNC_4(VAR_1->tts_nvalid < VAR_2))
 {
  FUNC_2(VAR_1, VAR_1->tts_nvalid, VAR_2);
  VAR_1->tts_nvalid = VAR_2;
 }
}
