
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp_addr ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int serv_addr ;
typedef int mapped_addr ;
typedef int filename ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 char* VAR_4 ;
 int FUNC_3 (int ,struct sockaddr*,struct sockaddr*,int ) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (int,struct sockaddr*,int*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (TYPE_1__) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (char*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_13 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_14 (struct sockaddr*,int ,int) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (char*,char*,...) ;
 int FUNC_17 (char*,int,char*,char*) ;
 int FUNC_18 (void*,int ,int ) ;

int FUNC_19(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 socklen_t VAR_11;
 struct sockaddr VAR_12, VAR_13, VAR_14;
 struct sockaddr_in *VAR_15, *VAR_16, *VAR_17;
 char VAR_18[256];
 char *VAR_19;

 VAR_15 = (struct sockaddr_in *)&VAR_12;
 VAR_16 = (struct sockaddr_in *)&VAR_13;
 VAR_17 = (struct sockaddr_in *)&VAR_14;

 FUNC_17(VAR_18, sizeof(VAR_18), "%s_kern.o", VAR_7[0]);

 if (FUNC_12(VAR_18)) {
  FUNC_16("%s", VAR_4);
  return 1;
 }

 FUNC_1((VAR_8 = FUNC_18(VAR_0, VAR_3, 0)) > 0);
 FUNC_1((VAR_10 = FUNC_18(VAR_0, VAR_3, 0)) > 0);


 FUNC_14(&VAR_12, 0, sizeof(VAR_12));
 VAR_15->sin_family = VAR_0;
 VAR_15->sin_port = 0;
 VAR_15->sin_addr.s_addr = FUNC_7(VAR_2);

 FUNC_1(FUNC_2(VAR_8, &VAR_12, sizeof(VAR_12)) == 0);

 VAR_11 = sizeof(VAR_12);
 FUNC_1(FUNC_6(VAR_8, &VAR_12, &VAR_11) == 0);
 VAR_19 = FUNC_10(VAR_15->sin_addr);
 FUNC_16("Server bound to: %s:%d\n", VAR_19, FUNC_15(VAR_15->sin_port));

 FUNC_14(&VAR_13, 0, sizeof(VAR_13));
 VAR_16->sin_family = VAR_0;
 VAR_16->sin_port = FUNC_8(5555);
 VAR_16->sin_addr.s_addr = FUNC_9("255.255.255.255");

 FUNC_1(!FUNC_3(VAR_5[0], &VAR_13, &VAR_12, VAR_1));

 FUNC_1(FUNC_11(VAR_8, 5) == 0);

 VAR_19 = FUNC_10(VAR_16->sin_addr);
 FUNC_16("Client connecting to: %s:%d\n",
        VAR_19, FUNC_15(VAR_16->sin_port));
 FUNC_1(FUNC_4(VAR_10, &VAR_13, sizeof(VAR_13)) == 0);

 VAR_11 = sizeof(VAR_14);
 VAR_19 = FUNC_10(VAR_17->sin_addr);
 FUNC_1((VAR_9 = FUNC_0(VAR_8, &VAR_14, &VAR_11)) > 0);
 FUNC_16("Server received connection from: %s:%d\n",
        VAR_19, FUNC_15(VAR_17->sin_port));

 VAR_11 = sizeof(VAR_14);
 FUNC_1(FUNC_5(VAR_10, &VAR_14, &VAR_11) == 0);
 VAR_19 = FUNC_10(VAR_17->sin_addr);
 FUNC_16("Client's peer address: %s:%d\n",
        VAR_19, FUNC_15(VAR_17->sin_port));


 FUNC_1(FUNC_13(&VAR_12, &VAR_14, sizeof(struct sockaddr_in)) == 0);

 return 0;
}
