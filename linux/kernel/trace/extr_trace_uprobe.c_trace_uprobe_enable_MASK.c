
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int filter; } ;
struct TYPE_4__ {int dentry; } ;
struct trace_uprobe {int * inode; TYPE_2__ consumer; int offset; scalar_t__ ref_ctr_offset; TYPE_1__ path; } ;
typedef int filter_func_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct trace_uprobe *VAR_0, filter_func_t VAR_1)
{
 int VAR_2;

 VAR_0->consumer.filter = VAR_1;
 VAR_0->inode = FUNC_0(VAR_0->path.dentry);

 if (VAR_0->ref_ctr_offset)
  VAR_2 = FUNC_2(VAR_0->inode, VAR_0->offset,
    VAR_0->ref_ctr_offset, &VAR_0->consumer);
 else
  VAR_2 = FUNC_1(VAR_0->inode, VAR_0->offset, &VAR_0->consumer);

 if (VAR_2)
  VAR_0->inode = ((void*)0);

 return VAR_2;
}
