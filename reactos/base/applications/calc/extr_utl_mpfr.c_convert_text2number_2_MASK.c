
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_5__ {int base; char* buffer; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,char*,int,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ,char*,int *,int,int ) ;

void FUNC_3(calc_number_t *VAR_3)
{
    int VAR_4;





    switch (VAR_2.base) {
    case 129: VAR_4 = 16; break;
    case 130: VAR_4 = 10; break;
    case 128: VAR_4 = 8; break;
    case 131: VAR_4 = 2; break;
    default: return;
    }
    FUNC_2(VAR_3->mf, VAR_2.buffer, ((void*)0), VAR_4, VAR_1);

}
