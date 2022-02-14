
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
 int FUNC_0 (struct net_device*,unsigned char const*) ;
 int FUNC_1 (struct net_device*,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 scalar_t__ FUNC_4 (unsigned char const*) ;
 int FUNC_5 (char*,int ) ;

int FUNC_6(struct ndmsg *VAR_2,
       struct nlattr *VAR_3[],
       struct net_device *VAR_4,
       const unsigned char *VAR_5, u16 VAR_6)
{
 int VAR_7 = -VAR_0;




 if (!(VAR_2->ndm_state & VAR_1)) {
  FUNC_5("%s: FDB only supports static addresses\n", VAR_4->name);
  return VAR_7;
 }

 if (FUNC_4(VAR_5) || FUNC_2(VAR_5))
  VAR_7 = FUNC_1(VAR_4, VAR_5);
 else if (FUNC_3(VAR_5))
  VAR_7 = FUNC_0(VAR_4, VAR_5);

 return VAR_7;
}
