
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int ;
struct timezone {int dummy; } ;
struct TYPE_13__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_16__ {TYPE_3__ key; } ;
struct authdes_verf {scalar_t__ adv_winverf; TYPE_6__ adv_xtimestamp; } ;
struct TYPE_12__ {scalar_t__ window; } ;
struct authdes_cred {scalar_t__ adc_namekind; int adc_nickname; TYPE_2__ adc_fullname; } ;
struct TYPE_18__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_11__ {int tv_sec; scalar_t__ tv_usec; } ;
struct ad_private {int ad_fullnamelen; struct authdes_cred ad_cred; struct authdes_verf ad_verf; int ad_nickname; scalar_t__ ad_window; TYPE_8__ ad_timestamp; TYPE_1__ ad_timediff; } ;
typedef int rpc_inline_t ;
typedef TYPE_6__ des_block ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_15__ {int oa_flavor; } ;
struct TYPE_14__ {int oa_flavor; } ;
struct TYPE_17__ {TYPE_5__ ah_verf; TYPE_4__ ah_cred; int ah_key; } ;
typedef TYPE_7__ AUTH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ad_private* FUNC_1 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,char*,int,int,char*) ;
 int FUNC_6 (char*,char*,int,int) ;
 int FUNC_7 (TYPE_8__*,struct timezone*) ;
 int FUNC_8 (int *,struct authdes_cred*) ;
 int FUNC_9 (int *,struct authdes_verf*) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int*) ;

__attribute__((used)) static bool_t
FUNC_12(AUTH *VAR_8, XDR *VAR_9)
{

 struct ad_private *VAR_10 = FUNC_1(VAR_8);
 struct authdes_cred *VAR_11 = &VAR_10->ad_cred;
 struct authdes_verf *VAR_12 = &VAR_10->ad_verf;
 des_block VAR_13[2];
 des_block VAR_14;
 int VAR_15;
 int VAR_16;
 rpc_inline_t *VAR_17;





 (void) FUNC_7(&VAR_10->ad_timestamp, (struct timezone *)((void*)0));
 VAR_10->ad_timestamp.tv_sec += VAR_10->ad_timediff.tv_sec;
 VAR_10->ad_timestamp.tv_usec += VAR_10->ad_timediff.tv_usec;
 while (VAR_10->ad_timestamp.tv_usec >= VAR_7) {
  VAR_10->ad_timestamp.tv_usec -= VAR_7;
  VAR_10->ad_timestamp.tv_sec++;
 }





 VAR_17 = (rpc_inline_t *)VAR_13;
 FUNC_3(VAR_17, VAR_10->ad_timestamp.tv_sec);
 FUNC_3(VAR_17, VAR_10->ad_timestamp.tv_usec);
 if (VAR_10->ad_cred.adc_namekind == VAR_0) {
  FUNC_4(VAR_17, VAR_10->ad_window);
  FUNC_4(VAR_17, VAR_10->ad_window - 1);
  VAR_14.key.high = VAR_14.key.low = 0;
  VAR_15 = FUNC_5((char *)&VAR_8->ah_key, (char *)VAR_13,
   (u_int) 2 * sizeof (des_block),
   VAR_3 | VAR_4, (char *)&VAR_14);
 } else {
  VAR_15 = FUNC_6((char *)&VAR_8->ah_key, (char *)VAR_13,
   (u_int) sizeof (des_block),
   VAR_3 | VAR_4);
 }
 if (FUNC_2(VAR_15)) {

  return (VAR_5);
 }
 VAR_10->ad_verf.adv_xtimestamp = VAR_13[0];
 if (VAR_10->ad_cred.adc_namekind == VAR_0) {
  VAR_10->ad_cred.adc_fullname.window = VAR_13[1].key.high;
  VAR_10->ad_verf.adv_winverf = VAR_13[1].key.low;
 } else {
  VAR_10->ad_cred.adc_nickname = VAR_10->ad_nickname;
  VAR_10->ad_verf.adv_winverf = 0;
 }





 if (VAR_10->ad_cred.adc_namekind == VAR_0) {
  VAR_16 = ((1 + 1 + 2 + 1)*VAR_2 + VAR_10->ad_fullnamelen);
 } else {
  VAR_16 = (1 + 1)*VAR_2;
 }

 if ((VAR_17 = FUNC_10(VAR_9, 2*VAR_2))) {
  FUNC_3(VAR_17, VAR_1);
  FUNC_3(VAR_17, VAR_16);
 } else {
  FUNC_0(FUNC_11(VAR_9, (int *)&VAR_8->ah_cred.oa_flavor));
  FUNC_0(FUNC_11(VAR_9, &VAR_16));
 }
 FUNC_0(FUNC_8(VAR_9, VAR_11));

 VAR_16 = (2 + 1)*VAR_2;
 if ((VAR_17 = FUNC_10(VAR_9, 2*VAR_2))) {
  FUNC_3(VAR_17, VAR_1);
  FUNC_3(VAR_17, VAR_16);
 } else {
  FUNC_0(FUNC_11(VAR_9, (int *)&VAR_8->ah_verf.oa_flavor));
  FUNC_0(FUNC_11(VAR_9, &VAR_16));
 }
 FUNC_0(FUNC_9(VAR_9, VAR_12));
 return (VAR_6);
}
