
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int (* output_function ) (int,int ) ;scalar_t__ cache; scalar_t__ status; } ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_2, mbfl_convert_filter *VAR_3)
{
 int VAR_4;
 VAR_4 = VAR_2 & VAR_0;
 VAR_4 |= VAR_1;
 VAR_3->status = 0;
 VAR_3->cache = 0;
 FUNC_0((*VAR_3->output_function)(VAR_4, VAR_3->data));
 return 0;
}
