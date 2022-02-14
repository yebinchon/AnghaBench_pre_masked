
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; int st_size; } ;
struct fd_read_buffer {void* buf; void* end; void* beg; int fd; void* fixed; TYPE_2__* io; } ;
struct TYPE_6__ {unsigned int flags; } ;
typedef TYPE_1__ strm_stream ;
typedef TYPE_2__* strm_io ;
typedef int strm_callback ;
struct TYPE_7__ {TYPE_1__* read_stream; int fd; int mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;
 struct fd_read_buffer* FUNC_1 (int) ;
 void* FUNC_2 (int *,int,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_3 (int ,int ,int ,void*) ;

__attribute__((used)) static strm_stream*
FUNC_4(strm_io VAR_13)
{
  strm_callback VAR_14 = VAR_11;
  unsigned int VAR_15 = 0;

  if (VAR_13->read_stream == ((void*)0)) {
    struct fd_read_buffer *VAR_16 = FUNC_1(sizeof(struct fd_read_buffer));
    struct stat VAR_17;

    VAR_13->mode |= VAR_5;
    VAR_16->fd = VAR_13->fd;
    VAR_16->io = VAR_13;




    if (FUNC_0(VAR_13->fd, &VAR_17) == 0 && (VAR_17.st_mode & VAR_6) == VAR_7) {


      VAR_15 |= VAR_4;
      VAR_14 = VAR_8;
      VAR_16->beg = VAR_16->end = VAR_16->buf;

    }
    else {
      VAR_16->beg = VAR_16->end = VAR_16->buf;
    }
    VAR_13->read_stream = FUNC_3(VAR_12, VAR_14, VAR_9, (void*)VAR_16);
    VAR_13->read_stream->flags |= VAR_15;
  }
  return VAR_13->read_stream;
}
