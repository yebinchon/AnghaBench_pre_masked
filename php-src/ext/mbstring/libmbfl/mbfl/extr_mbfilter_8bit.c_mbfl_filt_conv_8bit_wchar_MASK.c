
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* output_function ) (int,int ) ;int data; } ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_0, mbfl_convert_filter *VAR_1)
{
 return (*VAR_1->output_function)(VAR_0, VAR_1->data);
}
