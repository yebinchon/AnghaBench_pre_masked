
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*,char*,size_t const) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct addrinfo *VAR_4, int VAR_5[],
        int VAR_6)
{
 struct addrinfo *VAR_7;
 int VAR_8, VAR_9 = 0;
 const size_t VAR_10 = VAR_0 + VAR_1 + 2;
 char VAR_11[VAR_10];

 for (VAR_7 = VAR_4; VAR_7 && VAR_9 < VAR_6; VAR_7 = VAR_7->ai_next) {
  int VAR_12;

  FUNC_0(VAR_7, VAR_11, VAR_10);
  FUNC_3("opening %s", VAR_11);
  VAR_12 = FUNC_7(VAR_7->ai_family, VAR_7->ai_socktype, VAR_7->ai_protocol);
  if (VAR_12 < 0) {
   FUNC_4("socket: %s: %d (%s)",
       VAR_11, VAR_3, FUNC_8(VAR_3));
   continue;
  }

  FUNC_10(VAR_12);
  FUNC_9(VAR_12);


  FUNC_11(VAR_12);

  VAR_8 = FUNC_1(VAR_12, VAR_7->ai_addr, VAR_7->ai_addrlen);
  if (VAR_8 < 0) {
   FUNC_4("bind: %s: %d (%s)",
       VAR_11, VAR_3, FUNC_8(VAR_3));
   FUNC_2(VAR_12);
   continue;
  }

  VAR_8 = FUNC_6(VAR_12, VAR_2);
  if (VAR_8 < 0) {
   FUNC_4("listen: %s: %d (%s)",
       VAR_11, VAR_3, FUNC_8(VAR_3));
   FUNC_2(VAR_12);
   continue;
  }

  FUNC_5("listening on %s", VAR_11);
  VAR_5[VAR_9++] = VAR_12;
 }

 return VAR_9;
}
