
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_5__ {int rdata_len; TYPE_2__* rdata_tail; int in_use; } ;
typedef TYPE_1__ registered_buffer ;
struct TYPE_6__ {char* data; int len; struct TYPE_6__* next; } ;
typedef TYPE_2__ XLogRecData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

void
FUNC_2(uint8 VAR_6, char *VAR_7, int VAR_8)
{
 registered_buffer *VAR_9;
 XLogRecData *VAR_10;

 FUNC_0(VAR_1);


 VAR_9 = &VAR_5[VAR_6];
 if (!VAR_9->in_use)
  FUNC_1(VAR_0, "no block with id %d registered with WAL insertion",
    VAR_6);

 if (VAR_3 >= VAR_2)
  FUNC_1(VAR_0, "too much WAL data");
 VAR_10 = &VAR_4[VAR_3++];

 VAR_10->data = VAR_7;
 VAR_10->len = VAR_8;

 VAR_9->rdata_tail->next = VAR_10;
 VAR_9->rdata_tail = VAR_10;
 VAR_9->rdata_len += VAR_8;
}
