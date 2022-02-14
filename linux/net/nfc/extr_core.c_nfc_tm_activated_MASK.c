
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nfc_dev {int polling; int dev; int rf_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfc_dev*,int ,int ,int ) ;
 int FUNC_3 (struct nfc_dev*,scalar_t__) ;
 int FUNC_4 (struct nfc_dev*,int *,size_t) ;

int FUNC_5(struct nfc_dev *VAR_2, u32 VAR_3, u8 VAR_4,
       u8 *VAR_5, size_t VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_2->dev);

 VAR_2->polling = 0;

 if (VAR_5 != ((void*)0)) {
  VAR_7 = FUNC_4(VAR_2, VAR_5, VAR_6);
  if (VAR_7 < 0)
   goto out;
 }

 VAR_2->rf_mode = VAR_1;

 if (VAR_3 == VAR_0)
  FUNC_2(VAR_2, 0, VAR_4, VAR_1);

 VAR_7 = FUNC_3(VAR_2, VAR_3);

out:
 FUNC_1(&VAR_2->dev);

 return VAR_7;
}
