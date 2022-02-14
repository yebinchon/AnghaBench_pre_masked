
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbfl_convert_vtbl {int to; int from; } ;
typedef int mbfl_encoding ;
typedef int mbfl_convert_filter ;


 scalar_t__ FUNC_0 (int *,int const*,int const*,struct mbfl_convert_vtbl const*,int (*) (int,void*),int (*) (void*),void*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int ) ;
 struct mbfl_convert_vtbl VAR_0 ;

mbfl_convert_filter *
FUNC_4(
 const struct mbfl_convert_vtbl *VAR_1,
    int (*VAR_2)(int, void* ),
    int (*VAR_3)(void*),
    void* VAR_4)
{
 mbfl_convert_filter * VAR_5;
 const mbfl_encoding *VAR_6, *VAR_7;

 if (VAR_1 == ((void*)0)) {
  VAR_1 = &VAR_0;
 }

 VAR_6 = FUNC_3(VAR_1->from);
 VAR_7 = FUNC_3(VAR_1->to);


 VAR_5 = (mbfl_convert_filter *)FUNC_2(sizeof(mbfl_convert_filter));
 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 }

 if (FUNC_0(VAR_5, VAR_6, VAR_7, VAR_1,
   VAR_2, VAR_3, VAR_4)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
