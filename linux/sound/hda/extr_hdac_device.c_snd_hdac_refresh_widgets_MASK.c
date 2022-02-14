
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int num_nodes; int widget_lock; void* end_nid; void* start_nid; int afg; int dev; } ;
typedef void* hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hdac_device*,void*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hdac_device*,int ,void**) ;

int FUNC_5(struct hdac_device *VAR_1)
{
 hda_nid_t VAR_2;
 int VAR_3, VAR_4 = 0;





 FUNC_2(&VAR_1->widget_lock);
 VAR_3 = FUNC_4(VAR_1, VAR_1->afg, &VAR_2);
 if (!VAR_2 || VAR_3 <= 0 || VAR_3 >= 0xff) {
  FUNC_0(&VAR_1->dev, "cannot read sub nodes for FG 0x%02x\n",
   VAR_1->afg);
  VAR_4 = -VAR_0;
  goto unlock;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  goto unlock;

 VAR_1->num_nodes = VAR_3;
 VAR_1->start_nid = VAR_2;
 VAR_1->end_nid = VAR_2 + VAR_3;
unlock:
 FUNC_3(&VAR_1->widget_lock);
 return VAR_4;
}
