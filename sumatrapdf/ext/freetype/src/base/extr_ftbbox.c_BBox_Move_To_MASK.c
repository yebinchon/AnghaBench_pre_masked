
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last; int bbox; } ;
typedef TYPE_1__ TBBox_Rec ;
typedef int FT_Vector ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
  FUNC_1( FT_Vector* VAR_0,
                TBBox_Rec* VAR_1 )
  {
    FUNC_0( VAR_0, VAR_1->bbox );

    VAR_1->last = *VAR_0;

    return 0;
  }
