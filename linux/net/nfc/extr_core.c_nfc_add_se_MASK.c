
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nfc_se {int list; int state; int type; int idx; } ;
struct nfc_dev {int secure_elements; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfc_se*) ;
 struct nfc_se* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 struct nfc_se* FUNC_6 (struct nfc_dev*,int ) ;
 int FUNC_7 (struct nfc_dev*,int ,int ) ;
 int FUNC_8 (char*,int ,int ) ;

int FUNC_9(struct nfc_dev *VAR_4, u32 VAR_5, u16 VAR_6)
{
 struct nfc_se *VAR_7;
 int VAR_8;

 FUNC_8("%s se index %d\n", FUNC_1(&VAR_4->dev), VAR_5);

 VAR_7 = FUNC_6(VAR_4, VAR_5);
 if (VAR_7)
  return -VAR_0;

 VAR_7 = FUNC_3(sizeof(struct nfc_se), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->idx = VAR_5;
 VAR_7->type = VAR_6;
 VAR_7->state = VAR_3;
 FUNC_0(&VAR_7->list);

 FUNC_4(&VAR_7->list, &VAR_4->secure_elements);

 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0) {
  FUNC_5(&VAR_7->list);
  FUNC_2(VAR_7);

  return VAR_8;
 }

 return 0;
}
