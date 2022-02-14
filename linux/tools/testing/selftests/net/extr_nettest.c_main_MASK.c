
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_args {scalar_t__ type; unsigned short port; int has_local_ip; int has_remote_ip; unsigned int protocol; char* password; int use_setsockopt; int use_cmsg; char* dev; scalar_t__ ifindex; int has_grp; int bind_test_only; int has_expected_laddr; int has_expected_raddr; int expected_ifindex; int version; } ;
struct protoent {unsigned int p_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (struct sock_args*,char*,int ) ;
 int FUNC_2 (struct sock_args*) ;
 int FUNC_3 (struct sock_args*) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,int ) ;
 struct protoent* FUNC_7 (char*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (char*) ;
 int * VAR_17 ;
 int FUNC_9 (char*) ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int * FUNC_10 (scalar_t__) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (char*,int,int,unsigned int*) ;

int FUNC_12(int VAR_22, char *VAR_23[])
{
 struct sock_args VAR_24 = {
  .version = VAR_5,
  .type = VAR_14,
  .port = VAR_7,
 };
 struct protoent *VAR_25;
 unsigned int VAR_26;
 int VAR_27 = 0;


 extern char *VAR_28;
 int VAR_29 = 0;





 while ((VAR_29 = FUNC_6(VAR_22, VAR_23, VAR_8)) != -1) {
  switch (VAR_29) {
  case 's':
   VAR_20 = 1;
   break;
  case 'F':
   VAR_27 = 1;
   break;
  case 'l':
   VAR_24.has_local_ip = 1;
   if (FUNC_1(&VAR_24, VAR_28, VAR_2) < 0)
    return 1;
   break;
  case 'r':
   VAR_24.has_remote_ip = 1;
   if (FUNC_1(&VAR_24, VAR_28, VAR_4) < 0)
    return 1;
   break;
  case 'p':
   if (FUNC_11(VAR_28, 1, 65535, &VAR_26) != 0) {
    FUNC_4(VAR_21, "Invalid port\n");
    return 1;
   }
   VAR_24.port = (unsigned short) VAR_26;
   break;
  case 't':
   if (FUNC_11(VAR_28, 0, VAR_9,
     &VAR_18) != 0) {
    FUNC_4(VAR_21, "Invalid timeout\n");
    return 1;
   }
   break;
  case 'D':
   VAR_24.type = VAR_12;
   break;
  case 'R':
   VAR_24.type = VAR_13;
   VAR_24.port = 0;
   break;
  case 'P':
   VAR_25 = FUNC_7(VAR_28);
   if (VAR_25) {
    VAR_24.protocol = VAR_25->p_proto;
   } else {
    if (FUNC_11(VAR_28, 0, 0xffff, &VAR_26) != 0) {
     FUNC_4(VAR_21, "Invalid protocol\n");
     return 1;
    }
    VAR_24.protocol = VAR_26;
   }
   break;
  case 'n':
   VAR_16 = FUNC_0(VAR_28);
   break;
  case 'L':
   VAR_17 = FUNC_10(FUNC_0(VAR_28));
   break;
  case 'M':
   VAR_24.password = VAR_28;
   break;
  case 'S':
   VAR_24.use_setsockopt = 1;
   break;
  case 'C':
   VAR_24.use_cmsg = 1;
   break;
  case 'd':
   VAR_24.dev = VAR_28;
   VAR_24.ifindex = FUNC_5(VAR_28);
   if (VAR_24.ifindex < 0) {
    FUNC_4(VAR_21, "Invalid device name\n");
    return 1;
   }
   break;
  case 'i':
   VAR_15 = 1;
   break;
  case 'g':
   VAR_24.has_grp = 1;
   if (FUNC_1(&VAR_24, VAR_28, VAR_3) < 0)
    return 1;
   VAR_24.type = VAR_12;
   break;
  case '6':
   VAR_24.version = VAR_6;
   break;
  case 'b':
   VAR_24.bind_test_only = 1;
   break;
  case '0':
   VAR_24.has_expected_laddr = 1;
   if (FUNC_1(&VAR_24, VAR_28,
      VAR_0))
    return 1;
   break;
  case '1':
   VAR_24.has_expected_raddr = 1;
   if (FUNC_1(&VAR_24, VAR_28,
      VAR_1))
    return 1;

   break;
  case '2':
   if (FUNC_11(VAR_28, 0, VAR_9, &VAR_26) == 0) {
    VAR_24.expected_ifindex = (int)VAR_26;
   } else {
    VAR_24.expected_ifindex = FUNC_5(VAR_28);
    if (VAR_24.expected_ifindex < 0) {
     FUNC_4(VAR_21,
      "Invalid expected device\n");
     return 1;
    }
   }
   break;
  case 'q':
   VAR_19 = 1;
   break;
  default:
   FUNC_9(VAR_23[0]);
   return 1;
  }
 }

 if (VAR_24.password &&
     (!VAR_24.has_remote_ip || VAR_24.type != VAR_14)) {
  FUNC_8("MD5 passwords apply to TCP only and require a remote ip for the password\n");
  return 1;
 }

 if ((VAR_24.use_setsockopt || VAR_24.use_cmsg) && !VAR_24.ifindex) {
  FUNC_4(VAR_21, "Device binding not specified\n");
  return 1;
 }
 if (VAR_24.use_setsockopt || VAR_24.use_cmsg)
  VAR_24.dev = ((void*)0);

 if (VAR_16 == 0) {
  FUNC_4(VAR_21, "Invalid number of messages to send\n");
  return 1;
 }

 if (VAR_24.type == VAR_14 && !VAR_24.protocol)
  VAR_24.protocol = VAR_10;
 if (VAR_24.type == VAR_12 && !VAR_24.protocol)
  VAR_24.protocol = VAR_11;

 if ((VAR_24.type == VAR_14 || VAR_24.type == VAR_12) &&
      VAR_24.port == 0) {
  FUNC_4(VAR_21, "Invalid port number\n");
  return 1;
 }

 if (!VAR_20 && !VAR_24.has_grp &&
     !VAR_24.has_remote_ip && !VAR_24.has_local_ip) {
  FUNC_4(VAR_21,
   "Local (server mode) or remote IP (client IP) required\n");
  return 1;
 }

 if (VAR_15) {
  VAR_18 = 0;
  VAR_17 = ((void*)0);
 }

 if (VAR_20) {
  do {
   VAR_29 = FUNC_3(&VAR_24);
  } while (VAR_27);

  return VAR_29;
 }
 return FUNC_2(&VAR_24);
}
