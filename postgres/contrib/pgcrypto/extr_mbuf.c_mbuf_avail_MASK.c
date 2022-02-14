
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_end; int read_pos; } ;
typedef TYPE_1__ MBuf ;



int
FUNC_0(MBuf *VAR_0)
{
 return VAR_0->data_end - VAR_0->read_pos;
}
