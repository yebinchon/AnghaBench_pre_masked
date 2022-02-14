
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int no_write; int own_data; int * buf_end; int * read_pos; int * data_end; int * data; } ;
typedef TYPE_1__ MBuf ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(MBuf *VAR_0, uint8 **VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 VAR_0->no_write = 1;
 VAR_0->own_data = 0;

 *VAR_1 = VAR_0->data;

 VAR_0->data = VAR_0->data_end = VAR_0->read_pos = VAR_0->buf_end = ((void*)0);

 return VAR_2;
}
