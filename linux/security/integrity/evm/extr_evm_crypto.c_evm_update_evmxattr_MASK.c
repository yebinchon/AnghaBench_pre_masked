
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_opflags; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {int * data; TYPE_1__ sha1; } ;
struct TYPE_6__ {TYPE_2__ xattr; int algo; } ;
struct evm_digest {TYPE_3__ hdr; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dentry*,int ) ;
 int FUNC_1 (struct dentry*,int ,int *,scalar_t__,int ) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,char const*,char const*,size_t,struct evm_digest*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;

int FUNC_5(struct dentry *VAR_7, const char *VAR_8,
   const char *VAR_9, size_t VAR_10)
{
 struct inode *VAR_11 = FUNC_2(VAR_7);
 struct evm_digest VAR_12;
 int VAR_13 = 0;





 VAR_13 = FUNC_4(VAR_7, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_13)
  return -VAR_1;

 VAR_12.hdr.algo = VAR_3;
 VAR_13 = FUNC_3(VAR_7, VAR_8, VAR_9,
      VAR_10, &VAR_12);
 if (VAR_13 == 0) {
  VAR_12.hdr.xattr.sha1.type = VAR_2;
  VAR_13 = FUNC_1(VAR_7, VAR_6,
        &VAR_12.hdr.xattr.data[1],
        VAR_5 + 1, 0);
 } else if (VAR_13 == -VAR_0 && (VAR_11->i_opflags & VAR_4)) {
  VAR_13 = FUNC_0(VAR_7, VAR_6);
 }
 return VAR_13;
}
