
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
typedef int cliAddrStr ;
typedef int buf ;
typedef int bbuf ;
typedef int SReadlineInfo ;


 char* FUNC_0 (char*,int,struct sockaddr_in*,int,char*) ;
 scalar_t__ FUNC_1 (int *,int,char*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int,char*,int,int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,char*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (char) ;
 int VAR_1 ;
 int FUNC_9 (char*,int,...) ;
 int VAR_2 ;
 char* FUNC_10 (int ) ;
 char FUNC_11 (char) ;

__attribute__((used)) static void
FUNC_12(int VAR_3, struct sockaddr_in *VAR_4)
{
 char VAR_5[80], VAR_6[64];
 char VAR_7[320];
 int VAR_8, VAR_9, VAR_10;
 SReadlineInfo VAR_11;

 FUNC_9("subserver[%d]: started, connected to %s.\n", (int) FUNC_7(),
  FUNC_0(VAR_6, sizeof(VAR_6), VAR_4, 1, "<%h:%p>")
 );

 if (FUNC_1(&VAR_11, VAR_3, VAR_7, sizeof(VAR_7), 5) < 0) {
  FUNC_6(VAR_2, "subserver[%d]: InitSReadlineInfo error: %s\n",
   (int) FUNC_7(), FUNC_10(VAR_0));
  FUNC_5(1);
 }
 for (;;) {
  VAR_8 = FUNC_3(&VAR_11, VAR_5, sizeof(VAR_5));
  if (VAR_8 == 0) {
   break;
  } else if (VAR_8 == VAR_1) {
   FUNC_9("subserver[%d]: idle\n", (int) FUNC_7());
   continue;
  } else if (VAR_8 < 0) {
   FUNC_6(VAR_2, "subserver[%d]: read error: %s\n",
    (int) FUNC_7(), FUNC_10(VAR_0));
   break;
  }
  for (VAR_10=0; VAR_10<VAR_8; VAR_10++)
   if (FUNC_8(VAR_5[VAR_10]))
    VAR_5[VAR_10] = FUNC_11(VAR_5[VAR_10]);
  VAR_9 = FUNC_4(VAR_3, VAR_5, VAR_8, 15);
  if (VAR_9 < 0) {
   FUNC_6(VAR_2, "subserver[%d]: write error: %s\n",
    (int) FUNC_7(), FUNC_10(VAR_0));
   break;
  }
 }
 (void) FUNC_2(VAR_3, 10);
 FUNC_9("subserver[%d]: done.\n", (int) FUNC_7());
 FUNC_5(0);
}
