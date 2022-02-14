
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct servent {int s_port; } ;
struct hostent {char* h_name; int h_length; int h_addr; int h_addrtype; } ;
typedef int sin ;
typedef int WSADATA ;
typedef int WORD ;
typedef scalar_t__ SOCKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_6 (int ,char*,...) ;
 struct hostent* FUNC_7 (char*) ;
 struct servent* FUNC_8 (char*,char*) ;
 int FUNC_9 (int,char**) ;
 char* VAR_2 ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (struct sockaddr_in*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char) ;
 int FUNC_15 (scalar_t__,char*,int,int ) ;
 int FUNC_16 (scalar_t__,char*,int,int ) ;
 scalar_t__ FUNC_17 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_18 (char*) ;
 int FUNC_19 () ;

int FUNC_20(int VAR_5, char **VAR_6)
{
 char VAR_7;
 struct sockaddr_in VAR_8;
 struct hostent *VAR_9;
 struct servent *VAR_10;
 SOCKET VAR_11;

 WORD VAR_12;
 WSADATA VAR_13;
 int VAR_14;

 FUNC_9(VAR_5, VAR_6);
 VAR_5 -= VAR_3;
 VAR_6 += VAR_3;

    if (!VAR_2 || !VAR_5)
  FUNC_19();


 VAR_12 = FUNC_0( 1, 1 );
 VAR_14 = FUNC_2( VAR_12, &VAR_13 );
 if ( VAR_14 != 0 )
 {


  FUNC_12("whois: WSAStartup failed");
  FUNC_4(1);
 }

 VAR_9 = FUNC_7(VAR_2);
 if (VAR_9 == ((void*)0)) {
  (void)FUNC_6(VAR_4, "whois: %s: ", VAR_2);
  FUNC_4(1);
 }
 VAR_2 = VAR_9->h_name;

 VAR_11 = FUNC_17(VAR_9->h_addrtype, VAR_1, 0);
 if (VAR_11 == VAR_0) {
  FUNC_12("whois: socket");
  FUNC_4(1);
 }

 FUNC_11( &VAR_8, 0, sizeof(VAR_8));
 VAR_8.sin_family = VAR_9->h_addrtype;
 if (FUNC_3(VAR_11, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_12("whois: bind");
  FUNC_4(1);
 }

 FUNC_10((char *)&VAR_8.sin_addr, VAR_9->h_addr, VAR_9->h_length);
 VAR_10 = FUNC_8("nicname", "tcp");
 if (VAR_10 == ((void*)0)) {
  (void)FUNC_6(VAR_4, "whois: nicname/tcp: unknown service\n");
  FUNC_4(1);
 }

 VAR_8.sin_port = VAR_10->s_port;


 (void)FUNC_13("[%s]\n", VAR_9->h_name);

 if (FUNC_5(VAR_11, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_6(VAR_4, "whois: connect error = %d\n", FUNC_1());
  FUNC_4(1);
 }





 while (VAR_5-- > 1)
 {

  FUNC_16(VAR_11, *VAR_6, FUNC_18(*VAR_6), 0);
  FUNC_16(VAR_11, " ", 1, 0);
  VAR_6++;
 }

 FUNC_16(VAR_11, *VAR_6, FUNC_18(*VAR_6), 0);
 FUNC_16(VAR_11, "\r\n", 2, 0);


 while (FUNC_15(VAR_11, &VAR_7, 1, 0) == 1)
  FUNC_14(VAR_7);

 FUNC_4(0);
 return 0;
}
