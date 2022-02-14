
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int flags; int name; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int) ;

__attribute__((used)) static inline bool FUNC_1(struct ieee80211_sub_if_data *VAR_1)
{
 return !FUNC_0(!(VAR_1->flags & VAR_0),
       "%s:  Failed check-sdata-in-driver check, flags: 0x%x\n",
       VAR_1->dev ? VAR_1->dev->name : VAR_1->name, VAR_1->flags);
}
