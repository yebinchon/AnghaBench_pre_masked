
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stats {int bytes; int packets; int uid; } ;
struct sockaddr_in {int sin_addr; int sin_port; int sin_family; int member_0; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int si_other ;
typedef int message ;
typedef int cookie ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int ,int*,struct stats*) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int,int ,char*,...) ;
 int FUNC_4 (int,int ,int ,int*,int*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int VAR_8 ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_10 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(void)
{
 struct sockaddr_in VAR_9 = {0};
 struct sockaddr_in VAR_10 = {0};
 struct stats VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 char VAR_16 = 'a';
 char VAR_17;
 uint64_t VAR_18;
 int VAR_19;
 socklen_t VAR_20 = sizeof(VAR_18);
 socklen_t VAR_21 = sizeof(VAR_9);

 VAR_12 = FUNC_11(VAR_2, VAR_4, 0);
 if (VAR_12 < 0)
  FUNC_3(1, VAR_7, "rcv socket creat failed!\n");
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_5(VAR_3);
 if (FUNC_6("127.0.0.1", &VAR_9.sin_addr) == 0)
  FUNC_3(1, VAR_7, "inet_aton\n");
 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) == -1)
  FUNC_3(1, VAR_7, "bind\n");
 VAR_13 = FUNC_11(VAR_2, VAR_4, 0);
 if (VAR_13 < 0)
  FUNC_3(1, VAR_7, "send socket creat failed!\n");
 VAR_19 = FUNC_4(VAR_13, VAR_5, VAR_6, &VAR_18, &VAR_20);
 if (VAR_19 < 0)
  FUNC_8("get cookie failed: %s\n", FUNC_12(VAR_7));
 VAR_19 = FUNC_1(VAR_8, &VAR_18, &VAR_11);
 if (VAR_19 != -1)
  FUNC_3(1, VAR_7, "socket stat found while flow not active\n");
 for (VAR_14 = 0; VAR_14 < 10; VAR_14++) {
  VAR_19 = FUNC_10(VAR_13, &VAR_16, sizeof(VAR_16), 0,
        (struct sockaddr *)&VAR_9, VAR_21);
  if (VAR_19 == -1)
   FUNC_3(1, VAR_7, "send\n");
  if (VAR_19 != sizeof(VAR_16))
   FUNC_3(1, 0, "%uB != %luB\n", VAR_19, sizeof(VAR_16));
  VAR_15 = FUNC_9(VAR_12, &VAR_17, sizeof(VAR_17), 0,
        (struct sockaddr *)&VAR_10, &VAR_21);
  if (VAR_15 < 0)
   FUNC_3(1, VAR_7, "receive\n");
  VAR_19 = FUNC_7(&(VAR_9.sin_addr), &(VAR_10.sin_addr),
      sizeof(VAR_10.sin_addr));
  if (VAR_19 != 0)
   FUNC_3(1, VAR_1, "sender addr error: %d\n", VAR_19);
  FUNC_8("Message received: %c\n", VAR_17);
  VAR_19 = FUNC_1(VAR_8, &VAR_18, &VAR_11);
  if (VAR_19 < 0)
   FUNC_3(1, VAR_7, "lookup sk stat failed, cookie: %lu\n",
         VAR_18);
  FUNC_8("cookie: %lu, uid: 0x%x, Packet Count: %lu,"
   " Bytes Count: %lu\n\n", VAR_18, VAR_11.uid,
   VAR_11.packets, VAR_11.bytes);
 }
 FUNC_2(VAR_13);
 FUNC_2(VAR_12);
}
