
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {scalar_t__ forkno; scalar_t__ block; int flags; int in_use; int rnode; scalar_t__ rdata_len; int rdata_head; int * rdata_tail; int page; } ;
typedef TYPE_1__ registered_buffer ;
typedef int XLogRecData ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

void
FUNC_5(uint8 VAR_7, Buffer VAR_8, uint8 VAR_9)
{
 registered_buffer *VAR_10;


 FUNC_0(!((VAR_9 & VAR_1) && (VAR_9 & (VAR_2))));
 FUNC_0(VAR_3);

 if (VAR_7 >= VAR_4)
 {
  if (VAR_7 >= VAR_5)
   FUNC_4(VAR_0, "too many registered buffers");
  VAR_4 = VAR_7 + 1;
 }

 VAR_10 = &VAR_6[VAR_7];

 FUNC_2(VAR_8, &VAR_10->rnode, &VAR_10->forkno, &VAR_10->block);
 VAR_10->page = FUNC_1(VAR_8);
 VAR_10->flags = VAR_9;
 VAR_10->rdata_tail = (XLogRecData *) &VAR_10->rdata_head;
 VAR_10->rdata_len = 0;
 VAR_10->in_use = 1;
}
