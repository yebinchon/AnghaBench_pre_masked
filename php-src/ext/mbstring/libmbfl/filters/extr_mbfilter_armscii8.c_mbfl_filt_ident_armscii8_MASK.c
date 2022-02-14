
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; } ;
typedef TYPE_1__ mbfl_identify_filter ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, mbfl_identify_filter *VAR_2)
{
 if (VAR_1 >= VAR_0 && VAR_1 <= 0xff)
  VAR_2->flag = 0;
 else
  VAR_2->flag = 1;
 return VAR_1;
}
