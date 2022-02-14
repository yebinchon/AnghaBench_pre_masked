
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIQUERY ;
typedef int LPWSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__**) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static UINT FUNC_6(MSIQUERY *VAR_3, LPWSTR **VAR_4, DWORD *VAR_5)
{
    UINT VAR_6, VAR_7, VAR_8;
    MSIRECORD *VAR_9 = ((void*)0);

    VAR_6 = FUNC_2(VAR_3, VAR_2, &VAR_9);
    if (VAR_6 != VAR_1)
        return VAR_6;

    VAR_8 = FUNC_0(VAR_9);
    *VAR_4 = FUNC_3(VAR_8*sizeof(LPWSTR));
    if (!*VAR_4)
    {
        VAR_6 = VAR_0;
        goto end;
    }

    *VAR_5 = VAR_8;
    for (VAR_7=1; VAR_7<=VAR_8; VAR_7++ )
    {
        (*VAR_4)[VAR_7-1] = FUNC_5(FUNC_1(VAR_9, VAR_7));
    }

end:
    FUNC_4( &VAR_9->hdr );
    return VAR_6;
}
