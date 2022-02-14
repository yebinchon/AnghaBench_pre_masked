
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strm_io {int dummy; } ;
typedef int strm_value ;
typedef TYPE_1__* strm_io ;
struct TYPE_4__ {int fd; int mode; int * write_stream; int read_stream; int type; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

strm_value
FUNC_2(int VAR_1, int VAR_2)
{
  strm_io VAR_3 = FUNC_0(sizeof(struct strm_io));

  VAR_3->fd = VAR_1;
  VAR_3->mode = VAR_2;
  VAR_3->type = VAR_0;
  VAR_3->read_stream = *(VAR_3->write_stream = ((void*)0));
  return FUNC_1(VAR_3);
}
