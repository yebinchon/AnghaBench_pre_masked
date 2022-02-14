
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct TYPE_3__ {unsigned long sizeimage; } ;
struct skeleton {TYPE_2__* pdev; TYPE_1__ format; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long,unsigned long) ;
 struct skeleton* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct skeleton *VAR_2 = FUNC_1(VAR_1->vb2_queue);
 unsigned long VAR_3 = VAR_2->format.sizeimage;

 if (FUNC_2(VAR_1, 0) < VAR_3) {
  FUNC_0(&VAR_2->pdev->dev, "buffer too small (%lu < %lu)\n",
    FUNC_2(VAR_1, 0), VAR_3);
  return -VAR_0;
 }

 FUNC_3(VAR_1, 0, VAR_3);
 return 0;
}
