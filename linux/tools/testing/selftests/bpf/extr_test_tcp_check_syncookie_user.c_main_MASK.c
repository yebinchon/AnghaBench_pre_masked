
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; int sin6_family; scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr_in {scalar_t__ sin6_port; int sin6_addr; int sin6_family; scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr6 ;
typedef int addr4 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sockaddr_in6*,int ,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,int,int) ;
 int FUNC_10 (struct sockaddr const*,int) ;
 int VAR_4 ;

int FUNC_11(int VAR_5, char **VAR_6)
{
 struct sockaddr_in VAR_7;
 struct sockaddr_in6 VAR_8;
 int VAR_9 = -1;
 int VAR_10 = -1;
 int VAR_11 = -1;
 int VAR_12 = 0;
 bool VAR_13;

 if (VAR_5 < 2) {
  FUNC_3(VAR_4, "Usage: %s prog_id\n", VAR_6[0]);
  FUNC_2(1);
 }

 VAR_11 = FUNC_4(FUNC_0(VAR_6[1]), &VAR_13);
 if (VAR_11 < 0) {
  FUNC_6("Can't get map");
  goto err;
 }

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));
 VAR_7 = VAR_0;
 VAR_7 = FUNC_5(VAR_2);
 VAR_7 = 0;

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 VAR_8 = VAR_1;
 VAR_8 = VAR_3;
 VAR_8 = 0;

 VAR_9 = FUNC_10((const struct sockaddr *)&VAR_7, sizeof(VAR_7));
 if (VAR_9 == -1)
  goto err;

 VAR_10 = FUNC_10((const struct sockaddr *)&VAR_8,
     sizeof(VAR_8));
 if (VAR_10 == -1)
  goto err;

 if (FUNC_9(VAR_9, VAR_11, VAR_13))
  goto err;

 if (FUNC_9(VAR_10, VAR_11, VAR_13))
  goto err;

 FUNC_8("ok\n");
 goto out;
err:
 VAR_12 = 1;
out:
 FUNC_1(VAR_9);
 FUNC_1(VAR_10);
 FUNC_1(VAR_11);
 return VAR_12;
}
