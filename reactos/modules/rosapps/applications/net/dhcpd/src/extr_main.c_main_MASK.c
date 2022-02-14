
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_zero; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int WSADATA ;
typedef int DHCPOPTIONS ;
typedef int DHCPMESSAGE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,char,int) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int,int *,int,int ,struct sockaddr*,int*) ;
 int FUNC_14 (int ,int ,int ) ;

int FUNC_15( int VAR_5, char *VAR_6[] )
{




  int VAR_7;
  struct sockaddr_in VAR_8;
  struct sockaddr_in VAR_9;
  int VAR_10, VAR_11;
  DHCPMESSAGE VAR_12;
  DHCPOPTIONS VAR_13;
  if ((VAR_7 = FUNC_14(VAR_0, VAR_4, VAR_2)) == -1) {
    FUNC_11("socket");
    FUNC_6(1);
  }

  FUNC_8();

  VAR_8.sin_family = VAR_0;
  VAR_8.sin_port = FUNC_7(VAR_3);
  VAR_8.sin_addr.s_addr = VAR_1;
  FUNC_9(&(VAR_8.sin_zero), '\0', 8);

  if (FUNC_3(VAR_7, (struct sockaddr *)&VAR_8,
    sizeof(struct sockaddr)) == -1) {
    FUNC_11("bind");
    FUNC_6(1);
  }

  VAR_10 = sizeof(struct sockaddr);
  while((VAR_11=FUNC_13(VAR_7,&VAR_12, sizeof( DHCPMESSAGE ), 0,
    (struct sockaddr *)&VAR_9, &VAR_10)) != -1) {

    FUNC_5( &VAR_12, &VAR_13 );
    if( FUNC_10( &VAR_12, &VAR_13 ) < 0 )
      continue;
    if( FUNC_5( &VAR_12, &VAR_13 ) < 0 )
      continue;
    if( FUNC_12( &VAR_12, &VAR_13 ) < 0 )
      continue;
  }

  FUNC_4(VAR_7);





  return 0;

}
