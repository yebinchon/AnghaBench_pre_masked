
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,unsigned int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2,
     unsigned int *VAR_3)
{
 struct device *VAR_4 = VAR_1;
 int VAR_5;

 u8 VAR_6;
 VAR_5 = FUNC_0(VAR_4, VAR_0,
         VAR_2, &VAR_6);
 *VAR_3 = (unsigned int)VAR_6;

 return VAR_5;
}
