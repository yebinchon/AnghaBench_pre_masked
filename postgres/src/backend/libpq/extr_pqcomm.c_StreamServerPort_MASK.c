
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {int ai_family; int ai_addrlen; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; int ai_flags; } ;
typedef int portNumberStr ;
typedef scalar_t__ pgsocket ;
typedef int one ;
typedef int hint ;
typedef int familyDescBuf ;
typedef int addrBuf ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned short,char*) ;
 int VAR_15 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int,struct addrinfo*) ;
 int FUNC_15 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_16 (struct sockaddr_storage const*,int ,char*,int,int *,int ,int ) ;
 int FUNC_17 (scalar_t__,int ,int ,char*,int) ;
 int FUNC_18 (char*,int,char*,unsigned short) ;
 scalar_t__ FUNC_19 (int,int ,int ) ;
 int FUNC_20 (char*) ;

int
FUNC_21(int VAR_16, char *VAR_17, unsigned short VAR_18,
     char *VAR_19,
     pgsocket VAR_20[], int VAR_21)
{
 pgsocket VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 char VAR_26[32];
 const char *VAR_27;
 char VAR_28[64];
 const char *VAR_29;
 char VAR_30[VAR_6];
 char *VAR_31;
 struct addrinfo *VAR_32 = ((void*)0),
      *VAR_33;
 struct addrinfo VAR_34;
 int VAR_35 = 0;
 int VAR_36 = 0;





 int VAR_37 = 1;



 FUNC_2(&VAR_34, 0, sizeof(VAR_34));
 VAR_34.ai_family = VAR_16;
 VAR_34.ai_flags = VAR_0;
 VAR_34.ai_socktype = VAR_10;
 {
  FUNC_18(VAR_26, sizeof(VAR_26), "%d", VAR_18);
  VAR_31 = VAR_26;
 }

 VAR_25 = FUNC_15(VAR_17, VAR_31, &VAR_34, &VAR_32);
 if (VAR_25 || !VAR_32)
 {
  if (VAR_17)
   FUNC_8(VAR_3,
     (FUNC_11("could not translate host name \"%s\", service \"%s\" to address: %s",
       VAR_17, VAR_31, FUNC_12(VAR_25))));
  else
   FUNC_8(VAR_3,
     (FUNC_11("could not translate service \"%s\" to address: %s",
       VAR_31, FUNC_12(VAR_25))));
  if (VAR_32)
   FUNC_14(VAR_34.ai_family, VAR_32);
  return VAR_13;
 }

 for (VAR_33 = VAR_32; VAR_33; VAR_33 = VAR_33->ai_next)
 {
  if (!FUNC_0(VAR_16) && FUNC_0(VAR_33->ai_family))
  {




   continue;
  }


  for (; VAR_35 < VAR_21; VAR_35++)
  {
   if (VAR_20[VAR_35] == VAR_8)
    break;
  }
  if (VAR_35 >= VAR_21)
  {
   FUNC_8(VAR_3,
     (FUNC_11("could not bind to all requested addresses: MAXLISTEN (%d) exceeded",
       VAR_21)));
   break;
  }


  switch (VAR_33->ai_family)
  {
   case 130:
    VAR_27 = FUNC_5("IPv4");
    break;
   default:
    FUNC_18(VAR_28, sizeof(VAR_28),
       FUNC_5("unrecognized address family %d"),
       VAR_33->ai_family);
    VAR_27 = VAR_28;
    break;
  }







  {
   FUNC_16((const struct sockaddr_storage *) VAR_33->ai_addr,
          VAR_33->ai_addrlen,
          VAR_30, sizeof(VAR_30),
          ((void*)0), 0,
          VAR_7);
   VAR_29 = VAR_30;
  }

  if ((VAR_22 = FUNC_19(VAR_33->ai_family, VAR_10, 0)) == VAR_8)
  {
   FUNC_8(VAR_3,
     (FUNC_9(),

      FUNC_11("could not create %s socket for address \"%s\": %m",
       VAR_27, VAR_29)));
   continue;
  }
  if (!FUNC_0(VAR_33->ai_family))
  {
   if ((FUNC_17(VAR_22, VAR_11, VAR_12,
       (char *) &VAR_37, sizeof(VAR_37))) == -1)
   {
    FUNC_8(VAR_3,
      (FUNC_9(),

       FUNC_11("setsockopt(SO_REUSEADDR) failed for %s address \"%s\": %m",
        VAR_27, VAR_29)));
    FUNC_7(VAR_22);
    continue;
   }
  }
  VAR_23 = FUNC_6(VAR_22, VAR_33->ai_addr, VAR_33->ai_addrlen);
  if (VAR_23 < 0)
  {
   FUNC_8(VAR_3,
     (FUNC_9(),

      FUNC_11("could not bind %s address \"%s\": %m",
       VAR_27, VAR_29),
      (FUNC_0(VAR_33->ai_family)) ?
      FUNC_10("Is another postmaster already running on port %d?"
        " If not, remove socket file \"%s\" and retry.",
        (int) VAR_18, VAR_31) :
      FUNC_10("Is another postmaster already running on port %d?"
        " If not, wait a few seconds and retry.",
        (int) VAR_18)));
   FUNC_7(VAR_22);
   continue;
  }
  VAR_24 = VAR_5 * 2;
  if (VAR_24 > VAR_9)
   VAR_24 = VAR_9;

  VAR_23 = FUNC_13(VAR_22, VAR_24);
  if (VAR_23 < 0)
  {
   FUNC_8(VAR_3,
     (FUNC_9(),

      FUNC_11("could not listen on %s address \"%s\": %m",
       VAR_27, VAR_29)));
   FUNC_7(VAR_22);
   continue;
  }
   FUNC_8(VAR_3,

     (FUNC_11("listening on %s address \"%s\", port %d",
       VAR_27, VAR_29, (int) VAR_18)));

  VAR_20[VAR_35] = VAR_22;
  VAR_36++;
 }

 FUNC_14(VAR_34.ai_family, VAR_32);

 if (!VAR_36)
  return VAR_13;

 return VAR_14;
}
