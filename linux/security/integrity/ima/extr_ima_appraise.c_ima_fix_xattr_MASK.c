
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct integrity_iint_cache {TYPE_4__* ima_hash; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {scalar_t__ algo; int type; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_7__ {int * data; TYPE_2__ ng; TYPE_1__ sha1; } ;
struct TYPE_8__ {scalar_t__ algo; scalar_t__ length; TYPE_3__ xattr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*,int ,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_4,
    struct integrity_iint_cache *VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8 = VAR_5->ima_hash->algo;

 if (VAR_8 <= VAR_0) {
  VAR_7 = 1;
  VAR_5->ima_hash->xattr.sha1.type = VAR_1;
 } else {
  VAR_7 = 0;
  VAR_5->ima_hash->xattr.ng.type = VAR_2;
  VAR_5->ima_hash->xattr.ng.algo = VAR_8;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_3,
       &VAR_5->ima_hash->xattr.data[VAR_7],
       (sizeof(VAR_5->ima_hash->xattr) - VAR_7) +
       VAR_5->ima_hash->length, 0);
 return VAR_6;
}
