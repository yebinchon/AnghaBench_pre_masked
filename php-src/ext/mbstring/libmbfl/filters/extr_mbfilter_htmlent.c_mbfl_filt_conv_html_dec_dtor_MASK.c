
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * opaque; scalar_t__ status; } ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (void*) ;

void FUNC_1(mbfl_convert_filter *VAR_0)
{
 VAR_0->status = 0;
 if (VAR_0->opaque)
 {
  FUNC_0((void*)VAR_0->opaque);
 }
 VAR_0->opaque = ((void*)0);
}
