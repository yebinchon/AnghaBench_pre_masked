
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int index; TYPE_3__* mapping; } ;
struct TYPE_6__ {int key; } ;
struct cleancache_filekey {TYPE_1__ u; } ;
struct TYPE_10__ {TYPE_2__* i_sb; } ;
struct TYPE_9__ {int (* put_page ) (int,struct cleancache_filekey,int ,struct page*) ;} ;
struct TYPE_8__ {TYPE_5__* host; } ;
struct TYPE_7__ {int cleancache_poolid; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct page*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,struct cleancache_filekey*) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,struct cleancache_filekey,int ,struct page*) ;

void FUNC_4(struct page *VAR_2)
{
 int VAR_3;
 struct cleancache_filekey VAR_4 = { .u.key = 0 };

 if (!VAR_0) {
  VAR_1++;
  return;
 }

 FUNC_1(!FUNC_0(VAR_2), VAR_2);
 VAR_3 = VAR_2->mapping->host->i_sb->cleancache_poolid;
 if (VAR_3 >= 0 &&
  FUNC_2(VAR_2->mapping->host, &VAR_4) >= 0) {
  VAR_0->put_page(VAR_3, VAR_4, VAR_2->index, VAR_2);
  VAR_1++;
 }
}
