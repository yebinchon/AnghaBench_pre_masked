
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,unsigned int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfc_dev* FUNC_1 (struct device*) ;

struct nfc_dev *FUNC_2(unsigned int VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_1, ((void*)0), &VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_1(VAR_3);
}
