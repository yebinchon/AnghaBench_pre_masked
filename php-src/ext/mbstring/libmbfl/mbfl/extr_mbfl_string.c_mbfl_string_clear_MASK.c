
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* val; scalar_t__ len; } ;
typedef TYPE_1__ mbfl_string ;


 int FUNC_0 (unsigned char*) ;

void
FUNC_1(mbfl_string *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->val != (unsigned char*)((void*)0)) {
   FUNC_0(VAR_0->val);
  }
  VAR_0->val = (unsigned char*)((void*)0);
  VAR_0->len = 0;
 }
}
