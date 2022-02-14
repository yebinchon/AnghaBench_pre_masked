
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; } ;
typedef TYPE_1__ mbfl_identify_filter ;



__attribute__((used)) static int FUNC_0(int VAR_0, mbfl_identify_filter *VAR_1)
{
 if (VAR_0 >= 0x80 && VAR_0 < 0xff)
  VAR_1->flag = 0;
 else
  VAR_1->flag = 1;
 return VAR_0;
}
