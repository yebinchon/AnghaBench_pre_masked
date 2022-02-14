
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int key; } ;
struct cleancache_filekey {TYPE_2__ u; } ;
struct address_space {TYPE_4__* host; } ;
struct TYPE_8__ {TYPE_1__* i_sb; } ;
struct TYPE_7__ {int (* invalidate_inode ) (int,struct cleancache_filekey) ;} ;
struct TYPE_5__ {int cleancache_poolid; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,struct cleancache_filekey*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int,struct cleancache_filekey) ;

void FUNC_2(struct address_space *VAR_1)
{
 int VAR_2 = VAR_1->host->i_sb->cleancache_poolid;
 struct cleancache_filekey VAR_3 = { .u.key = 0 };

 if (!VAR_0)
  return;

 if (VAR_2 >= 0 && FUNC_0(VAR_1->host, &VAR_3) >= 0)
  VAR_0->invalidate_inode(VAR_2, VAR_3);
}
