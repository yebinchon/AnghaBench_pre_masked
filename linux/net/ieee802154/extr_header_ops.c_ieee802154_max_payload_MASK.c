
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t key_id_mode; } ;
struct TYPE_3__ {scalar_t__ security_enabled; } ;
struct ieee802154_hdr {TYPE_2__ sec; TYPE_1__ fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee802154_hdr const*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int* VAR_2 ;

int FUNC_2(const struct ieee802154_hdr *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->fc.security_enabled) {
  VAR_4 += VAR_2[VAR_3->sec.key_id_mode] - 1;
  VAR_4 += FUNC_1(&VAR_3->sec);
 }

 return VAR_1 - VAR_4 - VAR_0;
}
