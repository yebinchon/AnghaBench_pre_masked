
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (int ,struct termios*) ;
 int FUNC_4 (int ,int ,struct termios*) ;

__attribute__((used)) static BOOL
FUNC_5(char *VAR_7, int VAR_8)
{
 struct termios VAR_9;
 BOOL VAR_10 = VAR_1;
 int VAR_11 = 0;
 char *VAR_12;

 if (FUNC_3(VAR_2, &VAR_9) == 0)
 {
  FUNC_1(VAR_5, "Password: ");
  VAR_9.c_lflag &= ~VAR_0;
  FUNC_4(VAR_2, VAR_3, &VAR_9);
  VAR_11 = 1;
 }

 if (FUNC_0(VAR_7, VAR_8, VAR_6) != ((void*)0))
 {
  VAR_10 = VAR_4;


  VAR_12 = FUNC_2(VAR_7, '\n');
  if (VAR_12 != ((void*)0))
   *VAR_12 = 0;
 }

 if (VAR_11)
 {
  VAR_9.c_lflag |= VAR_0;
  FUNC_4(VAR_2, VAR_3, &VAR_9);
  FUNC_1(VAR_5, "\n");
 }

 return VAR_10;
}
