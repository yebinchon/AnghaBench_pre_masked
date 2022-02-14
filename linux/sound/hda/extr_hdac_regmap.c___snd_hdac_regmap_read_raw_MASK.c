
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdac_device*,unsigned int,unsigned int*,int) ;
 int FUNC_1 (struct hdac_device*) ;
 int FUNC_2 (struct hdac_device*) ;

__attribute__((used)) static int FUNC_3(struct hdac_device *VAR_1,
          unsigned int VAR_2, unsigned int *VAR_3,
          bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 == -VAR_0) {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5 >= 0)
   VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_1);
 }
 return VAR_5;
}
