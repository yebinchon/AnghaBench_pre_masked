
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mbfl_convert_vtbl {int dummy; } ;
typedef int mbfl_encoding ;
struct TYPE_5__ {int data; int flush_function; int output_function; int (* filter_dtor ) (TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (TYPE_1__*,int const*,int const*,struct mbfl_convert_vtbl const*,int ,int ,int ) ;
 struct mbfl_convert_vtbl* FUNC_1 (int const*,int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct mbfl_convert_vtbl VAR_0 ;

void FUNC_3(mbfl_convert_filter *VAR_1,
     const mbfl_encoding *VAR_2, const mbfl_encoding *VAR_3)
{
 const struct mbfl_convert_vtbl *VAR_4;


 (*VAR_1->filter_dtor)(VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 == ((void*)0)) {
  VAR_4 = &VAR_0;
 }

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_1->output_function, VAR_1->flush_function, VAR_1->data);
}
