
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 void* FUNC_0 (unsigned short) ;
 scalar_t__ FUNC_1 (char*,int,int*) ;
 int FUNC_2 (char*,char const*,size_t const) ;
 scalar_t__ FUNC_3 (struct net*,char*,int ,struct sockaddr*,size_t const) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (int) ;

size_t FUNC_7(struct net *VAR_1, const char *VAR_2,
     const size_t VAR_3, struct sockaddr *VAR_4,
     const size_t VAR_5)
{
 char *VAR_6, VAR_7[VAR_0 + sizeof('\0')];
 u8 VAR_8, VAR_9;
 unsigned short VAR_10;

 if (VAR_3 > VAR_0)
  return 0;

 FUNC_2(VAR_7, VAR_2, VAR_3);

 VAR_7[VAR_3] = '\0';
 VAR_6 = FUNC_5(VAR_7, '.');
 if (FUNC_6(VAR_6 == ((void*)0)))
  return 0;
 if (FUNC_6(FUNC_1(VAR_6 + 1, 10, &VAR_8) != 0))
  return 0;

 *VAR_6 = '\0';
 VAR_6 = FUNC_5(VAR_7, '.');
 if (FUNC_6(VAR_6 == ((void*)0)))
  return 0;
 if (FUNC_6(FUNC_1(VAR_6 + 1, 10, &VAR_9) != 0))
  return 0;

 VAR_10 = (unsigned short)((VAR_9 << 8) | VAR_8);

 *VAR_6 = '\0';
 if (FUNC_3(VAR_1, VAR_7, FUNC_4(VAR_7), VAR_4, VAR_5) == 0)
  return 0;

 switch (VAR_4->sa_family) {
 case 129:
  ((struct sockaddr_in *)VAR_4)->sin_port = FUNC_0(VAR_10);
  return sizeof(struct sockaddr_in);
 case 128:
  ((struct sockaddr_in6 *)VAR_4)->sin6_port = FUNC_0(VAR_10);
  return sizeof(struct sockaddr_in6);
 }

 return 0;
}
