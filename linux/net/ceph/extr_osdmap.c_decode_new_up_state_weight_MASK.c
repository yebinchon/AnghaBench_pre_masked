
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_osdmap {size_t max_osd; int* osd_weight; int* osd_state; struct ceph_entity_addr* osd_addr; } ;
struct ceph_entity_addr {int dummy; } ;
typedef size_t s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (void**) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (void**,void*,struct ceph_entity_addr*) ;
 int FUNC_5 (void**,void*,int,int ) ;
 int FUNC_6 (void**,void*,int ) ;
 int VAR_8 ;
 int FUNC_7 (struct ceph_entity_addr*,int ,int) ;
 int FUNC_8 (char*,size_t,...) ;
 int FUNC_9 (struct ceph_osdmap*,size_t,int ) ;

__attribute__((used)) static int FUNC_10(void **VAR_9, void *VAR_10, u8 VAR_11,
          struct ceph_osdmap *VAR_12)
{
 void *VAR_13;
 void *VAR_14;
 void *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_13 = *VAR_9;
 FUNC_2(VAR_9, VAR_10, VAR_16, VAR_8);
 for (VAR_17 = 0; VAR_17 < VAR_16; ++VAR_17) {
  struct ceph_entity_addr VAR_18;

  FUNC_6(VAR_9, VAR_10, VAR_8);
  if (FUNC_4(VAR_9, VAR_10, &VAR_18))
   goto e_inval;
 }

 VAR_14 = *VAR_9;
 FUNC_2(VAR_9, VAR_10, VAR_16, VAR_8);
 VAR_16 *= sizeof(u32) + (VAR_11 >= 5 ? sizeof(u32) : sizeof(u8));
 FUNC_5(VAR_9, VAR_10, VAR_16, VAR_8);
 *VAR_9 += VAR_16;


 FUNC_2(VAR_9, VAR_10, VAR_16, VAR_8);
 while (VAR_16--) {
  s32 VAR_19;
  u32 VAR_20;

  FUNC_5(VAR_9, VAR_10, 2*sizeof(u32), VAR_8);
  VAR_19 = FUNC_1(VAR_9);
  VAR_20 = FUNC_1(VAR_9);
  FUNC_0(VAR_19 >= VAR_12->max_osd);
  FUNC_8("osd%d weight 0x%x %s\n", VAR_19, VAR_20,
       VAR_20 == VAR_3 ? "(in)" :
       (VAR_20 == VAR_5 ? "(out)" : ""));
  VAR_12->osd_weight[VAR_19] = VAR_20;





  if (VAR_20) {
   VAR_12->osd_state[VAR_19] |= VAR_2;
   VAR_12->osd_state[VAR_19] &= ~(VAR_0 |
       VAR_4);
  }
 }
 VAR_15 = *VAR_9;


 *VAR_9 = VAR_14;
 VAR_16 = FUNC_1(VAR_9);
 while (VAR_16--) {
  s32 VAR_21;
  u32 VAR_22;
  int VAR_23;

  VAR_21 = FUNC_1(VAR_9);
  if (VAR_11 >= 5)
   VAR_22 = FUNC_1(VAR_9);
  else
   VAR_22 = FUNC_3(VAR_9);
  if (VAR_22 == 0)
   VAR_22 = VAR_6;
  FUNC_0(VAR_21 >= VAR_12->max_osd);
  if ((VAR_12->osd_state[VAR_21] & VAR_6) &&
      (VAR_22 & VAR_6))
   FUNC_8("osd%d down\n", VAR_21);
  if ((VAR_12->osd_state[VAR_21] & VAR_2) &&
      (VAR_22 & VAR_2)) {
   FUNC_8("osd%d does not exist\n", VAR_21);
   VAR_23 = FUNC_9(VAR_12, VAR_21,
         VAR_1);
   if (VAR_23)
    return VAR_23;
   FUNC_7(VAR_12->osd_addr + VAR_21, 0, sizeof(*VAR_12->osd_addr));
   VAR_12->osd_state[VAR_21] = 0;
  } else {
   VAR_12->osd_state[VAR_21] ^= VAR_22;
  }
 }


 *VAR_9 = VAR_13;
 VAR_16 = FUNC_1(VAR_9);
 while (VAR_16--) {
  s32 VAR_24;
  struct ceph_entity_addr VAR_25;

  VAR_24 = FUNC_1(VAR_9);
  FUNC_0(VAR_24 >= VAR_12->max_osd);
  if (FUNC_4(VAR_9, VAR_10, &VAR_25))
   goto e_inval;
  FUNC_8("osd%d up\n", VAR_24);
  VAR_12->osd_state[VAR_24] |= VAR_2 | VAR_6;
  VAR_12->osd_addr[VAR_24] = VAR_25;
 }

 *VAR_9 = VAR_15;
 return 0;

e_inval:
 return -VAR_7;
}
