
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int index; TYPE_1__* mapping; } ;
struct TYPE_7__ {int key; } ;
struct cleancache_filekey {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__* i_sb; } ;
struct TYPE_9__ {int (* get_page ) (int,struct cleancache_filekey,int ,struct page*) ;} ;
struct TYPE_8__ {int cleancache_poolid; } ;
struct TYPE_6__ {TYPE_5__* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_5__*,struct cleancache_filekey*) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,struct cleancache_filekey,int ,struct page*) ;

int FUNC_4(struct page *VAR_3)
{
 int VAR_4 = -1;
 int VAR_5;
 struct cleancache_filekey VAR_6 = { .u.key = 0 };

 if (!VAR_1) {
  VAR_0++;
  goto out;
 }

 FUNC_1(!FUNC_0(VAR_3), VAR_3);
 VAR_5 = VAR_3->mapping->host->i_sb->cleancache_poolid;
 if (VAR_5 < 0)
  goto out;

 if (FUNC_2(VAR_3->mapping->host, &VAR_6) < 0)
  goto out;

 VAR_4 = VAR_1->get_page(VAR_5, VAR_6, VAR_3->index, VAR_3);
 if (VAR_4 == 0)
  VAR_2++;
 else
  VAR_0++;
out:
 return VAR_4;
}
