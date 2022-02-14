
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip6_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(int VAR_29, char **VAR_30)
{
 int VAR_31, VAR_32;
 int VAR_33;

 while ((VAR_33 = FUNC_1(VAR_29, VAR_30, "46acC:D:Hl:mM:p:s:PS:tTuvz")) != -1) {
  switch (VAR_33) {
  case '4':
   if (VAR_12 != VAR_4)
    FUNC_0(1, 0, "Pass one of -4 or -6");
   VAR_12 = VAR_2;
   VAR_6 = sizeof(struct sockaddr_in);
   break;
  case '6':
   if (VAR_12 != VAR_4)
    FUNC_0(1, 0, "Pass one of -4 or -6");
   VAR_12 = VAR_3;
   VAR_6 = sizeof(struct sockaddr_in6);
   break;
  case 'a':
   VAR_7 = 1;
   break;
  case 'c':
   VAR_8 = 1;
   break;
  case 'C':
   VAR_10 = FUNC_3(VAR_27, ((void*)0), 0);
   break;
  case 'D':
   FUNC_2(VAR_12, VAR_27, &VAR_11);
   break;
  case 'l':
   VAR_19 = FUNC_4(VAR_27, ((void*)0), 10) * 1000;
   break;
  case 'm':
   VAR_21 = 1;
   break;
  case 'M':
   VAR_14 = FUNC_4(VAR_27, ((void*)0), 10);
   break;
  case 'p':
   VAR_18 = FUNC_4(VAR_27, ((void*)0), 0);
   break;
  case 'P':
   VAR_17 = 1;
   break;
  case 's':
   VAR_16 = FUNC_4(VAR_27, ((void*)0), 0);
   break;
  case 'S':
   VAR_13 = FUNC_4(VAR_27, ((void*)0), 0);
   VAR_20 = 1;
   break;
  case 'H':
   VAR_23 = VAR_5;
   VAR_24 = 1;
   break;
  case 't':
   VAR_22 = 1;
   break;
  case 'T':
   VAR_24 = 1;
   break;
  case 'u':
   VAR_9 = 0;
   break;
  case 'v':
   VAR_25 = 1;
   break;
  case 'z':
   VAR_26 = 1;
   break;
  }
 }

 if (VAR_28 != VAR_29)
  FUNC_5(VAR_30[0]);

 if (VAR_12 == VAR_4)
  FUNC_0(1, 0, "must pass one of -4 or -6");
 if (VAR_22 && !VAR_9)
  FUNC_0(1, 0, "connectionless tcp makes no sense");
 if (VAR_20 && VAR_21)
  FUNC_0(1, 0, "cannot combine segment offload and sendmmsg");
 if (VAR_24 && !(VAR_20 || VAR_21))
  FUNC_0(1, 0, "Options -T and -H require either -S or -m option");

 if (VAR_12 == VAR_2)
  VAR_32 = sizeof(struct iphdr) + sizeof(struct udphdr);
 else
  VAR_32 = sizeof(struct ip6_hdr) + sizeof(struct udphdr);

 VAR_15 = VAR_0 - VAR_32;
 VAR_31 = VAR_1 - VAR_32;
 if (!VAR_13)
  VAR_13 = VAR_15;

 if (VAR_16 > VAR_31)
  FUNC_0(1, 0, "payload length %u exceeds max %u",
        VAR_16, VAR_31);
}
