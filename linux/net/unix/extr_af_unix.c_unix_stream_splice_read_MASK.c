
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unix_stream_read_state {size_t size; unsigned int splice_flags; int flags; struct pipe_inode_info* pipe; struct socket* socket; int recv_actor; } ;
struct socket {TYPE_1__* file; } ;
struct pipe_inode_info {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct unix_stream_read_state*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct socket *VAR_5, loff_t *VAR_6,
           struct pipe_inode_info *VAR_7,
           size_t VAR_8, unsigned int VAR_9)
{
 struct unix_stream_read_state VAR_10 = {
  .recv_actor = VAR_4,
  .socket = VAR_5,
  .pipe = VAR_7,
  .size = VAR_8,
  .splice_flags = VAR_9,
 };

 if (FUNC_1(*VAR_6))
  return -VAR_0;

 if (VAR_5->file->f_flags & VAR_2 ||
     VAR_9 & VAR_3)
  VAR_10.flags = VAR_1;

 return FUNC_0(&VAR_10, 0);
}
