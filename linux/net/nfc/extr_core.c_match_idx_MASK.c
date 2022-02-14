
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {unsigned int const idx; } ;
struct device {int dummy; } ;


 struct nfc_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 struct nfc_dev *VAR_2 = FUNC_0(VAR_0);
 const unsigned int *VAR_3 = VAR_1;

 return VAR_2->idx == *VAR_3;
}
