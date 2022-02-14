
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsstr_t ;
typedef int WCHAR ;
struct TYPE_4__ {unsigned int buf; } ;
struct TYPE_3__ {unsigned int buf; } ;





 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int,unsigned int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int,unsigned int) ;

void FUNC_6(jsstr_t *VAR_0, unsigned VAR_1, unsigned VAR_2, WCHAR *VAR_3)
{
    switch(FUNC_4(VAR_0)) {
    case 129:
        FUNC_5(VAR_3, FUNC_1(VAR_0)->buf+VAR_1, VAR_2*sizeof(WCHAR));
        return;
    case 130:
        FUNC_5(VAR_3, FUNC_0(VAR_0)->buf+VAR_1, VAR_2*sizeof(WCHAR));
        return;
    case 128:
        FUNC_3(FUNC_2(VAR_0), VAR_1, VAR_2, VAR_3);
        return;
    }
}
