
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_io_device {int dev; int nr_regions; int regions; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;

unsigned int FUNC_2(struct vgic_io_device *VAR_3)
{
 VAR_3->regions = VAR_2;
 VAR_3->nr_regions = FUNC_0(VAR_2);

 FUNC_1(&VAR_3->dev, &VAR_1);

 return VAR_0;
}
