
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int platform_id; int length; } ;
typedef TYPE_1__ tt_name_record ;
typedef int WORD ;
typedef int WCHAR ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*,int,int*,int) ;



 int FUNC_2 (TYPE_1__ const*) ;
 int* FUNC_3 (int) ;

__attribute__((used)) static WCHAR *FUNC_4( const tt_name_record *VAR_0, const BYTE *VAR_1 )
{
    WORD VAR_2 = FUNC_0(VAR_0->length);
    WORD VAR_3;
    WCHAR *VAR_4;
    int VAR_5;

    switch (FUNC_0(VAR_0->platform_id))
    {
    case 130:
    case 128:
        VAR_4 = FUNC_3((VAR_2 / 2 + 1) * sizeof(WCHAR));
        for (VAR_5 = 0; VAR_5 < VAR_2 / 2; VAR_5++)
            VAR_4[VAR_5] = (VAR_1[VAR_5 * 2] << 8) | VAR_1[VAR_5 * 2 + 1];
        VAR_4[VAR_5] = 0;
        return VAR_4;
    case 129:
        VAR_3 = FUNC_2( VAR_0 );
        VAR_5 = FUNC_1( VAR_3, 0, (char *)VAR_1, VAR_2, ((void*)0), 0 ) + 1;
        if (!VAR_5)
            return ((void*)0);
        VAR_4 = FUNC_3(VAR_5 * sizeof(WCHAR));
        VAR_5 = FUNC_1( VAR_3, 0, (char *)VAR_1, VAR_2, VAR_4, VAR_5 - 1 );
        VAR_4[VAR_5] = 0;
        return VAR_4;
    }
    return ((void*)0);
}
