
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {scalar_t__ private; } ;
struct buffer_ref {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct pipe_inode_info *VAR_1,
    struct pipe_buffer *VAR_2)
{
 struct buffer_ref *VAR_3 = (struct buffer_ref *)VAR_2->private;

 if (FUNC_1(&VAR_3->refcount) > VAR_0/2)
  return 0;

 FUNC_0(&VAR_3->refcount);
 return 1;
}
