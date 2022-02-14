
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int no_write; int own_data; void* data; void* read_pos; void* data_end; void* buf_end; } ;
typedef TYPE_1__ MBuf ;


 void* FUNC_0 (int) ;

MBuf *
FUNC_1(int VAR_0)
{
 MBuf *VAR_1;

 if (!VAR_0)
  VAR_0 = 8192;

 VAR_1 = FUNC_0(sizeof *VAR_1);
 VAR_1->data = FUNC_0(VAR_0);
 VAR_1->buf_end = VAR_1->data + VAR_0;
 VAR_1->data_end = VAR_1->data;
 VAR_1->read_pos = VAR_1->data;

 VAR_1->no_write = 0;
 VAR_1->own_data = 1;

 return VAR_1;
}
