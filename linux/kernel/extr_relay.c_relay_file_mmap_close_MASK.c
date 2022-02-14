
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_file; struct rchan_buf* vm_private_data; } ;
struct rchan_buf {TYPE_2__* chan; } ;
struct TYPE_4__ {TYPE_1__* cb; } ;
struct TYPE_3__ {int (* buf_unmapped ) (struct rchan_buf*,int ) ;} ;


 int FUNC_0 (struct rchan_buf*,int ) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct rchan_buf *VAR_1 = VAR_0->vm_private_data;
 VAR_1->chan->cb->buf_unmapped(VAR_1, VAR_0->vm_file);
}
