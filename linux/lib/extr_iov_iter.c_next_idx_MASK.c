
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int buffers; } ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, struct pipe_inode_info *VAR_1)
{
 return (VAR_0 + 1) & (VAR_1->buffers - 1);
}
