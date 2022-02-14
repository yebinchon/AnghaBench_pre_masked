
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its_abi {int cte_esz; } ;
struct vgic_its {int baser_coll_table; } ;
typedef int gpa_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct vgic_its_abi* FUNC_2 (struct vgic_its*) ;
 int FUNC_3 (struct vgic_its*,int,int) ;

__attribute__((used)) static int FUNC_4(struct vgic_its *VAR_2)
{
 const struct vgic_its_abi *VAR_3 = FUNC_2(VAR_2);
 u64 VAR_4 = VAR_2->baser_coll_table;
 int VAR_5 = VAR_3->cte_esz;
 size_t VAR_6, VAR_7 = 0;
 gpa_t VAR_8;
 int VAR_9;

 if (!(VAR_4 & VAR_0))
  return 0;

 VAR_8 = FUNC_0(VAR_4);

 VAR_6 = FUNC_1(VAR_4) * VAR_1;

 while (VAR_7 < VAR_6) {
  VAR_9 = FUNC_3(VAR_2, VAR_8, VAR_5);
  if (VAR_9 <= 0)
   break;
  VAR_8 += VAR_5;
  VAR_7 += VAR_5;
 }

 if (VAR_9 > 0)
  return 0;

 return VAR_9;
}
