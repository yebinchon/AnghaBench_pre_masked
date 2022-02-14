
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its_abi {int ite_esz; } ;
struct vgic_its {int dummy; } ;
struct its_device {int num_eventid_bits; int itt_addr; } ;
typedef int gpa_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vgic_its*,int ,size_t,int,int ,int ,struct its_device*) ;
 struct vgic_its_abi* FUNC_2 (struct vgic_its*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct vgic_its *VAR_1, struct its_device *VAR_2)
{
 const struct vgic_its_abi *VAR_3 = FUNC_2(VAR_1);
 gpa_t VAR_4 = VAR_2->itt_addr;
 int VAR_5;
 int VAR_6 = VAR_3->ite_esz;
 size_t VAR_7 = FUNC_0(VAR_2->num_eventid_bits) * VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_7, VAR_6, 0,
        VAR_0, VAR_2);


 if (VAR_5 > 0)
  VAR_5 = 0;

 return VAR_5;
}
