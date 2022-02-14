
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hci_dev *VAR_4, uint32_t VAR_5)
{

 if (!FUNC_0(VAR_4, VAR_2))
  return 0;


 if (!FUNC_0(VAR_4, VAR_1))
  return 1;




 if ((VAR_5 & VAR_3) &&
     FUNC_0(VAR_4, VAR_0))
  return 0;




 return 1;
}
