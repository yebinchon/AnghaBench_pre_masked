
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_un {scalar_t__* sun_path; } ;
struct sock {int sk_type; } ;
struct path {struct dentry* dentry; } ;
struct net {int dummy; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct path path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (scalar_t__*,int ,struct path*) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct path*) ;
 struct sock* FUNC_7 (struct inode*) ;
 struct sock* FUNC_8 (struct net*,struct sockaddr_un*,int,int,unsigned int) ;
 TYPE_1__* FUNC_9 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_10(struct net *VAR_4,
        struct sockaddr_un *VAR_5, int VAR_6,
        int VAR_7, unsigned int VAR_8, int *VAR_9)
{
 struct sock *VAR_10;
 struct path VAR_11;
 int VAR_12 = 0;

 if (VAR_5->sun_path[0]) {
  struct inode *VAR_13;
  VAR_12 = FUNC_3(VAR_5->sun_path, VAR_2, &VAR_11);
  if (VAR_12)
   goto fail;
  VAR_13 = FUNC_1(VAR_11.dentry);
  VAR_12 = FUNC_2(VAR_13, VAR_3);
  if (VAR_12)
   goto put_fail;

  VAR_12 = -VAR_0;
  if (!FUNC_0(VAR_13->i_mode))
   goto put_fail;
  VAR_10 = FUNC_7(VAR_13);
  if (!VAR_10)
   goto put_fail;

  if (VAR_10->sk_type == VAR_7)
   FUNC_6(&VAR_11);

  FUNC_4(&VAR_11);

  VAR_12 = -VAR_1;
  if (VAR_10->sk_type != VAR_7) {
   FUNC_5(VAR_10);
   goto fail;
  }
 } else {
  VAR_12 = -VAR_0;
  VAR_10 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_10) {
   struct dentry *VAR_14;
   VAR_14 = FUNC_9(VAR_10)->path.dentry;
   if (VAR_14)
    FUNC_6(&FUNC_9(VAR_10)->path);
  } else
   goto fail;
 }
 return VAR_10;

put_fail:
 FUNC_4(&VAR_11);
fail:
 *VAR_9 = VAR_12;
 return ((void*)0);
}
