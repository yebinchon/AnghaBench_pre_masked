
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* val; scalar_t__ len; int * encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(mbfl_string *VAR_2)
{
 if (VAR_2) {
  VAR_2->no_language = VAR_1;
  VAR_2->encoding = &VAR_0;
  VAR_2->val = (unsigned char*)((void*)0);
  VAR_2->len = 0;
 }
}
