
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {scalar_t__ forkno; scalar_t__ block; int flags; int in_use; int rnode; scalar_t__ rdata_len; int rdata_head; int * rdata_tail; int page; } ;
typedef TYPE_1__ registered_buffer ;
typedef int XLogRecData ;
typedef int RelFileNode ;
typedef int Page ;
typedef scalar_t__ ForkNumber ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

void
FUNC_3(uint8 VAR_6, RelFileNode *VAR_7, ForkNumber VAR_8,
      BlockNumber VAR_9, Page VAR_10, uint8 VAR_11)
{
 registered_buffer *VAR_12;


 FUNC_0(VAR_11 & VAR_1);
 FUNC_0(VAR_2);

 if (VAR_6 >= VAR_3)
  VAR_3 = VAR_6 + 1;

 if (VAR_6 >= VAR_4)
  FUNC_2(VAR_0, "too many registered buffers");

 VAR_12 = &VAR_5[VAR_6];

 VAR_12->rnode = *VAR_7;
 VAR_12->forkno = VAR_8;
 VAR_12->block = VAR_9;
 VAR_12->page = VAR_10;
 VAR_12->flags = VAR_11;
 VAR_12->rdata_tail = (XLogRecData *) &VAR_12->rdata_head;
 VAR_12->rdata_len = 0;
 VAR_12->in_use = 1;
}
