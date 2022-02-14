
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct fd_read_buffer {scalar_t__ end; scalar_t__ buf; scalar_t__ beg; int fd; } ;
typedef int strm_value ;
struct TYPE_8__ {struct fd_read_buffer* data; } ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ strm_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int (*) (TYPE_1__*,int )) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_2, strm_value VAR_3)
{
  struct fd_read_buffer *VAR_4 = VAR_2->data;
  strm_int VAR_5;
  strm_int VAR_6;

  VAR_5 = VAR_0-(VAR_4->end-VAR_4->buf);
  VAR_6 = FUNC_5(VAR_4->fd, VAR_4->end, VAR_5);
  if (VAR_6 <= 0) {
    if (VAR_4->buf < VAR_4->end) {
      strm_value VAR_7 = FUNC_0(VAR_4->beg, VAR_4->end-VAR_4->beg);
      VAR_4->beg = VAR_4->end = VAR_4->buf;
      FUNC_2(VAR_2, VAR_7, VAR_4->fd, FUNC_7);
    }
    else {
      FUNC_3(VAR_2, VAR_4->fd);
    }
    return VAR_1;
  }
  VAR_4->end += VAR_6;
  FUNC_1)(VAR_2, FUNC_4());
  return VAR_1;
}
