
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {TYPE_3__ in; } ;
struct TYPE_6__ {int s_addr; } ;
struct sock_args {int ifindex; TYPE_4__ local_addr; TYPE_2__ grp; scalar_t__ use_setsockopt; int dev; scalar_t__ has_local_ip; int port; } ;
typedef int one ;
typedef int laddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct sock_args *VAR_7, int VAR_8)
{
 uint32_t VAR_9 = FUNC_3(VAR_1);
 struct sockaddr_in VAR_10 = {
  .sin_family = VAR_0,
  .sin_port = FUNC_4(VAR_7->port),
 };
 int VAR_11 = 1;
 int VAR_12;

 if (!VAR_8 && VAR_7->has_local_ip)
  VAR_9 = VAR_7->local_addr.in.s_addr;

 VAR_12 = FUNC_9(VAR_2, VAR_3, 0);
 if (VAR_12 < 0) {
  FUNC_5("socket");
  return -1;
 }

 if (FUNC_8(VAR_12, VAR_4, VAR_6,
         (char *)&VAR_11, sizeof(VAR_11)) < 0) {
  FUNC_5("Setting SO_REUSEADDR error");
  goto out_err;
 }

 if (FUNC_8(VAR_12, VAR_4, VAR_5,
         (char *)&VAR_11, sizeof(VAR_11)) < 0)
  FUNC_5("Setting SO_BROADCAST error");

 if (VAR_7->dev && FUNC_1(VAR_12, VAR_7->dev) != 0)
  goto out_err;
 else if (VAR_7->use_setsockopt &&
   FUNC_7(VAR_12, VAR_7->ifindex))
  goto out_err;

 VAR_10.sin_addr.s_addr = VAR_9;

 if (FUNC_0(VAR_12, (struct sockaddr *) &VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_5("bind failed");
  goto out_err;
 }

 if (VAR_8 &&
     FUNC_6(VAR_12, VAR_7->grp.s_addr,
      VAR_7->local_addr.in.s_addr, VAR_7->ifindex))
  goto out_err;

 return VAR_12;
out_err:
 FUNC_2(VAR_12);
 return -1;
}
