
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int cache_coef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdac_device*,unsigned int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct hdac_device *VAR_3, unsigned int VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (!VAR_3->cache_coef)
  return -VAR_2;

 VAR_6 = (VAR_4 & ~0xfff00) | (VAR_1 << 8);
 VAR_7 = FUNC_0(VAR_3, VAR_6, 0, ((void*)0));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = (VAR_4 & ~0xfffff) | (VAR_0 << 8) |
  (VAR_5 & 0xffff);
 return FUNC_0(VAR_3, VAR_6, 0, ((void*)0));
}
