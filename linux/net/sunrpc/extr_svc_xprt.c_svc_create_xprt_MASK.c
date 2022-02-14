
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct svc_serv*,char const*,struct net*,int const,unsigned short const,int,struct cred const*) ;
 int FUNC_1 (char*,char const*,unsigned short const) ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(struct svc_serv *VAR_1, const char *VAR_2,
      struct net *VAR_3, const int VAR_4,
      const unsigned short VAR_5, int VAR_6,
      const struct cred *VAR_7)
{
 int VAR_8;

 FUNC_1("svc: creating transport %s[%d]\n", VAR_2, VAR_5);
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == -VAR_0) {
  FUNC_2("svc%s", VAR_2);
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }
 if (VAR_8 < 0)
  FUNC_1("svc: transport %s not found, err %d\n",
   VAR_2, -VAR_8);
 return VAR_8;
}
