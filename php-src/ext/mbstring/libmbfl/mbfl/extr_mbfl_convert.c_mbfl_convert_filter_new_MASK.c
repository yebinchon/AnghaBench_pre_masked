
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbfl_convert_vtbl {int dummy; } ;
typedef int mbfl_encoding ;
typedef int mbfl_convert_filter ;


 scalar_t__ FUNC_0 (int *,int const*,int const*,struct mbfl_convert_vtbl const*,int (*) (int,void*),int (*) (void*),void*) ;
 struct mbfl_convert_vtbl* FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

mbfl_convert_filter *
FUNC_4(
    const mbfl_encoding *VAR_0,
    const mbfl_encoding *VAR_1,
    int (*VAR_2)(int, void* ),
    int (*VAR_3)(void*),
    void* VAR_4)
{
 mbfl_convert_filter * VAR_5;
 const struct mbfl_convert_vtbl *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }


 VAR_5 = (mbfl_convert_filter *)FUNC_3(sizeof(mbfl_convert_filter));
 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 }

 if (FUNC_0(VAR_5, VAR_0, VAR_1, VAR_6,
   VAR_2, VAR_3, VAR_4)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
