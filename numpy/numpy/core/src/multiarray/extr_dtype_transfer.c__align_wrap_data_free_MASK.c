
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fromdata; int todata; int wrappeddata; } ;
typedef TYPE_1__ _align_wrap_data ;
typedef int NpyAuxData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(NpyAuxData *VAR_0)
{
    _align_wrap_data *VAR_1 = (_align_wrap_data *)VAR_0;
    FUNC_0(VAR_1->wrappeddata);
    FUNC_0(VAR_1->todata);
    FUNC_0(VAR_1->fromdata);
    FUNC_1(VAR_0);
}
