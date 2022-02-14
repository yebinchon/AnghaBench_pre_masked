
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* mac_cap_info; } ;
struct TYPE_5__ {TYPE_1__ he_cap_elem; } ;
struct TYPE_6__ {TYPE_2__ he_cap; } ;
struct sta_info {TYPE_3__ sta; } ;
struct ieee802_11_elems {int ext_capab_len; int* ext_capab; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct sta_info *VAR_2,
     const struct ieee802_11_elems *VAR_3)
{
 if (VAR_3->ext_capab_len < 10)
  return 0;

 if (!(VAR_3->ext_capab[9] & VAR_1))
  return 0;

 return VAR_2->sta.he_cap.he_cap_elem.mac_cap_info[0] &
  VAR_0;
}
