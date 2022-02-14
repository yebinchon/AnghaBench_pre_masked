
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbdisp_t ;
typedef int VARIANT ;
struct TYPE_3__ {int wHour; int wMinute; int wSecond; double wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int HRESULT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,double) ;

__attribute__((used)) static HRESULT FUNC_2(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    SYSTEMTIME VAR_4;
    double VAR_5;

    FUNC_0(&VAR_4);
    VAR_5 = VAR_4.wHour * 3600 + VAR_4.wMinute * 60 + VAR_4.wSecond + VAR_4.wMilliseconds / 1000.0;
    return FUNC_1(VAR_3, VAR_5);

}
