
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int index; } ;
struct TYPE_6__ {int key; } ;
struct cleancache_filekey {TYPE_2__ u; } ;
struct address_space {TYPE_4__* host; } ;
struct TYPE_8__ {TYPE_1__* i_sb; } ;
struct TYPE_7__ {int (* invalidate_page ) (int,struct cleancache_filekey,int ) ;} ;
struct TYPE_5__ {int cleancache_poolid; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct page*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,struct cleancache_filekey*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int,struct cleancache_filekey,int ) ;

void FUNC_4(struct address_space *VAR_2,
     struct page *VAR_3)
{

 int VAR_4 = VAR_2->host->i_sb->cleancache_poolid;
 struct cleancache_filekey VAR_5 = { .u.key = 0 };

 if (!VAR_1)
  return;

 if (VAR_4 >= 0) {
  FUNC_1(!FUNC_0(VAR_3), VAR_3);
  if (FUNC_2(VAR_2->host, &VAR_5) >= 0) {
   VAR_1->invalidate_page(VAR_4,
     VAR_5, VAR_3->index);
   VAR_0++;
  }
 }
}
