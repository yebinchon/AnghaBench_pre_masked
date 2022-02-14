
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int code; TYPE_1__* chain; } ;
struct nft_data {TYPE_2__ verdict; } ;
typedef enum nft_data_types { ____Placeholder_nft_data_types } nft_data_types ;
struct TYPE_3__ {int use; } ;


 int VAR_0 ;



void FUNC_0(const struct nft_data *VAR_1, enum nft_data_types VAR_2)
{
 if (VAR_2 == VAR_0) {
  switch (VAR_1->verdict.code) {
  case 128:
  case 129:
   VAR_1->verdict.chain->use++;
   break;
  }
 }
}
