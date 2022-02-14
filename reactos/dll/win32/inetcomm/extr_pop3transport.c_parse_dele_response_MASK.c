
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
typedef TYPE_1__ POP3Transport ;
typedef int HRESULT ;
typedef int DWORD ;


 void* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static HRESULT FUNC_1(POP3Transport *VAR_3, DWORD *VAR_4)
{
    switch (VAR_3->state)
    {
    case 128:
        *VAR_4 = 0;
        VAR_3->state = VAR_0;
        return VAR_2;

    default:
        FUNC_0("parse error\n");
        VAR_3->state = VAR_0;
        return VAR_1;
    }
}
