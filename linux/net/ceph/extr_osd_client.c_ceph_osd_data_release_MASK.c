
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_osd_data {scalar_t__ type; int pagelist; int pages; scalar_t__ length; scalar_t__ alignment; scalar_t__ own_pages; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ceph_osd_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct ceph_osd_data *VAR_2)
{
 if (VAR_2->type == VAR_1 && VAR_2->own_pages) {
  int VAR_3;

  VAR_3 = FUNC_0((u64)VAR_2->alignment,
      (u64)VAR_2->length);
  FUNC_3(VAR_2->pages, VAR_3);
 } else if (VAR_2->type == VAR_0) {
  FUNC_2(VAR_2->pagelist);
 }
 FUNC_1(VAR_2);
}
