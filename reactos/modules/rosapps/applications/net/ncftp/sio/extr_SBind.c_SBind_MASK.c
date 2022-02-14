
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned short) ;
 int const VAR_5 ;
 int FUNC_3 (int,int ,int ,char*,int) ;
 int FUNC_4 (unsigned int) ;

int
FUNC_5(int VAR_6, const int VAR_7, const int VAR_8, const int VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;
 struct sockaddr_in VAR_13;

 VAR_13.sin_family = VAR_0;
 VAR_13.sin_addr.s_addr = FUNC_1(VAR_1);
 VAR_13.sin_port = FUNC_2((unsigned short) VAR_7);

 if (VAR_9 != VAR_5) {




  VAR_11 = 1;
  VAR_12 = (int) sizeof(VAR_11);
  (void) FUNC_3(VAR_6, VAR_2, VAR_3,
   (char *) &VAR_11, VAR_12);
 }

 for (VAR_10=1; ; VAR_10++) {



  if (FUNC_0(VAR_6, (struct sockaddr *) &VAR_13, sizeof(struct sockaddr_in)) == 0) {
   break;
  }
  if ((int) VAR_10 == VAR_8) {
   return (-1);
  }



  FUNC_4(VAR_10 * 3);
 }

 return (0);
}
