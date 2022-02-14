
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int u_int ;
struct timeval {int dummy; } ;
struct opaque_auth {int oa_length; scalar_t__ oa_base; } ;
struct TYPE_9__ {void* tv_usec; void* tv_sec; } ;
struct authdes_verf {int adv_nickname; TYPE_2__ adv_timestamp; void* adv_int_u; } ;
struct TYPE_10__ {int adc_namekind; } ;
struct ad_private {TYPE_3__ ad_cred; int ad_nickname; int ad_timestamp; } ;
struct TYPE_8__ {void* low; void* high; } ;
struct TYPE_11__ {scalar_t__ c; TYPE_1__ key; } ;
typedef TYPE_4__ des_block ;
typedef int bool_t ;
struct TYPE_12__ {int ah_key; } ;
typedef TYPE_5__ AUTH ;


 int VAR_0 ;
 struct ad_private* FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (void**) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int ,int) ;

__attribute__((used)) static bool_t
FUNC_5(AUTH *VAR_6, struct opaque_auth *VAR_7)
{

 struct ad_private *VAR_8 = FUNC_0(VAR_6);
 struct authdes_verf VAR_9;
 int VAR_10;
 uint32_t *VAR_11;
 des_block VAR_12;

 if (VAR_7->oa_length != (2 + 1) * VAR_1) {
  return (VAR_4);
 }

 VAR_11 = (uint32_t *)VAR_7->oa_base;
 VAR_12.key.high = (uint32_t)*VAR_11++;
 VAR_12.key.low = (uint32_t)*VAR_11++;
 VAR_9.adv_int_u = (uint32_t)*VAR_11++;




 VAR_10 = FUNC_4((char *)&VAR_6->ah_key, (char *)&VAR_12,
  (u_int)sizeof (des_block), VAR_2 | VAR_3);

 if (FUNC_1(VAR_10)) {

  return (VAR_4);
 }





 VAR_11 = (uint32_t *)VAR_12.c;
 VAR_9.adv_timestamp.tv_sec = FUNC_2(VAR_11) + 1;
 VAR_9.adv_timestamp.tv_usec = FUNC_2(VAR_11);




 if (FUNC_3((char *)&VAR_8->ad_timestamp, (char *)&VAR_9.adv_timestamp,
   sizeof(struct timeval)) != 0) {

  return (VAR_4);
 }




 VAR_8->ad_nickname = VAR_9.adv_nickname;
 VAR_8->ad_cred.adc_namekind = VAR_0;
 return (VAR_5);
}
