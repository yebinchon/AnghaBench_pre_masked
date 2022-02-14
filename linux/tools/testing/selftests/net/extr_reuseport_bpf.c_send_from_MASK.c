
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct test_params {int protocol; int send_family; int recv_port; } ;
struct sockaddr {int dummy; } ;
typedef int one ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const,struct sockaddr* const,int ) ;
 int FUNC_1 (int const) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (struct sockaddr* const) ;
 struct sockaddr* FUNC_4 (int ,int ) ;
 struct sockaddr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int const,char*,size_t,int ,struct sockaddr* const,int ) ;
 scalar_t__ FUNC_7 (int const,int ,int ,int const*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct test_params VAR_4, uint16_t VAR_5, char *VAR_6,
        size_t VAR_7)
{
 struct sockaddr * const VAR_8 = FUNC_4(VAR_4.send_family, VAR_5);
 struct sockaddr * const VAR_9 =
  FUNC_5(VAR_4.send_family, VAR_4.recv_port);
 const int VAR_10 = FUNC_9(VAR_4.send_family, VAR_4.protocol, 0), VAR_11 = 1;

 if (VAR_10 < 0)
  FUNC_2(1, VAR_3, "failed to create send socket");

 if (FUNC_7(VAR_10, VAR_1, VAR_2, &VAR_11, sizeof(VAR_11)))
  FUNC_2(1, VAR_3, "failed to set reuseaddr");

 if (FUNC_0(VAR_10, VAR_8, FUNC_8()))
  FUNC_2(1, VAR_3, "failed to bind send socket");

 if (FUNC_6(VAR_10, VAR_6, VAR_7, VAR_0, VAR_9, FUNC_8()) < 0)
  FUNC_2(1, VAR_3, "failed to send message");

 FUNC_1(VAR_10);
 FUNC_3(VAR_8);
 FUNC_3(VAR_9);
}
