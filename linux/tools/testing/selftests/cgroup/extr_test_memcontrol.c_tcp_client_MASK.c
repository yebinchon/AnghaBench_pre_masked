
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int servport ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char const*,char*,char*) ;
 long FUNC_1 (char const*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (char const*,char*,int *,struct addrinfo**) ;
 scalar_t__ FUNC_6 (int,int *,int) ;
 int FUNC_7 (char*,int,char*,unsigned short) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (long,long,int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2, unsigned short VAR_3)
{
 const char VAR_4[] = "localhost";
 struct addrinfo *VAR_5;
 char VAR_6[6];
 int VAR_7 = 0x10;
 int VAR_8, VAR_9;

 FUNC_7(VAR_6, sizeof(VAR_6), "%hd", VAR_3);
 VAR_9 = FUNC_5(VAR_4, VAR_6, ((void*)0), &VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_8(VAR_5->ai_family, VAR_5->ai_socktype, VAR_5->ai_protocol);
 if (VAR_8 < 0)
  goto free_ainfo;

 VAR_9 = FUNC_3(VAR_8, VAR_5->ai_addr, VAR_5->ai_addrlen);
 if (VAR_9 < 0)
  goto close_sk;

 VAR_9 = VAR_0;
 while (VAR_7--) {
  uint8_t VAR_10[0x100000];
  long VAR_11, VAR_12;

  if (FUNC_6(VAR_8, VAR_10, sizeof(VAR_10)) <= 0)
   goto close_sk;

  VAR_11 = FUNC_1(VAR_2, "memory.current");
  VAR_12 = FUNC_0(VAR_2, "memory.stat", "sock ");

  if (VAR_11 < 0 || VAR_12 < 0)
   goto close_sk;

  if (VAR_11 < VAR_12)
   goto close_sk;

  if (FUNC_9(VAR_11, VAR_12, 10)) {
   VAR_9 = VAR_1;
   break;
  }
 }

close_sk:
 FUNC_2(VAR_8);
free_ainfo:
 FUNC_4(VAR_5);
 return VAR_9;
}
