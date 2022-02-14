
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {unsigned short sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(int VAR_3, struct sockaddr_in *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned short VAR_10;

 VAR_4->sin_family = VAR_0;
 if (((int) VAR_5 == 0) || ((int) VAR_5 >= (int) VAR_6)) {




  VAR_4->sin_port = 0;

  VAR_8 = FUNC_0(VAR_3, (struct sockaddr *) VAR_4, sizeof(struct sockaddr_in));
 } else {
  VAR_9 = (int) ((int) VAR_6 - (int) VAR_5);
  VAR_8 = 0;
  for (VAR_7=0; VAR_7<10; VAR_7++) {
   VAR_10 = (unsigned short) (((int) FUNC_1() % VAR_9) + (int) VAR_5);
   VAR_4->sin_port = VAR_10;

   VAR_8 = FUNC_0(VAR_3, (struct sockaddr *) VAR_4, sizeof(struct sockaddr_in));
   if (VAR_8 == 0)
    break;
   if ((VAR_1 != 999)




    && (VAR_2[0] != '\0'))
    break;
  }
 }
 return (VAR_8);
}
