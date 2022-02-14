
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mbfl_identify_vtbl {int filter_function; int filter_dtor; int (* filter_ctor ) (TYPE_1__*) ;} ;
struct TYPE_6__ {int (* filter_ctor ) (TYPE_1__*) ;int filter_function; int filter_dtor; TYPE_2__ const* encoding; scalar_t__ score; scalar_t__ flag; scalar_t__ status; } ;
typedef TYPE_1__ mbfl_identify_filter ;
struct TYPE_7__ {int no_encoding; } ;
typedef TYPE_2__ mbfl_encoding ;


 struct mbfl_identify_vtbl* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct mbfl_identify_vtbl VAR_0 ;

int FUNC_2(mbfl_identify_filter *VAR_1, const mbfl_encoding *VAR_2)
{
 const struct mbfl_identify_vtbl *VAR_3;


 VAR_1->encoding = VAR_2;

 VAR_1->status = 0;
 VAR_1->flag = 0;
 VAR_1->score = 0;


 VAR_3 = FUNC_0(VAR_1->encoding->no_encoding);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = &VAR_0;
 }
 VAR_1->filter_ctor = VAR_3->filter_ctor;
 VAR_1->filter_dtor = VAR_3->filter_dtor;
 VAR_1->filter_function = VAR_3->filter_function;


 (*VAR_1->filter_ctor)(VAR_1);

 return 0;
}
