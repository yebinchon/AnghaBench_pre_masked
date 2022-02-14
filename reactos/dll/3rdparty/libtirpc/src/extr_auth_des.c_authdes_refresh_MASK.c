
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_7__ {int name; int key; } ;
struct authdes_cred {TYPE_1__ adc_fullname; int adc_namekind; } ;
struct ad_private {int ad_fullname; int ad_xkey; int ad_servername; scalar_t__ ad_pkey; scalar_t__ ad_dosync; int ad_netid; int ad_uaddr; int ad_timehost; int ad_nis_srvr; int ad_timediff; struct authdes_cred ad_cred; } ;
struct TYPE_8__ {char* n_bytes; scalar_t__ n_len; } ;
typedef TYPE_2__ netobj ;
typedef int bool_t ;
struct TYPE_9__ {int ah_key; } ;
typedef TYPE_3__ AUTH ;


 int VAR_0 ;
 struct ad_private* FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static bool_t
FUNC_4(AUTH *VAR_3, void *VAR_4)
{

 struct ad_private *VAR_5 = FUNC_0(VAR_3);
 struct authdes_cred *VAR_6 = &VAR_5->ad_cred;
 int VAR_7;
 netobj VAR_8;

 if (VAR_5->ad_dosync) {

  VAR_7 = 1;





  if (! VAR_7) {



   VAR_5->ad_dosync = 0;


   }
 }
 VAR_5->ad_xkey = VAR_3->ah_key;
 VAR_8.n_bytes = (char *)(VAR_5->ad_pkey);
 VAR_8.n_len = (u_int)FUNC_3((char *)VAR_5->ad_pkey) + 1;
 if (FUNC_2(VAR_5->ad_servername, &VAR_8, &VAR_5->ad_xkey) < 0) {


  return (VAR_1);
 }
 VAR_6->adc_fullname.key = VAR_5->ad_xkey;
 VAR_6->adc_namekind = VAR_0;
 VAR_6->adc_fullname.name = VAR_5->ad_fullname;
 return (VAR_2);
}
