
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int* dev_name; int* short_name; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int,int ,int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 size_t FUNC_2 (int*) ;

u8 FUNC_3(struct hci_dev *VAR_4, u8 *VAR_5, u8 VAR_6)
{
 size_t VAR_7;
 size_t VAR_8;


 if ((VAR_2 - VAR_6) < VAR_3 + 3)
  return VAR_6;


 VAR_8 = FUNC_2(VAR_4->dev_name);
 if (VAR_8 && VAR_8 <= VAR_3)
  return FUNC_0(VAR_5, VAR_6, VAR_0,
           VAR_4->dev_name, VAR_8 + 1);


 VAR_7 = FUNC_2(VAR_4->short_name);
 if (VAR_7)
  return FUNC_0(VAR_5, VAR_6, VAR_1,
           VAR_4->short_name, VAR_7 + 1);




 if (VAR_8) {
  u8 VAR_9[VAR_3 + 1];

  FUNC_1(VAR_9, VAR_4->dev_name, VAR_3);
  VAR_9[VAR_3] = '\0';

  return FUNC_0(VAR_5, VAR_6, VAR_1, VAR_9,
           sizeof(VAR_9));
 }

 return VAR_6;
}
