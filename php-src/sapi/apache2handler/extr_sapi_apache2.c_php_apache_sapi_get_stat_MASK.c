
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int st_nlink; int st_size; void* st_ctime; void* st_mtime; void* st_atime; int st_ino; int st_dev; scalar_t__ st_gid; scalar_t__ st_uid; } ;
typedef TYPE_3__ zend_stat_t ;
struct TYPE_10__ {TYPE_3__ finfo; TYPE_2__* r; } ;
typedef TYPE_4__ php_struct ;
struct TYPE_7__ {int nlink; int size; int ctime; int mtime; int atime; int inode; int device; scalar_t__ group; scalar_t__ user; } ;
struct TYPE_8__ {TYPE_1__ finfo; } ;


 TYPE_4__* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static zend_stat_t*
FUNC_2(void)
{
 php_struct *VAR_1 = FUNC_0(VAR_0);





 VAR_1->finfo.st_uid = VAR_1->r->finfo.user;
 VAR_1->finfo.st_gid = VAR_1->r->finfo.group;

 VAR_1->finfo.st_dev = VAR_1->r->finfo.device;
 VAR_1->finfo.st_ino = VAR_1->r->finfo.inode;
 VAR_1->finfo.st_atime = FUNC_1(VAR_1->r->finfo.atime);
 VAR_1->finfo.st_mtime = FUNC_1(VAR_1->r->finfo.mtime);
 VAR_1->finfo.st_ctime = FUNC_1(VAR_1->r->finfo.ctime);
 VAR_1->finfo.st_size = VAR_1->r->finfo.size;
 VAR_1->finfo.st_nlink = VAR_1->r->finfo.nlink;

 return &VAR_1->finfo;
}
