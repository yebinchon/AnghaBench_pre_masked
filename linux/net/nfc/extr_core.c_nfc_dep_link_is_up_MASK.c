
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct nfc_target {int dummy; } ;
struct nfc_dev {int dep_link_up; int polling; scalar_t__ rf_mode; struct nfc_target* active_target; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nfc_target* FUNC_0 (struct nfc_dev*,int ) ;
 int FUNC_1 (struct nfc_dev*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct nfc_dev*,int ,scalar_t__,scalar_t__) ;

int FUNC_3(struct nfc_dev *VAR_2, u32 VAR_3,
         u8 VAR_4, u8 VAR_5)
{
 VAR_2->dep_link_up = 1;

 if (!VAR_2->active_target && VAR_5 == VAR_1) {
  struct nfc_target *VAR_6;

  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 == ((void*)0))
   return -VAR_0;

  VAR_2->active_target = VAR_6;
 }

 VAR_2->polling = 0;
 VAR_2->rf_mode = VAR_5;

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
