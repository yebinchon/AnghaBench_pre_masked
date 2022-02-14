
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbfl_convert_vtbl {int filter_copy; int filter_flush; int filter_function; int filter_dtor; int (* filter_ctor ) (TYPE_1__*) ;} ;
typedef int mbfl_encoding ;
struct TYPE_4__ {int (* output_function ) (int,void*) ;int (* flush_function ) (void*) ;int illegal_substchar; int (* filter_ctor ) (TYPE_1__*) ;int filter_copy; int filter_flush; int filter_function; int filter_dtor; scalar_t__ num_illegalchar; int illegal_mode; void* data; int const* to; int const* from; } ;
typedef TYPE_1__ mbfl_convert_filter ;


 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(
 mbfl_convert_filter *VAR_1,
 const mbfl_encoding *VAR_2,
 const mbfl_encoding *VAR_3,
 const struct mbfl_convert_vtbl *VAR_4,
    int (*VAR_5)(int, void* ),
    int (*VAR_6)(void*),
    void* VAR_7)
{

 VAR_1->from = VAR_2;
 VAR_1->to = VAR_3;

 if (VAR_5 != ((void*)0)) {
  VAR_1->output_function = VAR_5;
 } else {
  VAR_1->output_function = FUNC_0;
 }

 VAR_1->flush_function = VAR_6;
 VAR_1->data = VAR_7;
 VAR_1->illegal_mode = VAR_0;
 VAR_1->illegal_substchar = 0x3f;
 VAR_1->num_illegalchar = 0;
 VAR_1->filter_ctor = VAR_4->filter_ctor;
 VAR_1->filter_dtor = VAR_4->filter_dtor;
 VAR_1->filter_function = VAR_4->filter_function;
 VAR_1->filter_flush = VAR_4->filter_flush;
 VAR_1->filter_copy = VAR_4->filter_copy;

 (*VAR_1->filter_ctor)(VAR_1);

 return 0;
}
