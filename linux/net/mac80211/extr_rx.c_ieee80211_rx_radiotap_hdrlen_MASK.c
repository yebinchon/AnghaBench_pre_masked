
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int * data; } ;
struct ieee80211_vendor_radiotap {int align; scalar_t__ pad; scalar_t__ len; } ;
struct ieee80211_rx_status {int flag; scalar_t__ encoding; scalar_t__ chains; } ;
struct ieee80211_radiotap_lsig {int dummy; } ;
struct ieee80211_radiotap_header {int dummy; } ;
struct ieee80211_radiotap_he_mu {int dummy; } ;
struct ieee80211_radiotap_he {int dummy; } ;
struct TYPE_3__ {scalar_t__ units_pos; } ;
struct TYPE_4__ {TYPE_1__ radiotap_timestamp; } ;
struct ieee80211_local {TYPE_2__ hw; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_local *VAR_10,
        struct ieee80211_rx_status *VAR_11,
        struct sk_buff *VAR_12)
{
 int VAR_13;


 VAR_13 = sizeof(struct ieee80211_radiotap_header) + 8;


 if (VAR_11->chains)
  VAR_13 += 4 * FUNC_3(VAR_11->chains);

 if (VAR_11->flag & VAR_8)
  VAR_13 += 4;

 if (FUNC_4(VAR_11)) {
  VAR_13 = FUNC_0(VAR_13, 8);
  VAR_13 += 8;
 }
 if (FUNC_5(&VAR_10->hw, VAR_9))
  VAR_13 += 1;


 if (!VAR_11->chains)
  VAR_13 += 1;


 VAR_13 = FUNC_0(VAR_13, 2);

 if (VAR_11->encoding == VAR_1)
  VAR_13 += 3;

 if (VAR_11->flag & VAR_3) {
  VAR_13 = FUNC_0(VAR_13, 4);
  VAR_13 += 8;
 }

 if (VAR_11->encoding == VAR_2) {
  VAR_13 = FUNC_0(VAR_13, 2);
  VAR_13 += 12;
 }

 if (VAR_10->hw.radiotap_timestamp.units_pos >= 0) {
  VAR_13 = FUNC_0(VAR_13, 8);
  VAR_13 += 12;
 }

 if (VAR_11->encoding == VAR_0 &&
     VAR_11->flag & VAR_5) {
  VAR_13 = FUNC_0(VAR_13, 2);
  VAR_13 += 12;
  FUNC_1(sizeof(struct ieee80211_radiotap_he) != 12);
 }

 if (VAR_11->encoding == VAR_0 &&
     VAR_11->flag & VAR_6) {
  VAR_13 = FUNC_0(VAR_13, 2);
  VAR_13 += 12;
  FUNC_1(sizeof(struct ieee80211_radiotap_he_mu) != 12);
 }

 if (VAR_11->flag & VAR_4)
  VAR_13 += 1;

 if (VAR_11->flag & VAR_7) {
  VAR_13 = FUNC_0(VAR_13, 2);
  VAR_13 += 4;
  FUNC_1(sizeof(struct ieee80211_radiotap_lsig) != 4);
 }

 if (VAR_11->chains) {

  VAR_13 += 2 * FUNC_3(VAR_11->chains);
 }

 if (VAR_11->flag & VAR_8) {
  struct ieee80211_vendor_radiotap *VAR_14;
  int VAR_15 = 0;





  if (VAR_11->flag & VAR_5)
   VAR_15 +=
    sizeof(struct ieee80211_radiotap_he);
  if (VAR_11->flag & VAR_6)
   VAR_15 +=
    sizeof(struct ieee80211_radiotap_he_mu);
  if (VAR_11->flag & VAR_7)
   VAR_15 +=
    sizeof(struct ieee80211_radiotap_lsig);

  VAR_14 = (void *)&VAR_12->data[VAR_15];


  VAR_13 = FUNC_0(VAR_13, 2);

  VAR_13 += 6;
  if (FUNC_2(VAR_14->align == 0))
   VAR_14->align = 1;
  VAR_13 = FUNC_0(VAR_13, VAR_14->align);
  VAR_13 += VAR_14->len + VAR_14->pad;
 }

 return VAR_13;
}
