
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_osdmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void**,void*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct ceph_osdmap*,int ,int ) ;

__attribute__((used)) static int FUNC_3(void **VAR_2, void *VAR_3,
           struct ceph_osdmap *VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_5, VAR_1);
 while (VAR_5--) {
  u32 VAR_6, VAR_7;
  int VAR_8;

  FUNC_0(VAR_2, VAR_3, VAR_6, VAR_1);
  FUNC_0(VAR_2, VAR_3, VAR_7, VAR_1);

  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;

  FUNC_1("osd%d primary-affinity 0x%x\n", VAR_6, VAR_7);
 }

 return 0;

e_inval:
 return -VAR_0;
}
