
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_3__ {int flags; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
struct cfg80211_crypto_settings {int control_port_no_encrypt; int control_port_over_nl80211; int n_ciphers_pairwise; int n_akm_suites; void* sae_pwd_len; void* sae_pwd; void* psk; void** akm_suites; void* wpa_versions; void* cipher_group; void** ciphers_pairwise; void* control_port_ethertype; scalar_t__ control_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (void**,void*,int) ;
 int FUNC_3 (struct cfg80211_crypto_settings*,int ,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 void* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct genl_info*) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(struct cfg80211_registered_device *VAR_17,
       struct genl_info *VAR_18,
       struct cfg80211_crypto_settings *VAR_19,
       int VAR_20)
{
 FUNC_3(VAR_19, 0, sizeof(*VAR_19));

 VAR_19->control_port = VAR_18->attrs[VAR_5];

 if (VAR_18->attrs[VAR_6]) {
  u16 VAR_21;

  VAR_21 = FUNC_6(
   VAR_18->attrs[VAR_6]);
  VAR_19->control_port_ethertype = FUNC_1(VAR_21);
  if (!(VAR_17->wiphy.flags & VAR_15) &&
      VAR_21 != VAR_1)
   return -VAR_0;
  if (VAR_18->attrs[VAR_7])
   VAR_19->control_port_no_encrypt = 1;
 } else
  VAR_19->control_port_ethertype = FUNC_1(VAR_1);

 if (VAR_18->attrs[VAR_8]) {
  int VAR_22 = FUNC_9(VAR_17, VAR_18);

  if (VAR_22 < 0)
   return VAR_22;

  VAR_19->control_port_over_nl80211 = 1;
 }

 if (VAR_18->attrs[VAR_3]) {
  void *VAR_23;
  int VAR_24, VAR_25;

  VAR_23 = FUNC_5(VAR_18->attrs[VAR_3]);
  VAR_24 = FUNC_8(VAR_18->attrs[VAR_3]);
  VAR_19->n_ciphers_pairwise = VAR_24 / sizeof(u32);

  if (VAR_24 % sizeof(u32))
   return -VAR_0;

  if (VAR_19->n_ciphers_pairwise > VAR_20)
   return -VAR_0;

  FUNC_2(VAR_19->ciphers_pairwise, VAR_23, VAR_24);

  for (VAR_25 = 0; VAR_25 < VAR_19->n_ciphers_pairwise; VAR_25++)
   if (!FUNC_0(
     &VAR_17->wiphy,
     VAR_19->ciphers_pairwise[VAR_25]))
    return -VAR_0;
 }

 if (VAR_18->attrs[VAR_4]) {
  VAR_19->cipher_group =
   FUNC_7(VAR_18->attrs[VAR_4]);
  if (!FUNC_0(&VAR_17->wiphy,
           VAR_19->cipher_group))
   return -VAR_0;
 }

 if (VAR_18->attrs[VAR_11]) {
  VAR_19->wpa_versions =
   FUNC_7(VAR_18->attrs[VAR_11]);
  if (!FUNC_4(VAR_19->wpa_versions))
   return -VAR_0;
 }

 if (VAR_18->attrs[VAR_2]) {
  void *VAR_26;
  int VAR_27;

  VAR_26 = FUNC_5(VAR_18->attrs[VAR_2]);
  VAR_27 = FUNC_8(VAR_18->attrs[VAR_2]);
  VAR_19->n_akm_suites = VAR_27 / sizeof(u32);

  if (VAR_27 % sizeof(u32))
   return -VAR_0;

  if (VAR_19->n_akm_suites > VAR_14)
   return -VAR_0;

  FUNC_2(VAR_19->akm_suites, VAR_26, VAR_27);
 }

 if (VAR_18->attrs[VAR_9]) {
  if (FUNC_8(VAR_18->attrs[VAR_9]) != VAR_16)
   return -VAR_0;
  if (!FUNC_10(&VAR_17->wiphy,
          VAR_12))
   return -VAR_0;
  VAR_19->psk = FUNC_5(VAR_18->attrs[VAR_9]);
 }

 if (VAR_18->attrs[VAR_10]) {
  if (!FUNC_10(&VAR_17->wiphy,
          VAR_13))
   return -VAR_0;
  VAR_19->sae_pwd =
   FUNC_5(VAR_18->attrs[VAR_10]);
  VAR_19->sae_pwd_len =
   FUNC_8(VAR_18->attrs[VAR_10]);
 }

 return 0;
}
