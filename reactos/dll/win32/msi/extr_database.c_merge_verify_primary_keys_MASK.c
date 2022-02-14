
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static UINT FUNC_5(MSIDATABASE *VAR_2, MSIDATABASE *VAR_3,
                                      LPCWSTR VAR_4)
{
    MSIRECORD *VAR_5, *VAR_6 = ((void*)0);
    UINT VAR_7, VAR_8, VAR_9;

    VAR_7 = FUNC_0(VAR_2, VAR_4, &VAR_5);
    if (VAR_7 != VAR_1)
        return VAR_7;

    VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_6);
    if (VAR_7 != VAR_1)
        goto done;

    VAR_9 = FUNC_1(VAR_5);
    if (VAR_9 != FUNC_1(VAR_6))
    {
        VAR_7 = VAR_0;
        goto done;
    }

    for (VAR_8 = 1; VAR_8 <= VAR_9; VAR_8++)
    {
        if (FUNC_4( FUNC_2( VAR_5, VAR_8 ), FUNC_2( VAR_6, VAR_8 ) ))
        {
            VAR_7 = VAR_0;
            goto done;
        }
    }

done:
    FUNC_3(&VAR_5->hdr);
    FUNC_3(&VAR_6->hdr);

    return VAR_7;
}
