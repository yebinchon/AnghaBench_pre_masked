
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_wmm_rule {TYPE_3__* ap; TYPE_1__* client; } ;
struct ieee80211_reg_rule {int has_wmm; struct ieee80211_wmm_rule wmm_rule; } ;
struct fwdb_wmm_rule {TYPE_4__* ap; TYPE_2__* client; } ;
struct fwdb_rule {int end; int start; int wmm_ptr; } ;
struct fwdb_header {int dummy; } ;
struct fwdb_country {int * alpha2; } ;
struct TYPE_8__ {int ecw; int cot; int aifsn; } ;
struct TYPE_7__ {int cot; int aifsn; void* cw_max; void* cw_min; } ;
struct TYPE_6__ {int ecw; int cot; int aifsn; } ;
struct TYPE_5__ {int cot; int aifsn; void* cw_max; void* cw_min; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (struct fwdb_wmm_rule*) ;

__attribute__((used)) static void FUNC_5(const struct fwdb_header *VAR_1,
    const struct fwdb_country *VAR_2,
    const struct fwdb_rule *VAR_3,
    struct ieee80211_reg_rule *VAR_4)
{
 struct ieee80211_wmm_rule *VAR_5 = &VAR_4->wmm_rule;
 struct fwdb_wmm_rule *VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_3->wmm_ptr) << 2;
 VAR_6 = (void *)((u8 *)VAR_1 + VAR_8);

 if (!FUNC_4(VAR_6)) {
  FUNC_3("Invalid regulatory WMM rule %u-%u in domain %c%c\n",
         FUNC_1(VAR_3->start), FUNC_1(VAR_3->end),
         VAR_2->alpha2[0], VAR_2->alpha2[1]);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5->client[VAR_7].cw_min =
   FUNC_2((VAR_6->client[VAR_7].ecw & 0xf0) >> 4);
  VAR_5->client[VAR_7].cw_max = FUNC_2(VAR_6->client[VAR_7].ecw & 0x0f);
  VAR_5->client[VAR_7].aifsn = VAR_6->client[VAR_7].aifsn;
  VAR_5->client[VAR_7].cot =
   1000 * FUNC_0(VAR_6->client[VAR_7].cot);
  VAR_5->ap[VAR_7].cw_min = FUNC_2((VAR_6->ap[VAR_7].ecw & 0xf0) >> 4);
  VAR_5->ap[VAR_7].cw_max = FUNC_2(VAR_6->ap[VAR_7].ecw & 0x0f);
  VAR_5->ap[VAR_7].aifsn = VAR_6->ap[VAR_7].aifsn;
  VAR_5->ap[VAR_7].cot = 1000 * FUNC_0(VAR_6->ap[VAR_7].cot);
 }

 VAR_4->has_wmm = 1;
}
