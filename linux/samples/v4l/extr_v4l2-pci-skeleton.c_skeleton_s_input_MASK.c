
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tvnorms; } ;
struct skeleton {unsigned int input; int format; TYPE_1__ vdev; int queue; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct skeleton*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct skeleton* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct skeleton *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5 > 1)
  return -VAR_1;





 if (FUNC_1(&VAR_6->queue))
  return -VAR_0;

 VAR_6->input = VAR_5;





 VAR_6->vdev.tvnorms = VAR_5 ? 0 : VAR_2;


 FUNC_0(VAR_6, &VAR_6->format);
 return 0;
}
