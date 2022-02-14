
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int szValueName; } ;
typedef int LPWSTR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef size_t BYTE ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,size_t,...) ;
 int FUNC_3 (size_t,size_t,...) ;
 int FUNC_4 (int ,int *,int ,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static HRESULT FUNC_6(DWORD VAR_5, BYTE VAR_6,
 LPWSTR VAR_7)
{
    HRESULT VAR_8;

    FUNC_2("0x%08x,0x%02x,%p\n", VAR_5, VAR_6, VAR_7);

    if (VAR_6 >= FUNC_0(VAR_0))
        return VAR_2;
    if (VAR_0[VAR_6].type != VAR_1)
        return VAR_2;
    if (!VAR_7)
        return VAR_2;

    if (VAR_5 & VAR_4)

        VAR_8 = FUNC_3(VAR_6, VAR_7);



    else
    {

        VAR_8 = FUNC_4(VAR_3, ((void*)0),



         VAR_0[VAR_6].szValueName, VAR_7);
        if (FUNC_1(VAR_8))

            VAR_8 = FUNC_3(VAR_6, VAR_7);



    }
    FUNC_2("returning 0x%08x (output path is %s)\n", VAR_8, FUNC_5(VAR_7));
    return VAR_8;
}
