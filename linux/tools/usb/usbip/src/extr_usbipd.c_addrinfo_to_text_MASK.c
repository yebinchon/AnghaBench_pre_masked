
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int sbuf ;
typedef int hbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int) ;
 int FUNC_3 (char*,size_t const,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct addrinfo *VAR_4, char VAR_5[],
        const size_t VAR_6)
{
 char VAR_7[VAR_0];
 char VAR_8[VAR_1];
 int VAR_9;

 VAR_5[0] = '\0';

 VAR_9 = FUNC_2(VAR_4->ai_addr, VAR_4->ai_addrlen, VAR_7, sizeof(VAR_7),
    VAR_8, sizeof(VAR_8), VAR_2 | VAR_3);
 if (VAR_9)
  FUNC_0("getnameinfo: %s", FUNC_1(VAR_9));

 FUNC_3(VAR_5, VAR_6, "%s:%s", VAR_7, VAR_8);
}
