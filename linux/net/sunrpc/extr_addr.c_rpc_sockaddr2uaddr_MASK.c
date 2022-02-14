
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int portbuf ;
typedef int gfp_t ;
typedef int addrbuf ;




 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr const*,char*,int) ;
 int FUNC_3 (struct sockaddr const*,char*,int) ;
 int FUNC_4 (char*,int,char*,unsigned short,unsigned short) ;
 int FUNC_5 (char*,char*,int) ;

char *FUNC_6(const struct sockaddr *VAR_2, gfp_t VAR_3)
{
 char VAR_4[VAR_1];
 char VAR_5[VAR_0];
 unsigned short VAR_6;

 switch (VAR_2->sa_family) {
 case 129:
  if (FUNC_2(VAR_2, VAR_5, sizeof(VAR_5)) == 0)
   return ((void*)0);
  VAR_6 = FUNC_1(((struct sockaddr_in *)VAR_2)->sin_port);
  break;
 case 128:
  if (FUNC_3(VAR_2, VAR_5, sizeof(VAR_5)) == 0)
   return ((void*)0);
  VAR_6 = FUNC_1(((struct sockaddr_in6 *)VAR_2)->sin6_port);
  break;
 default:
  return ((void*)0);
 }

 if (FUNC_4(VAR_4, sizeof(VAR_4),
       ".%u.%u", VAR_6 >> 8, VAR_6 & 0xff) > (int)sizeof(VAR_4))
  return ((void*)0);

 if (FUNC_5(VAR_5, VAR_4, sizeof(VAR_5)) > sizeof(VAR_5))
  return ((void*)0);

 return FUNC_0(VAR_5, VAR_3);
}
