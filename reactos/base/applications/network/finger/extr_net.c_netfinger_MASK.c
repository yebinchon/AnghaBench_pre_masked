
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct servent {int s_port; } ;
struct in_addr {unsigned long s_addr; } ;
struct hostent {char* h_name; char** h_addr_list; char* h_addr; int h_length; int h_addrtype; scalar_t__ h_aliases; } ;
typedef int sin ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,int) ;
 int FUNC_4 (int ,char*,...) ;
 struct hostent* FUNC_5 (char*) ;
 struct servent* FUNC_6 (char*,char*) ;
 unsigned long FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char) ;
 int FUNC_14 (int ,char*,int,int ) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (int ,char*,int,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_18 (char*) ;

void
FUNC_19(char *VAR_4)
{
 extern int VAR_5;
 char VAR_6, VAR_7;
 struct in_addr VAR_8;
 struct hostent *VAR_9, VAR_10;
 struct servent *VAR_11;
 struct sockaddr_in VAR_12;
 SOCKET VAR_13;
 char *VAR_14[1], *VAR_15;


 if (!(VAR_15 = FUNC_15(VAR_4, '@')))
  return;

 *VAR_15++ = '\0';
 if (FUNC_8(*VAR_15) && (VAR_8.s_addr = FUNC_7(VAR_15)) != (unsigned long)-1) {
  VAR_10.h_name = VAR_15;
  VAR_10.h_addr_list = VAR_14;
  VAR_10.h_addr = (char *)&VAR_8;
  VAR_10.h_length = sizeof(struct in_addr);
  VAR_10.h_addrtype = VAR_0;
  VAR_10.h_aliases = 0;
  VAR_9 = &VAR_10;
 } else if (!(VAR_9 = FUNC_5(VAR_15))) {
  (void)FUNC_4(VAR_3,
      "finger: unknown host: %s\n", VAR_15);
  return;
 }
 if (!(VAR_11 = FUNC_6("finger", "tcp"))) {
  (void)FUNC_4(VAR_3, "finger: tcp/finger: unknown service\n");
  return;
 }
 VAR_12.sin_family = VAR_9->h_addrtype;
 FUNC_1(VAR_9->h_addr, (char *)&VAR_12.sin_addr, VAR_9->h_length);
 VAR_12.sin_port = VAR_11->s_port;
 if ((VAR_13 = FUNC_17(VAR_9->h_addrtype, VAR_2, 0)) == VAR_1) {
  FUNC_11("finger: socket");
  return;
 }


 (void)FUNC_12("[%s]\n", VAR_9->h_name);
 if (FUNC_3(VAR_13, (struct sockaddr *)&VAR_12, sizeof(VAR_12)) < 0) {
  FUNC_4(VAR_3, "finger: connect rc = %d", FUNC_0());
  (void)FUNC_2(VAR_13);
  return;
 }


 if (VAR_5)
  FUNC_16(VAR_13, "/W ", 3, 0);

 FUNC_16(VAR_13, VAR_4, FUNC_18(VAR_4), 0);
 FUNC_16(VAR_13, "\r\n", 2, 0);
 VAR_7 = 0;
 while (FUNC_14(VAR_13, &VAR_6, 1, 0) == 1) {
  VAR_6 &= 0x7f;
  if (VAR_6 == 0x0d) {
   if (VAR_7 == '\r')
    continue;
   VAR_6 = '\n';
   VAR_7 = '\r';
  } else {
   if (!FUNC_9(VAR_6) && !FUNC_10(VAR_6))
    VAR_6 |= 0x40;
   if (VAR_7 != '\r' || VAR_6 != '\n')
    VAR_7 = VAR_6;
   else {
    VAR_7 = '\n';
    continue;
   }
  }
  FUNC_13(VAR_6);
 }
 if (VAR_7 != '\n')
  FUNC_13('\n');
 FUNC_13('\n');
 (void)FUNC_2(VAR_13);
}
