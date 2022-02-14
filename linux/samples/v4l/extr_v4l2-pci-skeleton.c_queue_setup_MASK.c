
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; } ;
struct TYPE_2__ {scalar_t__ field; unsigned int sizeimage; } ;
struct skeleton {scalar_t__ field; TYPE_1__ format; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct vb2_queue*) ;
 struct skeleton* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_3,
         unsigned int *VAR_4, unsigned int *VAR_5,
         unsigned int VAR_6[], struct device *VAR_7[])
{
 struct skeleton *VAR_8 = FUNC_1(VAR_3);

 VAR_8->field = VAR_8->format.field;
 if (VAR_8->field == VAR_1) {




  if (FUNC_0(VAR_3))
   return -VAR_0;
  VAR_8->field = VAR_2;
 }

 if (VAR_3->num_buffers + *VAR_4 < 3)
  *VAR_4 = 3 - VAR_3->num_buffers;

 if (*VAR_5)
  return VAR_6[0] < VAR_8->format.sizeimage ? -VAR_0 : 0;
 *VAR_5 = 1;
 VAR_6[0] = VAR_8->format.sizeimage;
 return 0;
}
