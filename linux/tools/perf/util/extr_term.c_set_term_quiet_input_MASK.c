
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; scalar_t__* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,struct termios*) ;
 int FUNC_1 (int ,int ,struct termios*) ;

void FUNC_2(struct termios *VAR_5)
{
 struct termios VAR_6;

 FUNC_0(0, VAR_5);
 VAR_6 = *VAR_5;
 VAR_6.c_lflag &= ~(VAR_1 | VAR_0);
 VAR_6.c_cc[VAR_3] = 0;
 VAR_6.c_cc[VAR_4] = 0;
 FUNC_1(0, VAR_2, &VAR_6);
}
