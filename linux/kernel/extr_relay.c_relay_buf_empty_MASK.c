
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {scalar_t__ subbufs_consumed; scalar_t__ subbufs_produced; } ;



__attribute__((used)) static int FUNC_0(struct rchan_buf *VAR_0)
{
 return (VAR_0->subbufs_produced - VAR_0->subbufs_consumed) ? 0 : 1;
}
