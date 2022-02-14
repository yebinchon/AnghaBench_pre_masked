
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_3__ {int current_restart_decoding_lsn; } ;
typedef TYPE_1__ ReorderBuffer ;



void
FUNC_0(ReorderBuffer *VAR_0, XLogRecPtr VAR_1)
{
 VAR_0->current_restart_decoding_lsn = VAR_1;
}
