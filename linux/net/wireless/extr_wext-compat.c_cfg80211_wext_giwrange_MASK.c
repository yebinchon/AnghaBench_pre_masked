
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {TYPE_4__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int level; int qual; int noise; int updated; } ;
struct TYPE_5__ {int qual; int level; int noise; int updated; } ;
struct iw_range {int we_version_source; int max_retry; int max_rts; int min_frag; int max_frag; int max_encoding_tokens; int enc_capa; int num_channels; int num_frequency; int scan_capa; int event_capa; TYPE_3__* freq; int num_encoding_sizes; int * encoding_size; TYPE_2__ max_qual; TYPE_1__ avg_qual; scalar_t__ min_rts; scalar_t__ min_retry; void* retry_flags; void* retry_capa; int we_version_compiled; } ;
struct iw_point {int length; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_8__ {int signal_type; int n_cipher_suites; int* cipher_suites; scalar_t__ max_scan_ssids; struct ieee80211_supported_band** bands; } ;
struct TYPE_7__ {int e; int m; int i; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iw_range*,int ,int) ;

int FUNC_4(struct net_device *VAR_19,
      struct iw_request_info *VAR_20,
      struct iw_point *VAR_21, char *VAR_22)
{
 struct wireless_dev *VAR_23 = VAR_19->ieee80211_ptr;
 struct iw_range *VAR_24 = (struct iw_range *) VAR_22;
 enum nl80211_band VAR_25;
 int VAR_26, VAR_27 = 0;

 if (!VAR_23)
  return -VAR_0;

 VAR_21->length = sizeof(struct iw_range);
 FUNC_3(VAR_24, 0, sizeof(struct iw_range));

 VAR_24->we_version_compiled = VAR_16;
 VAR_24->we_version_source = 21;
 VAR_24->retry_capa = VAR_11;
 VAR_24->retry_flags = VAR_11;
 VAR_24->min_retry = 0;
 VAR_24->max_retry = 255;
 VAR_24->min_rts = 0;
 VAR_24->max_rts = 2347;
 VAR_24->min_frag = 256;
 VAR_24->max_frag = 2346;

 VAR_24->max_encoding_tokens = 4;

 VAR_24->max_qual.updated = VAR_9;

 switch (VAR_23->wiphy->signal_type) {
 case 133:
  break;
 case 134:
  VAR_24->max_qual.level = (u8)-110;
  VAR_24->max_qual.qual = 70;
  VAR_24->avg_qual.qual = 35;
  VAR_24->max_qual.updated |= VAR_7;
  VAR_24->max_qual.updated |= VAR_10;
  VAR_24->max_qual.updated |= VAR_8;
  break;
 case 132:
  VAR_24->max_qual.level = 100;
  VAR_24->max_qual.qual = 100;
  VAR_24->avg_qual.qual = 50;
  VAR_24->max_qual.updated |= VAR_10;
  VAR_24->max_qual.updated |= VAR_8;
  break;
 }

 VAR_24->avg_qual.level = VAR_24->max_qual.level / 2;
 VAR_24->avg_qual.noise = VAR_24->max_qual.noise / 2;
 VAR_24->avg_qual.updated = VAR_24->max_qual.updated;

 for (VAR_26 = 0; VAR_26 < VAR_23->wiphy->n_cipher_suites; VAR_26++) {
  switch (VAR_23->wiphy->cipher_suites[VAR_26]) {
  case 130:
   VAR_24->enc_capa |= (VAR_3 |
         VAR_4);
   break;

  case 131:
   VAR_24->enc_capa |= (VAR_2 |
         VAR_5);
   break;

  case 128:
   VAR_24->encoding_size[VAR_24->num_encoding_sizes++] =
    VAR_18;
   break;

  case 129:
   VAR_24->encoding_size[VAR_24->num_encoding_sizes++] =
    VAR_17;
   break;
  }
 }

 for (VAR_25 = 0; VAR_25 < VAR_13; VAR_25 ++) {
  struct ieee80211_supported_band *VAR_28;

  VAR_28 = VAR_23->wiphy->bands[VAR_25];

  if (!VAR_28)
   continue;

  for (VAR_26 = 0; VAR_26 < VAR_28->n_channels && VAR_27 < VAR_6; VAR_26++) {
   struct ieee80211_channel *VAR_29 = &VAR_28->channels[VAR_26];

   if (!(VAR_29->flags & VAR_1)) {
    VAR_24->freq[VAR_27].i =
     FUNC_2(
      VAR_29->center_freq);
    VAR_24->freq[VAR_27].m = VAR_29->center_freq;
    VAR_24->freq[VAR_27].e = 6;
    VAR_27++;
   }
  }
 }
 VAR_24->num_channels = VAR_27;
 VAR_24->num_frequency = VAR_27;

 FUNC_1(VAR_24->event_capa);
 FUNC_0(VAR_24->event_capa, VAR_14);
 FUNC_0(VAR_24->event_capa, VAR_15);

 if (VAR_23->wiphy->max_scan_ssids > 0)
  VAR_24->scan_capa |= VAR_12;

 return 0;
}
