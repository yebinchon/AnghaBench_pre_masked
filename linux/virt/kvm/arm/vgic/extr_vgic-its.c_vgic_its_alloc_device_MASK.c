
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vgic_its {int device_list; } ;
struct its_device {int dev_list; int itt_head; int num_eventid_bits; int itt_addr; int device_id; } ;
typedef int gpa_t ;


 int VAR_0 ;
 struct its_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct its_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct its_device *FUNC_4(struct vgic_its *VAR_2,
      u32 VAR_3, gpa_t VAR_4,
      u8 VAR_5)
{
 struct its_device *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->device_id = VAR_3;
 VAR_6->itt_addr = VAR_4;
 VAR_6->num_eventid_bits = VAR_5;
 FUNC_1(&VAR_6->itt_head);

 FUNC_3(&VAR_6->dev_list, &VAR_2->device_list);
 return VAR_6;
}
