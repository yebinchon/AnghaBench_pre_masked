
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_args {scalar_t__ type; scalar_t__ bind_test_only; int version; int ifindex; scalar_t__ use_setsockopt; int dev; int protocol; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sock_args*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 long FUNC_3 (int,int ,...) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_10(struct sock_args *VAR_6)
{
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_9(VAR_6->version, VAR_6->type, VAR_6->protocol);
 if (VAR_8 < 0) {
  FUNC_5("Error opening socket");
  return -1;
 }

 if (FUNC_6(VAR_8) != 0)
  goto err;

 if (FUNC_7(VAR_8) != 0)
  goto err;

 if (VAR_6->dev && FUNC_1(VAR_8, VAR_6->dev) != 0)
  goto err;
 else if (VAR_6->use_setsockopt &&
   FUNC_8(VAR_8, VAR_6->ifindex, VAR_6->version))
  goto err;

 if (FUNC_0(VAR_8, VAR_6))
  goto err;

 if (VAR_6->bind_test_only)
  goto out;

 if (VAR_6->type == VAR_5 && FUNC_4(VAR_8, 1) < 0) {
  FUNC_5("listen failed");
  goto err;
 }

 VAR_7 = FUNC_3(VAR_8, VAR_1);
 if ((VAR_7 < 0) || (FUNC_3(VAR_8, VAR_3, VAR_7|VAR_4) < 0)) {
  FUNC_5("Failed to set non-blocking option");
  goto err;
 }

 if (FUNC_3(VAR_8, VAR_2, VAR_0) < 0)
  FUNC_5("Failed to set close-on-exec flag");

out:
 return VAR_8;

err:
 FUNC_2(VAR_8);
 return -1;
}
