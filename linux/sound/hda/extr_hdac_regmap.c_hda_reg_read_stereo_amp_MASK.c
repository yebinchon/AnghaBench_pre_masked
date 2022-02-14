
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct hdac_device*,unsigned int,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct hdac_device *VAR_4,
       unsigned int VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_5 &= ~(VAR_2 | VAR_3);
 VAR_9 = FUNC_0(VAR_4, VAR_5 | VAR_0, 0, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_4, VAR_5 | VAR_1, 0, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 *VAR_6 = VAR_7 | (VAR_8 << 8);
 return 0;
}
