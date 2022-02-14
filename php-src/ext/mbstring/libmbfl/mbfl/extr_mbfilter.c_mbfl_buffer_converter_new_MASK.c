
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbfl_encoding ;
struct TYPE_8__ {scalar_t__ filter_flush; scalar_t__ filter_function; } ;
struct TYPE_7__ {TYPE_2__ device; int * filter1; TYPE_2__* filter2; int const* from; int const* to; } ;
typedef TYPE_1__ mbfl_buffer_converter ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int const*,int const*) ;
 void* FUNC_2 (int const*,int const*,int (*) (int,void*),int (*) (void*),TYPE_2__*) ;
 int const VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,size_t,size_t) ;
 int FUNC_6 (int,void*) ;

mbfl_buffer_converter *
FUNC_7(
 const mbfl_encoding *VAR_1,
 const mbfl_encoding *VAR_2,
    size_t VAR_3)
{
 mbfl_buffer_converter *VAR_4;


 VAR_4 = (mbfl_buffer_converter*)FUNC_4(sizeof(mbfl_buffer_converter));
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }


 VAR_4->from = VAR_1;
 VAR_4->to = VAR_2;


 VAR_4->filter1 = ((void*)0);
 VAR_4->filter2 = ((void*)0);
 if (FUNC_1(VAR_4->from, VAR_4->to) != ((void*)0)) {
  VAR_4->filter1 = FUNC_2(VAR_4->from, VAR_4->to, FUNC_6, ((void*)0), &VAR_4->device);
 } else {
  VAR_4->filter2 = FUNC_2(&VAR_0, VAR_4->to, FUNC_6, ((void*)0), &VAR_4->device);
  if (VAR_4->filter2 != ((void*)0)) {
   VAR_4->filter1 = FUNC_2(VAR_4->from,
     &VAR_0,
     (int (*)(int, void*))VAR_4->filter2->filter_function,
     (int (*)(void*))VAR_4->filter2->filter_flush,
     VAR_4->filter2);
   if (VAR_4->filter1 == ((void*)0)) {
    FUNC_0(VAR_4->filter2);
   }
  }
 }
 if (VAR_4->filter1 == ((void*)0)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 FUNC_5(&VAR_4->device, VAR_3, VAR_3/4);

 return VAR_4;
}
