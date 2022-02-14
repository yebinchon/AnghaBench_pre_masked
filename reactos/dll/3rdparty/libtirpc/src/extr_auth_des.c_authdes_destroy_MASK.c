
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_private {int ad_fullnamelen; int ad_servernamelen; struct ad_private* ad_uaddr; struct ad_private* ad_netid; struct ad_private* ad_timehost; struct ad_private* ad_servername; struct ad_private* ad_fullname; } ;
typedef struct ad_private AUTH ;


 struct ad_private* FUNC_0 (struct ad_private*) ;
 int FUNC_1 (struct ad_private*,int) ;
 int FUNC_2 (struct ad_private*) ;

__attribute__((used)) static void
FUNC_3(AUTH *VAR_0)
{

 struct ad_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->ad_fullname, VAR_1->ad_fullnamelen + 1);
 FUNC_1(VAR_1->ad_servername, VAR_1->ad_servernamelen + 1);
 if (VAR_1->ad_timehost)
  FUNC_1(VAR_1->ad_timehost, FUNC_2(VAR_1->ad_timehost) + 1);
 if (VAR_1->ad_netid)
  FUNC_1(VAR_1->ad_netid, FUNC_2(VAR_1->ad_netid) + 1);
 if (VAR_1->ad_uaddr)
  FUNC_1(VAR_1->ad_uaddr, FUNC_2(VAR_1->ad_uaddr) + 1);
 FUNC_1(VAR_1, sizeof (struct ad_private));
 FUNC_1(VAR_0, sizeof(AUTH));
}
