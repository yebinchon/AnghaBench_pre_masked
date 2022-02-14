
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bc_buf; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2(
 const struct ieee80211_sub_if_data *VAR_0, char *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, "%u\n",
    FUNC_1(&VAR_0->u.ap.ps.bc_buf));
}
