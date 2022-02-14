
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int len; unsigned char* val; int const* encoding; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_17__ {scalar_t__ (* filter_function ) (int ,TYPE_2__*) ;int illegal_substchar; int illegal_mode; } ;
typedef TYPE_2__ mbfl_memory_device ;
typedef int mbfl_encoding ;
typedef TYPE_2__ mbfl_convert_filter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int const*,int const*) ;
 TYPE_2__* FUNC_3 (int const*,int const*,int (*) (int,void*),int *,TYPE_2__*) ;
 int const VAR_1 ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int,void*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;

mbfl_string *
FUNC_8(
    mbfl_string *VAR_2,
    mbfl_string *VAR_3,
    const mbfl_encoding *VAR_4)
{
 size_t VAR_5;
 unsigned char *VAR_6;
 mbfl_memory_device VAR_7;
 mbfl_convert_filter *VAR_8;
 mbfl_convert_filter *VAR_9;


 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 if (FUNC_2(VAR_2->encoding, VAR_4) != ((void*)0)) {
  VAR_8 = FUNC_3(VAR_2->encoding, VAR_4, FUNC_5, 0, &VAR_7);
 } else {
  VAR_9 = FUNC_3(&VAR_1, VAR_4, FUNC_5, 0, &VAR_7);
  if (VAR_9 != ((void*)0)) {
   VAR_8 = FUNC_3(VAR_2->encoding, &VAR_1, (int (*)(int, void*))VAR_9->filter_function, ((void*)0), VAR_9);
   if (VAR_8 == ((void*)0)) {
    FUNC_0(VAR_9);
   }
  }
 }
 if (VAR_8 == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_9 != ((void*)0)) {
  VAR_9->illegal_mode = VAR_0;
  VAR_9->illegal_substchar = 0x3f;
 }

 FUNC_4(&VAR_7, VAR_2->len, (VAR_2->len >> 2) + 8);


 VAR_5 = VAR_2->len;
 VAR_6 = VAR_2->val;
 if (VAR_6 != ((void*)0)) {
  while (VAR_5 > 0) {
   if ((*VAR_8->filter_function)(*VAR_6++, VAR_8) < 0) {
    break;
   }
   VAR_5--;
  }
 }

 FUNC_1(VAR_8);
 FUNC_0(VAR_8);
 if (VAR_9 != ((void*)0)) {
  FUNC_1(VAR_9);
  FUNC_0(VAR_9);
 }

 return FUNC_6(&VAR_7, VAR_3);
}
