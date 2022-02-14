
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {int name; } ;
struct ndmsg {int ndm_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,unsigned char const*) ;
 int FUNC_1 (struct net_device*,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 scalar_t__ FUNC_4 (unsigned char const*) ;
 int FUNC_5 (char*,int ) ;

int FUNC_6(struct ndmsg *VAR_4,
       struct nlattr *VAR_5[],
       struct net_device *VAR_6,
       const unsigned char *VAR_7, u16 VAR_8,
       u16 VAR_9)
{
 int VAR_10 = -VAR_1;




 if (VAR_4->ndm_state && !(VAR_4->ndm_state & VAR_3)) {
  FUNC_5("%s: FDB only supports static addresses\n", VAR_6->name);
  return VAR_10;
 }

 if (VAR_8) {
  FUNC_5("%s: vlans aren't supported yet for dev_uc|mc_add()\n", VAR_6->name);
  return VAR_10;
 }

 if (FUNC_4(VAR_7) || FUNC_2(VAR_7))
  VAR_10 = FUNC_1(VAR_6, VAR_7);
 else if (FUNC_3(VAR_7))
  VAR_10 = FUNC_0(VAR_6, VAR_7);


 if (VAR_10 == -VAR_0 && !(VAR_9 & VAR_2))
  VAR_10 = 0;

 return VAR_10;
}
