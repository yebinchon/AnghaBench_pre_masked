
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; int* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 struct termios VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,struct termios*) ;
 int FUNC_5 (int ,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct termios VAR_10;


 if (!FUNC_3(VAR_3)) {
  FUNC_2(VAR_9, "Not a terminal.\n");
  FUNC_1(VAR_1);
 }


 FUNC_4(VAR_3, &VAR_8);
 FUNC_0(VAR_7);


 FUNC_4(VAR_3, &VAR_10);
 VAR_10.c_lflag &= ~(VAR_2|VAR_0);
 VAR_10.c_cc[VAR_5] = 1;
 VAR_10.c_cc[VAR_6] = 0;
 FUNC_5(VAR_3, VAR_4, &VAR_10);
}
