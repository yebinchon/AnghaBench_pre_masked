
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* flush_function ) (int ) ;int data; int (* filter_flush ) (TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(mbfl_convert_filter *VAR_0)
{
 (*VAR_0->filter_flush)(VAR_0);
 return (VAR_0->flush_function ? (*VAR_0->flush_function)(VAR_0->data) : 0);
}
