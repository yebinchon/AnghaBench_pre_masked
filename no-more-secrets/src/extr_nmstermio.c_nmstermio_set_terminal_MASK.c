
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,struct termios*) ;
 int FUNC_3 (int ,int ,struct termios*) ;

__attribute__((used)) static void FUNC_4(int VAR_6) {
 struct termios VAR_7;
 static struct termios VAR_8;
 static int VAR_9 = 1;

 if (!FUNC_1(VAR_2)) {
  VAR_5 = FUNC_0("/dev/tty", "r", VAR_5);
 }

 if (VAR_6 == 0) {
  if (FUNC_2(VAR_2, &VAR_7) == -1) {
   return;
  }

  VAR_8 = VAR_7;

  VAR_7.c_lflag &=(~VAR_1 & ~VAR_0);

  if (FUNC_3(VAR_2, VAR_3, &VAR_7) == -1) {
   return;
  }
 } else {
  if (VAR_9 == 0 && FUNC_3(VAR_2, VAR_4, &VAR_8) == -1)
   return;
 }

 VAR_9 = VAR_6;
}
