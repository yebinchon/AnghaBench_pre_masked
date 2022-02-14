
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hci_dev*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct hci_dev *VAR_5, u32 VAR_6, u8 *VAR_7,
         u8 VAR_8, bool VAR_9)
{
 int VAR_10, VAR_11;
 u8 VAR_12;

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_9);

 if (VAR_8 > VAR_12)
  return 0;


 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_8; VAR_10 += (VAR_11 + 1)) {
  VAR_11 = VAR_7[VAR_10];

  if (VAR_7[VAR_10 + 1] == VAR_1 &&
      (!VAR_9 || FUNC_1(VAR_6)))
   return 0;

  if (VAR_7[VAR_10 + 1] == VAR_4 && FUNC_4(VAR_6))
   return 0;

  if (VAR_7[VAR_10 + 1] == VAR_2 && FUNC_2(VAR_6))
   return 0;

  if (VAR_7[VAR_10 + 1] == VAR_3 && FUNC_2(VAR_6))
   return 0;

  if (VAR_7[VAR_10 + 1] == VAR_0 &&
      FUNC_0(VAR_6))
   return 0;




  if (VAR_10 + VAR_11 >= VAR_8)
   return 0;
 }

 return 1;
}
