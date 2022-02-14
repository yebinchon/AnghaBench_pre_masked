
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct ceph_osd_data {int pages_from_pool; int own_pages; int alignment; int length; struct page** pages; int type; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ceph_osd_data *VAR_1,
   struct page **VAR_2, u64 VAR_3, u32 VAR_4,
   bool VAR_5, bool VAR_6)
{
 VAR_1->type = VAR_0;
 VAR_1->pages = VAR_2;
 VAR_1->length = VAR_3;
 VAR_1->alignment = VAR_4;
 VAR_1->pages_from_pool = VAR_5;
 VAR_1->own_pages = VAR_6;
}
