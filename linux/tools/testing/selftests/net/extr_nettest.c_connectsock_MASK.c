
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_args {scalar_t__ type; scalar_t__ bind_test_only; int password; scalar_t__ has_local_ip; int version; int ifindex; scalar_t__ use_setsockopt; int dev; int protocol; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sock_args*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,void*,int ) ;
 scalar_t__ VAR_5 ;
 long FUNC_4 (int,int ,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int,void*,int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(void *VAR_6, socklen_t VAR_7, struct sock_args *VAR_8)
{
 int VAR_9, VAR_10 = -1;
 long VAR_11;

 VAR_9 = FUNC_8(VAR_8->version, VAR_8->type, VAR_8->protocol);
 if (VAR_9 < 0) {
  FUNC_5("Failed to create socket");
  return -1;
 }

 VAR_11 = FUNC_4(VAR_9, VAR_1);
 if ((VAR_11 < 0) || (FUNC_4(VAR_9, VAR_2, VAR_11|VAR_3) < 0)) {
  FUNC_5("Failed to set non-blocking option");
  goto err;
 }

 if (FUNC_6(VAR_9) != 0)
  goto err;

 if (VAR_8->dev && FUNC_1(VAR_9, VAR_8->dev) != 0)
  goto err;
 else if (VAR_8->use_setsockopt &&
   FUNC_7(VAR_9, VAR_8->ifindex, VAR_8->version))
  goto err;

 if (VAR_8->has_local_ip && FUNC_0(VAR_9, VAR_8))
  goto err;

 if (VAR_8->type != VAR_4)
  goto out;

 if (VAR_8->password && FUNC_9(VAR_9, VAR_6, VAR_7, VAR_8->password))
  goto err;

 if (VAR_8->bind_test_only)
  goto out;

 if (FUNC_3(VAR_9, VAR_6, VAR_7) < 0) {
  if (VAR_5 != VAR_0) {
   FUNC_5("Failed to connect to remote host");
   VAR_10 = -1;
   goto err;
  }
  VAR_10 = FUNC_10(VAR_9);
  if (VAR_10 < 0)
   goto err;
 }
out:
 return VAR_9;

err:
 FUNC_2(VAR_9);
 return VAR_10;
}
