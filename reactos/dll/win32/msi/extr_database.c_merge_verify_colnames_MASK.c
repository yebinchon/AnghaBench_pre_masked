
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIQUERY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__**) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static UINT FUNC_6(MSIQUERY *VAR_4, MSIQUERY *VAR_5)
{
    MSIRECORD *VAR_6, *VAR_7;
    UINT VAR_8, VAR_9, VAR_10;

    VAR_8 = FUNC_2(VAR_4, VAR_2, &VAR_6);
    if (VAR_8 != VAR_1)
        return VAR_8;

    VAR_8 = FUNC_2(VAR_5, VAR_2, &VAR_7);
    if (VAR_8 != VAR_1)
    {
        FUNC_4(&VAR_6->hdr);
        return VAR_8;
    }

    VAR_10 = FUNC_0(VAR_6);
    for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++)
    {
        if (!FUNC_1(VAR_7, VAR_9))
            break;

        if (FUNC_5( FUNC_1( VAR_6, VAR_9 ), FUNC_1( VAR_7, VAR_9 ) ))
        {
            VAR_8 = VAR_0;
            goto done;
        }
    }

    FUNC_4(&VAR_6->hdr);
    FUNC_4(&VAR_7->hdr);
    VAR_6 = VAR_7 = ((void*)0);

    VAR_8 = FUNC_2(VAR_4, VAR_3, &VAR_6);
    if (VAR_8 != VAR_1)
        return VAR_8;

    VAR_8 = FUNC_2(VAR_5, VAR_3, &VAR_7);
    if (VAR_8 != VAR_1)
    {
        FUNC_4(&VAR_6->hdr);
        return VAR_8;
    }

    VAR_10 = FUNC_0(VAR_6);
    for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++)
    {
        if (!FUNC_1(VAR_7, VAR_9))
            break;

        if (!FUNC_3(FUNC_1(VAR_6, VAR_9),
                     FUNC_1(VAR_7, VAR_9)))
        {
            VAR_8 = VAR_0;
            break;
        }
    }

done:
    FUNC_4(&VAR_6->hdr);
    FUNC_4(&VAR_7->hdr);

    return VAR_8;
}
