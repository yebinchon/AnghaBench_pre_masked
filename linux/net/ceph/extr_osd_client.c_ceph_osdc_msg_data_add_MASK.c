
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ceph_osd_data {scalar_t__ type; int bvec_pos; int bio_pos; int pagelist; int alignment; int pages; } ;
struct ceph_msg {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ceph_msg*,int *,scalar_t__) ;
 int FUNC_2 (struct ceph_msg*,int *) ;
 int FUNC_3 (struct ceph_msg*,int ) ;
 int FUNC_4 (struct ceph_msg*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct ceph_osd_data*) ;

__attribute__((used)) static void FUNC_6(struct ceph_msg *VAR_6,
    struct ceph_osd_data *VAR_7)
{
 u64 VAR_8 = FUNC_5(VAR_7);

 if (VAR_7->type == VAR_4) {
  FUNC_0(VAR_8 > (u64) VAR_5);
  if (VAR_8)
   FUNC_4(VAR_6, VAR_7->pages,
     VAR_8, VAR_7->alignment);
 } else if (VAR_7->type == VAR_3) {
  FUNC_0(!VAR_8);
  FUNC_3(VAR_6, VAR_7->pagelist);




 } else if (VAR_7->type == VAR_1) {
  FUNC_2(VAR_6, &VAR_7->bvec_pos);
 } else {
  FUNC_0(VAR_7->type != VAR_2);
 }
}
