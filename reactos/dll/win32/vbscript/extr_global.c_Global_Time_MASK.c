
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbdisp_t ;
typedef int VARIANT ;
struct TYPE_3__ {scalar_t__ wDayOfYear; int st; } ;
typedef TYPE_1__ UDATE ;
typedef int SYSTEMTIME ;
typedef int HRESULT ;
typedef int DATE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_5(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    SYSTEMTIME VAR_5;
    UDATE VAR_6;
    DATE VAR_7;
    HRESULT VAR_8;

    FUNC_2("\n");

    FUNC_1(&VAR_5);
    VAR_6.st = VAR_5;
    VAR_6.wDayOfYear = 0;
    VAR_8 = FUNC_3(&VAR_6, 0, VAR_0, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;
    return FUNC_4(VAR_4, VAR_7);
}
