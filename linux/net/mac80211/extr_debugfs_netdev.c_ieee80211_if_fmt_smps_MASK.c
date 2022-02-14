
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t req_smps; } ;
struct TYPE_5__ {size_t req_smps; } ;
struct TYPE_8__ {TYPE_3__ ap; TYPE_1__ mgd; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {size_t smps_mode; TYPE_4__ u; TYPE_2__ vif; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(const struct ieee80211_sub_if_data *VAR_4,
         char *VAR_5, int VAR_6)
{
 if (VAR_4->vif.type == VAR_2)
  return FUNC_0(VAR_5, VAR_6, "request: %s\nused: %s\n",
    VAR_3[VAR_4->u.mgd.req_smps],
    VAR_3[VAR_4->smps_mode]);
 if (VAR_4->vif.type == VAR_1)
  return FUNC_0(VAR_5, VAR_6, "request: %s\nused: %s\n",
    VAR_3[VAR_4->u.ap.req_smps],
    VAR_3[VAR_4->smps_mode]);
 return -VAR_0;
}
