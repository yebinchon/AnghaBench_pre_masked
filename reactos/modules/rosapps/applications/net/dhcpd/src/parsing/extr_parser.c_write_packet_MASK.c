
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct sockaddr_in {struct in_addr sin_addr; int sin_zero; void* sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int enable ;
typedef int DHCPMESSAGE ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 struct hostent* FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 char* FUNC_5 (struct in_addr) ;
 int FUNC_6 (int *,char,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int,int *,int,int ,struct sockaddr*,int) ;
 int FUNC_10 (int,int ,int ,int*,int) ;
 int FUNC_11 (void*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (char*,char*) ;

int FUNC_13( DHCPMESSAGE *VAR_5, char *VAR_6 )
{
  int VAR_7;
  struct sockaddr_in VAR_8;
  struct hostent *VAR_9;
  int VAR_10;
  int VAR_11 = 1;

  FUNC_2( VAR_4, "write_packet [begin]\n" );

  if( !VAR_5 )
    return -1;

  if ((VAR_7 = FUNC_11(VAR_0, VAR_1, 0)) == -1) {
    FUNC_7("socket");
    FUNC_1(1);
  }

  if( FUNC_10( VAR_7, VAR_2, VAR_3, &VAR_11, sizeof( VAR_11 )) == -1 )
    {
      FUNC_7("setsockopt");
      FUNC_1(1);
    }

  if( FUNC_12( "255.255.255.255", VAR_6 ) )
    {
      if ((VAR_9=FUNC_3(VAR_6)) == ((void*)0)) {
 FUNC_7("gethostbyname");
 FUNC_2( VAR_4, "Unknown host %s \n", VAR_6 );
 return -1;
      }
      VAR_8.sin_family = VAR_0;
      VAR_8.sin_port = FUNC_4(68);
      VAR_8.sin_addr = *((struct in_addr *)VAR_9->h_addr);
    } else {
      VAR_8.sin_family = VAR_0;
      VAR_8.sin_port = FUNC_4(68);
      VAR_8.sin_addr.s_addr = 0xFFFFFFFF;
    }

  FUNC_2( VAR_4, "IP a buscar: %s \n", VAR_6 );
  FUNC_6(&(VAR_8.sin_zero), '\0', 8);

  if ((VAR_10=FUNC_9(VAR_7, VAR_5, sizeof(DHCPMESSAGE), 0,
         (struct sockaddr *)&VAR_8, sizeof(struct sockaddr))) == -1) {
    FUNC_7("sendto");
    FUNC_1(1);
  }

  FUNC_8("sent %d bytes to %s\n", VAR_10,
  FUNC_5(VAR_8.sin_addr));

  FUNC_0(VAR_7);

  FUNC_2( VAR_4, "write_packet [end]\n" );

  return 0;
}
