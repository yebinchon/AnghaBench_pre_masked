
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int opaque; } ;
typedef TYPE_1__ mbfl_convert_filter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

void FUNC_2(mbfl_convert_filter *VAR_1, mbfl_convert_filter *VAR_2)
{
 *VAR_2 = *VAR_1;
 VAR_2->opaque = FUNC_0(VAR_0+1);
 FUNC_1(VAR_2->opaque, VAR_1->opaque, VAR_0+1);
}
