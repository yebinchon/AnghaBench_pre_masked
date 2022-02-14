
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;


 int FUNC_0 (struct hdac_device*,int,int) ;
 int FUNC_1 (int,unsigned char*) ;

int FUNC_2(struct hdac_device *VAR_0, int VAR_1,
  int VAR_2, bool VAR_3, bool VAR_4, unsigned char *VAR_5)
{
 int VAR_6;

 if (!VAR_4 && VAR_3)
  VAR_6 = FUNC_1(VAR_2, VAR_5);
 else
  VAR_6 = FUNC_0(VAR_0,
     VAR_1, VAR_2);

 if (VAR_6 < 0)
  VAR_6 = 0;

 return VAR_6;
}
