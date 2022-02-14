
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its_abi {int dte_esz; } ;
struct vgic_its {int baser_device_table; } ;
typedef int gpa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vgic_its*,int ,int,int,int ,int ,int *) ;
 struct vgic_its_abi* FUNC_3 (struct vgic_its*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct vgic_its *VAR_6)
{
 const struct vgic_its_abi *VAR_7 = FUNC_3(VAR_6);
 u64 VAR_8 = VAR_6->baser_device_table;
 int VAR_9, VAR_10;
 int VAR_11 = FUNC_1(VAR_8) * VAR_3;
 gpa_t VAR_12;

 if (!(VAR_8 & VAR_1))
  return 0;

 VAR_12 = FUNC_0(VAR_8);

 if (VAR_8 & VAR_0) {
  VAR_9 = VAR_2;
  VAR_10 = FUNC_2(VAR_6, VAR_12, VAR_11, VAR_9, 0,
         VAR_4, ((void*)0));
 } else {
  VAR_9 = VAR_7->dte_esz;
  VAR_10 = FUNC_2(VAR_6, VAR_12, VAR_11, VAR_9, 0,
         VAR_5, ((void*)0));
 }


 if (VAR_10 > 0)
  VAR_10 = 0;

 return VAR_10;
}
