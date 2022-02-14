
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total_refs; } ;
typedef int HRESULT ;
typedef TYPE_1__ HFONTItem ;
typedef int HFONT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(HFONT VAR_3)
{
    HFONTItem *VAR_4;
    HRESULT VAR_5 = VAR_1;

    FUNC_0(&VAR_0);

    VAR_4 = FUNC_2(VAR_3);
    if(VAR_4)
    {
        VAR_4->total_refs++;
        VAR_5 = VAR_2;
    }
    FUNC_1(&VAR_0);

    return VAR_5;
}
