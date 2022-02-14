
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int no_write; int own_data; int * data; int * read_pos; int * data_end; int * buf_end; } ;
typedef TYPE_1__ MBuf ;


 TYPE_1__* FUNC_0 (int) ;

MBuf *
FUNC_1(uint8 *VAR_0, int VAR_1)
{
 MBuf *VAR_2;

 VAR_2 = FUNC_0(sizeof *VAR_2);
 VAR_2->data = (uint8 *) VAR_0;
 VAR_2->buf_end = VAR_2->data + VAR_1;
 VAR_2->data_end = VAR_2->data + VAR_1;
 VAR_2->read_pos = VAR_2->data;

 VAR_2->no_write = 1;
 VAR_2->own_data = 0;

 return VAR_2;
}
