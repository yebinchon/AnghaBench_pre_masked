
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int* s6_addr16; } ;
struct sockaddr_in6 {int sin6_port; TYPE_1__ sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int in6 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 char** VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
 struct sockaddr_in6 VAR_7 = { .sin6_family = VAR_0 };
 uint32_t VAR_8 = 0, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0xfaceb00c;
 int VAR_13;
 int VAR_14;

 VAR_9 = FUNC_7() & 0x00FF;
 FUNC_5(VAR_9, VAR_12);

 VAR_7[0] = 0xdead;
 VAR_7[1] = 0xbeef;
 VAR_7 = VAR_9;

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  FUNC_6("%s: ", VAR_6[VAR_14]);

  VAR_7[7] = VAR_14;
  VAR_13 = FUNC_3(-1, (struct sockaddr *)&VAR_7, sizeof(VAR_7));
  FUNC_0(VAR_13 == -1 && VAR_5 == VAR_1);

  VAR_13 = FUNC_2(VAR_4, &VAR_8, &VAR_10);
  FUNC_0(!VAR_13);

  VAR_13 = FUNC_2(VAR_2, &VAR_8,
       &VAR_11);
  FUNC_0(!VAR_13);

  if (VAR_10 != VAR_12 || VAR_11 != VAR_12) {
   FUNC_6("Error. result:%d inline_result:%d\n",
          VAR_10, VAR_11);
   FUNC_4(1);
  }

  FUNC_1(VAR_4, &VAR_8);
  FUNC_1(VAR_2, &VAR_8);

  FUNC_6("Pass\n");
 }
}
