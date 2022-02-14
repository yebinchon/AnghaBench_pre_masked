
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ceph_fsid {int dummy; } ;
struct ceph_monmap {int epoch; int num_mon; struct ceph_entity_inst* mon_inst; struct ceph_fsid fsid; } ;
struct ceph_entity_inst {int addr; int name; } ;
typedef int fsid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ceph_monmap* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (void**,struct ceph_fsid*,int) ;
 int FUNC_4 (void**,void*,int *,int,int ) ;
 int FUNC_5 (void**,void*,int *) ;
 int FUNC_6 (void**,void*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (struct ceph_monmap*) ;
 struct ceph_monmap* FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (struct ceph_monmap*,int ,int) ;

__attribute__((used)) static struct ceph_monmap *FUNC_12(void *VAR_6, void *VAR_7)
{
 struct ceph_monmap *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = -VAR_1;
 struct ceph_fsid VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14;

 FUNC_2(&VAR_6, VAR_7, VAR_14, VAR_4);
 FUNC_6(&VAR_6, VAR_7, VAR_14, VAR_4);

 FUNC_8("monmap_decode %p %p len %d (%d)\n", VAR_6, VAR_7, VAR_14, (int)(VAR_7-VAR_6));
 VAR_6 += sizeof(u16);

 FUNC_6(&VAR_6, VAR_7, sizeof(VAR_11) + 2*sizeof(u32), VAR_4);
 FUNC_3(&VAR_6, &VAR_11, sizeof(VAR_11));
 VAR_12 = FUNC_1(&VAR_6);

 VAR_13 = FUNC_1(&VAR_6);

 if (VAR_13 > VAR_0)
  goto bad;
 VAR_8 = FUNC_10(FUNC_11(VAR_8, VAR_5, VAR_13), VAR_3);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_2);
 VAR_8->fsid = VAR_11;
 VAR_8->epoch = VAR_12;
 VAR_8->num_mon = VAR_13;
 for (VAR_9 = 0; VAR_9 < VAR_13; ++VAR_9) {
  struct ceph_entity_inst *VAR_15 = &VAR_8->mon_inst[VAR_9];


  FUNC_4(&VAR_6, VAR_7, &VAR_15->name,
     sizeof(VAR_15->name), VAR_4);
  VAR_10 = FUNC_5(&VAR_6, VAR_7, &VAR_15->addr);
  if (VAR_10)
   goto bad;
 }
 FUNC_8("monmap_decode epoch %d, num_mon %d\n", VAR_8->epoch,
      VAR_8->num_mon);
 for (VAR_9 = 0; VAR_9 < VAR_8->num_mon; VAR_9++)
  FUNC_8("monmap_decode  mon%d is %s\n", VAR_9,
       FUNC_7(&VAR_8->mon_inst[VAR_9].addr));
 return VAR_8;
bad:
 FUNC_8("monmap_decode failed with %d\n", VAR_10);
 FUNC_9(VAR_8);
 return FUNC_0(VAR_10);
}
