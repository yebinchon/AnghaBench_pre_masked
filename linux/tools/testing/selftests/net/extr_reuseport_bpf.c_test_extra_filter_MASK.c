
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_params {int protocol; int recv_family; int recv_port; } ;
struct sockaddr {int dummy; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr* const,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,scalar_t__,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sockaddr* const) ;
 struct sockaddr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ,int*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(const struct test_params VAR_5)
{
 struct sockaddr * const VAR_6 =
  FUNC_5(VAR_5.recv_family, VAR_5.recv_port);
 int VAR_7, VAR_8, VAR_9;

 FUNC_3(VAR_4, "Testing too many filters...\n");
 VAR_7 = FUNC_8(VAR_5.recv_family, VAR_5.protocol, 0);
 if (VAR_7 < 0)
  FUNC_2(1, VAR_3, "failed to create socket 1");
 VAR_8 = FUNC_8(VAR_5.recv_family, VAR_5.protocol, 0);
 if (VAR_8 < 0)
  FUNC_2(1, VAR_3, "failed to create socket 2");

 VAR_9 = 1;
 if (FUNC_6(VAR_7, VAR_1, VAR_2, &VAR_9, sizeof(VAR_9)))
  FUNC_2(1, VAR_3, "failed to set SO_REUSEPORT on socket 1");
 if (FUNC_6(VAR_8, VAR_1, VAR_2, &VAR_9, sizeof(VAR_9)))
  FUNC_2(1, VAR_3, "failed to set SO_REUSEPORT on socket 2");

 FUNC_0(VAR_7, 10);
 FUNC_0(VAR_8, 10);

 if (FUNC_1(VAR_7, VAR_6, FUNC_7()))
  FUNC_2(1, VAR_3, "failed to bind recv socket 1");

 if (!FUNC_1(VAR_8, VAR_6, FUNC_7()) && VAR_3 != VAR_0)
  FUNC_2(1, VAR_3, "bind socket 2 should fail with EADDRINUSE");

 FUNC_4(VAR_6);
}
