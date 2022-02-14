
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_reg_rule {int dummy; } ;
struct fwdb_header {struct fwdb_country* country; } ;
struct fwdb_country {int alpha2; scalar_t__ coll_ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fwdb_header*) ;
 int FUNC_1 (struct fwdb_header*) ;
 int FUNC_2 (struct fwdb_header*,struct fwdb_country const*,int,struct ieee80211_reg_rule*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 struct fwdb_header* VAR_1 ;

int FUNC_4(char *VAR_2, int VAR_3, struct ieee80211_reg_rule *VAR_4)
{
 const struct fwdb_header *VAR_5 = VAR_1;
 const struct fwdb_country *VAR_6;

 if (!VAR_1)
  return -VAR_0;

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_6 = &VAR_5->country[0];
 while (VAR_6->coll_ptr) {
  if (FUNC_3(VAR_2, VAR_6->alpha2))
   return FUNC_2(VAR_1, VAR_6, VAR_3, VAR_4);

  VAR_6++;
 }

 return -VAR_0;
}
