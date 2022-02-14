
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_local {scalar_t__ hw_scan_band; TYPE_3__* hw_scan_req; int hw_scan_ies_bufsize; int hw; int scanning; int mtx; int scan_req; } ;
struct cfg80211_scan_request {int n_channels; int flags; int bssid; int mac_addr_mask; int mac_addr; int no_cck; int rates; int ie_len; int ie; int scan_width; TYPE_1__** channels; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_5__ {int n_channels; int ie_len; int bssid; int mac_addr_mask; int mac_addr; int no_cck; scalar_t__ ie; TYPE_1__** channels; } ;
struct TYPE_6__ {TYPE_2__ req; int ies; } ;
struct TYPE_4__ {scalar_t__ band; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_local*,int *,int ,int *,int ,int ,int ,int ,struct cfg80211_chan_def*,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cfg80211_chan_def*,int ) ;
 int FUNC_5 (int *) ;
 struct cfg80211_scan_request* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_local *VAR_5)
{
 struct cfg80211_scan_request *VAR_6;
 struct cfg80211_chan_def VAR_7;
 u8 VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = 0;

 VAR_6 = FUNC_6(VAR_5->scan_req,
     FUNC_5(&VAR_5->mtx));

 if (FUNC_7(VAR_3, &VAR_5->scanning))
  return 0;

 if (FUNC_3(&VAR_5->hw, VAR_4)) {
  for (VAR_9 = 0; VAR_9 < VAR_6->n_channels; VAR_9++) {
   VAR_5->hw_scan_req->req.channels[VAR_9] = VAR_6->channels[VAR_9];
   VAR_8 |= FUNC_0(VAR_6->channels[VAR_9]->band);
  }

  VAR_11 = VAR_6->n_channels;
 } else {
  do {
   if (VAR_5->hw_scan_band == VAR_2)
    return 0;

   VAR_11 = 0;

   for (VAR_9 = 0; VAR_9 < VAR_6->n_channels; VAR_9++) {
    if (VAR_6->channels[VAR_9]->band !=
        VAR_5->hw_scan_band)
     continue;
    VAR_5->hw_scan_req->req.channels[VAR_11] =
       VAR_6->channels[VAR_9];
    VAR_11++;
    VAR_8 |= FUNC_0(VAR_6->channels[VAR_9]->band);
   }

   VAR_5->hw_scan_band++;
  } while (!VAR_11);
 }

 VAR_5->hw_scan_req->req.n_channels = VAR_11;
 FUNC_4(&VAR_7, VAR_6->scan_width);

 if (VAR_6->flags & VAR_1)
  VAR_12 |= VAR_0;

 VAR_10 = FUNC_2(VAR_5,
      (u8 *)VAR_5->hw_scan_req->req.ie,
      VAR_5->hw_scan_ies_bufsize,
      &VAR_5->hw_scan_req->ies,
      VAR_6->ie, VAR_6->ie_len,
      VAR_8, VAR_6->rates, &VAR_7,
      VAR_12);
 VAR_5->hw_scan_req->req.ie_len = VAR_10;
 VAR_5->hw_scan_req->req.no_cck = VAR_6->no_cck;
 FUNC_1(VAR_5->hw_scan_req->req.mac_addr, VAR_6->mac_addr);
 FUNC_1(VAR_5->hw_scan_req->req.mac_addr_mask,
   VAR_6->mac_addr_mask);
 FUNC_1(VAR_5->hw_scan_req->req.bssid, VAR_6->bssid);

 return 1;
}
