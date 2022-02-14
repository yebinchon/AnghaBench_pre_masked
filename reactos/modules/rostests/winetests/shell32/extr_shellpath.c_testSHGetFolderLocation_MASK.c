
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* abID; } ;
struct TYPE_8__ {TYPE_1__ mkid; } ;
typedef TYPE_2__* LPITEMIDLIST ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int,int *,int ,TYPE_2__**) ;

__attribute__((used)) static BYTE FUNC_5(int VAR_3)
{
    LPITEMIDLIST VAR_4;
    HRESULT VAR_5;
    BYTE VAR_6 = 0xff;


    if (!&FUNC_4) return VAR_1;

    VAR_4 = ((void*)0);
    VAR_5 = FUNC_4(((void*)0), VAR_3, ((void*)0), 0, &VAR_4);
    if (VAR_5 == VAR_0)
    {
        if (VAR_4)
        {
            LPITEMIDLIST VAR_7 = FUNC_3(VAR_4);

            FUNC_2(VAR_7 != ((void*)0), "%s: ILFindLastID failed\n",
             FUNC_1(VAR_3));
            if (VAR_7)
                VAR_6 = VAR_7->mkid.abID[0];
            FUNC_0(VAR_2, VAR_4);
        }
    }
    return VAR_6;
}
