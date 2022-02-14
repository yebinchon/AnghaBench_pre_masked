
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int one ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_10 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int,int ,int ,char*,int) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(int VAR_15)
{
 int VAR_16, VAR_17, VAR_18 = 1;
 struct sockaddr_in VAR_19;
 int *VAR_20[4] = {&VAR_13, &VAR_14, &VAR_8, &VAR_9};

 VAR_13 = VAR_14 = VAR_11 = VAR_12 = VAR_8 = VAR_9 = 0;


 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  *VAR_20[VAR_16] = FUNC_11(VAR_0, VAR_5, 0);
  if (*VAR_20[VAR_16] < 0) {
   FUNC_8("socket s1 failed()");
   return VAR_10;
  }
 }


 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_17 = FUNC_10(*VAR_20[VAR_16], VAR_6, VAR_7,
     (char *)&VAR_18, sizeof(VAR_18));
  if (VAR_17) {
   FUNC_8("setsockopt failed()");
   return VAR_10;
  }
 }


 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_17 = FUNC_5(*VAR_20[VAR_16], VAR_2, (char *)&VAR_18);
  if (VAR_17 < 0) {
   FUNC_8("ioctl s1 failed()");
   return VAR_10;
  }
 }


 FUNC_7(&VAR_19, 0, sizeof(struct sockaddr_in));
 VAR_19.sin_family = VAR_0;
 VAR_19.sin_addr.s_addr = FUNC_4("127.0.0.1");

 VAR_19.sin_port = FUNC_3(VAR_3);
 VAR_17 = FUNC_1(VAR_13, (struct sockaddr *)&VAR_19, sizeof(VAR_19));
 if (VAR_17 < 0) {
  FUNC_8("bind s1 failed()\n");
  return VAR_10;
 }

 VAR_19.sin_port = FUNC_3(VAR_4);
 VAR_17 = FUNC_1(VAR_14, (struct sockaddr *)&VAR_19, sizeof(VAR_19));
 if (VAR_17 < 0) {
  FUNC_8("bind s2 failed()\n");
  return VAR_10;
 }


 VAR_19.sin_port = FUNC_3(VAR_3);
 VAR_17 = FUNC_6(VAR_13, 32);
 if (VAR_17 < 0) {
  FUNC_8("listen s1 failed()\n");
  return VAR_10;
 }

 VAR_19.sin_port = FUNC_3(VAR_4);
 VAR_17 = FUNC_6(VAR_14, 32);
 if (VAR_17 < 0) {
  FUNC_8("listen s1 failed()\n");
  return VAR_10;
 }


 VAR_19.sin_port = FUNC_3(VAR_3);
 VAR_17 = FUNC_2(VAR_8, (struct sockaddr *)&VAR_19, sizeof(VAR_19));
 if (VAR_17 < 0 && VAR_10 != VAR_1) {
  FUNC_8("connect c1 failed()\n");
  return VAR_10;
 }

 VAR_19.sin_port = FUNC_3(VAR_4);
 VAR_17 = FUNC_2(VAR_9, (struct sockaddr *)&VAR_19, sizeof(VAR_19));
 if (VAR_17 < 0 && VAR_10 != VAR_1) {
  FUNC_8("connect c2 failed()\n");
  return VAR_10;
 } else if (VAR_17 < 0) {
  VAR_17 = 0;
 }


 VAR_11 = FUNC_0(VAR_13, ((void*)0), ((void*)0));
 if (VAR_11 < 0) {
  FUNC_8("accept s1 failed()\n");
  return VAR_10;
 }

 VAR_12 = FUNC_0(VAR_14, ((void*)0), ((void*)0));
 if (VAR_12 < 0) {
  FUNC_8("accept s1 failed()\n");
  return VAR_10;
 }

 if (VAR_15) {
  FUNC_9("connected sockets: c1 <-> p1, c2 <-> p2\n");
  FUNC_9("cgroups binding: c1(%i) <-> s1(%i) - - - c2(%i) <-> s2(%i)\n",
   VAR_8, VAR_13, VAR_9, VAR_14);
 }
 return 0;
}
