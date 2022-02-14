
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* val; scalar_t__ len; int const* encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;
typedef int mbfl_language_id ;
typedef int mbfl_encoding ;



void
FUNC_0(mbfl_string *VAR_0, mbfl_language_id VAR_1, const mbfl_encoding *VAR_2)
{
 if (VAR_0) {
  VAR_0->no_language = VAR_1;
  VAR_0->encoding = VAR_2;
  VAR_0->val = (unsigned char*)((void*)0);
  VAR_0->len = 0;
 }
}
