
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mime_header_encoder_data {TYPE_1__* conv1_filter; } ;
struct TYPE_2__ {int (* filter_function ) (int,TYPE_1__*) ;} ;


 int FUNC_0 (int,TYPE_1__*) ;

int
FUNC_1(int VAR_0, struct mime_header_encoder_data *VAR_1)
{
 return (*VAR_1->conv1_filter->filter_function)(VAR_0, VAR_1->conv1_filter);
}
