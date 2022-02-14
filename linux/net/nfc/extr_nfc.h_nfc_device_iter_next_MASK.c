
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct device {int dummy; } ;
struct class_dev_iter {int dummy; } ;


 struct device* FUNC_0 (struct class_dev_iter*) ;
 struct nfc_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static inline struct nfc_dev *FUNC_2(struct class_dev_iter *VAR_0)
{
 struct device *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return FUNC_1(VAR_1);
}
