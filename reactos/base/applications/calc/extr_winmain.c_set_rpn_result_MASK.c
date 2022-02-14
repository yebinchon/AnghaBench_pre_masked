
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int calc_number_t ;
struct TYPE_2__ {scalar_t__ buffer; scalar_t__ ptr; int base; int sci_in; } ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(HWND VAR_2, calc_number_t *VAR_3)
{
    VAR_1.sci_in = VAR_0;
    FUNC_2(VAR_3, VAR_1.buffer, FUNC_0(VAR_1.buffer), VAR_1.base);
    VAR_1.ptr = VAR_1.buffer + FUNC_1(VAR_1.buffer);
    FUNC_3(VAR_2);
    FUNC_4(VAR_2);
}
