
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * opaque; } ;
typedef TYPE_1__ mbfl_convert_filter ;
struct TYPE_7__ {int (* filter_dtor ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(mbfl_convert_filter *VAR_1)
{
 VAR_0(VAR_1);

 if (VAR_1->opaque != ((void*)0)) {
  FUNC_1(VAR_1->opaque);
 }

 FUNC_0(VAR_1);
}
