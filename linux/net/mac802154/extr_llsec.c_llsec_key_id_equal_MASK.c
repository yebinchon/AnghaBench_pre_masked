
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_llsec_key_id {int mode; scalar_t__ id; int extended_source; int short_source; int device_addr; } ;



 int VAR_0 ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static bool FUNC_1(const struct ieee802154_llsec_key_id *VAR_1,
          const struct ieee802154_llsec_key_id *VAR_2)
{
 if (VAR_1->mode != VAR_2->mode)
  return 0;

 if (VAR_1->mode == VAR_0)
  return FUNC_0(&VAR_1->device_addr, &VAR_2->device_addr);

 if (VAR_1->id != VAR_2->id)
  return 0;

 switch (VAR_1->mode) {
 case 129:
  return 1;
 case 128:
  return VAR_1->short_source == VAR_2->short_source;
 case 130:
  return VAR_1->extended_source == VAR_2->extended_source;
 }

 return 0;
}
