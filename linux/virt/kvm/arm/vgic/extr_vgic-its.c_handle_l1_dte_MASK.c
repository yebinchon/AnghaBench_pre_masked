
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vgic_its_abi {int dte_esz; } ;
struct vgic_its {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vgic_its*,int,int,int,int,int ,int *) ;
 struct vgic_its_abi* FUNC_2 (struct vgic_its*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct vgic_its *VAR_4, u32 VAR_5, void *VAR_6,
    void *VAR_7)
{
 const struct vgic_its_abi *VAR_8 = FUNC_2(VAR_4);
 int VAR_9 = VAR_5 * (VAR_2 / VAR_8->dte_esz);
 u64 VAR_10 = *(u64 *)VAR_6;
 int VAR_11 = VAR_8->dte_esz;
 gpa_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_0(VAR_10);

 if (!(VAR_10 & VAR_1))
  return 1;

 VAR_12 = VAR_10 & VAR_0;

 VAR_13 = FUNC_1(VAR_4, VAR_12, VAR_2, VAR_11,
        VAR_9, VAR_3, ((void*)0));

 return VAR_13;
}
