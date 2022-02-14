
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int *,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char const*,...) ;
 int FUNC_7 (struct addrinfo*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_15(const char *VAR_7,
    const char *VAR_8,
    bool VAR_9)
{
 struct addrinfo VAR_10 = {
  .ai_socktype = VAR_1,
 };
 struct addrinfo *VAR_11 = ((void*)0);
 struct addrinfo *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_9(VAR_7, VAR_8, &VAR_10, &VAR_11);
 if (VAR_13 != 0) {
  FUNC_6(VAR_5, "%s\n", FUNC_8(VAR_13));
  FUNC_4(VAR_0);
 }

 for (VAR_12 = VAR_11; VAR_12; VAR_12 = VAR_12->ai_next) {
  int VAR_14;
  int VAR_15 = 1;

  VAR_14 = FUNC_14(VAR_12->ai_family, VAR_12->ai_socktype, VAR_12->ai_protocol);
  if (VAR_14 < 0)
   continue;

  if (!VAR_9) {
   if (FUNC_3(VAR_14, VAR_12->ai_addr, VAR_12->ai_addrlen) < 0)
    goto next;
   VAR_4 = VAR_14;
   FUNC_12("Control socket connected to %s:%s.\n",
          VAR_7, VAR_8);
   break;
  }

  if (FUNC_13(VAR_14, VAR_2, VAR_3,
          &VAR_15, sizeof(VAR_15)) < 0) {
   FUNC_11("setsockopt");
   FUNC_4(VAR_0);
  }

  if (FUNC_1(VAR_14, VAR_12->ai_addr, VAR_12->ai_addrlen) < 0)
   goto next;
  if (FUNC_10(VAR_14, 1) < 0)
   goto next;

  FUNC_12("Control socket listening on %s:%s\n",
         VAR_7, VAR_8);
  FUNC_5(VAR_6);

  VAR_4 = FUNC_0(VAR_14, ((void*)0), 0);
  FUNC_2(VAR_14);

  if (VAR_4 < 0) {
   FUNC_11("accept");
   FUNC_4(VAR_0);
  }
  FUNC_12("Control socket connection accepted...\n");
  break;

next:
  FUNC_2(VAR_14);
 }

 if (VAR_4 < 0) {
  FUNC_6(VAR_5, "Control socket initialization failed.  Invalid address %s:%s?\n",
   VAR_7, VAR_8);
  FUNC_4(VAR_0);
 }

 FUNC_7(VAR_11);
}
