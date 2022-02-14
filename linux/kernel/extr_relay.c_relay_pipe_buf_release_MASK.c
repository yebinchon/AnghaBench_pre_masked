
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {int dummy; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int private; int page; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rchan_buf*,int ) ;

__attribute__((used)) static void FUNC_2(struct pipe_inode_info *VAR_0,
       struct pipe_buffer *VAR_1)
{
 struct rchan_buf *VAR_2;

 VAR_2 = (struct rchan_buf *)FUNC_0(VAR_1->page);
 FUNC_1(VAR_2, VAR_1->private);
}
