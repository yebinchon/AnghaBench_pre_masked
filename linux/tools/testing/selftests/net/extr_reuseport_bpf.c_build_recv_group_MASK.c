
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct test_params {int recv_socks; scalar_t__ protocol; int recv_family; int recv_port; } ;
struct sockaddr {int dummy; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr* const,int ) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,char*,...) ;
 int FUNC_2 (struct sockaddr* const) ;
 scalar_t__ FUNC_3 (int,int) ;
 struct sockaddr* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(const struct test_params VAR_6, int VAR_7[], uint16_t VAR_8,
        void (*VAR_9)(int, uint16_t))
{
 struct sockaddr * const VAR_10 =
  FUNC_4(VAR_6.recv_family, VAR_6.recv_port);
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_6.recv_socks; ++VAR_11) {
  VAR_7[VAR_11] = FUNC_7(VAR_6.recv_family, VAR_6.protocol, 0);
  if (VAR_7[VAR_11] < 0)
   FUNC_1(1, VAR_5, "failed to create recv %d", VAR_11);

  VAR_12 = 1;
  if (FUNC_5(VAR_7[VAR_11], VAR_1, VAR_3, &VAR_12,
          sizeof(VAR_12)))
   FUNC_1(1, VAR_5, "failed to set SO_REUSEPORT on %d", VAR_11);

  if (VAR_11 == 0)
   VAR_9(VAR_7[VAR_11], VAR_8);

  if (FUNC_0(VAR_7[VAR_11], VAR_10, FUNC_6()))
   FUNC_1(1, VAR_5, "failed to bind recv socket %d", VAR_11);

  if (VAR_6.protocol == VAR_0) {
   VAR_12 = 4;
   if (FUNC_5(VAR_7[VAR_11], VAR_2, VAR_4, &VAR_12,
           sizeof(VAR_12)))
    FUNC_1(1, VAR_5,
          "failed to set TCP_FASTOPEN on %d", VAR_11);
   if (FUNC_3(VAR_7[VAR_11], VAR_6.recv_socks * 10))
    FUNC_1(1, VAR_5, "failed to listen on socket");
  }
 }
 FUNC_2(VAR_10);
}
