
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int tfm; } ;
struct TYPE_10__ {int tfm; } ;
struct TYPE_9__ {int tfm; } ;
struct TYPE_8__ {int tfm; } ;
struct TYPE_12__ {TYPE_5__ gcmp; TYPE_4__ aes_gmac; TYPE_3__ aes_cmac; TYPE_2__ ccmp; } ;
struct TYPE_7__ {int cipher; } ;
struct ieee80211_key {TYPE_6__ u; TYPE_1__ conf; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_key*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_key *VAR_0)
{
 switch (VAR_0->conf.cipher) {
 case 131:
 case 130:
  FUNC_3(VAR_0->u.ccmp.tfm);
  break;
 case 135:
 case 134:
  FUNC_0(VAR_0->u.aes_cmac.tfm);
  break;
 case 133:
 case 132:
  FUNC_2(VAR_0->u.aes_gmac.tfm);
  break;
 case 129:
 case 128:
  FUNC_1(VAR_0->u.gcmp.tfm);
  break;
 }
 FUNC_4(VAR_0);
}
