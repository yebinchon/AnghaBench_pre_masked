
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int classesW ;
struct TYPE_7__ {char member_0; char member_1; char member_2; char member_3; char member_4; char member_5; char member_6; char member_7; char member_8; char member_9; char member_10; char member_11; char member_12; char member_13; char member_14; char member_15; char member_16; char member_17; int member_18; } ;
typedef TYPE_1__ WCHAR ;
typedef TYPE_1__ const* LPCWSTR ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;

LPCWSTR FUNC_1( const WCHAR *VAR_0 )
{
    static const WCHAR VAR_1[][20] =
    {
        {'C','o','m','b','o','B','o','x','E','x','3','2',0},
        {'m','s','c','t','l','s','_','h','o','t','k','e','y','3','2',0},
        {'m','s','c','t','l','s','_','p','r','o','g','r','e','s','s','3','2',0},
        {'m','s','c','t','l','s','_','s','t','a','t','u','s','b','a','r','3','2',0},
        {'m','s','c','t','l','s','_','t','r','a','c','k','b','a','r','3','2',0},
        {'m','s','c','t','l','s','_','u','p','d','o','w','n','3','2',0},
        {'N','a','t','i','v','e','F','o','n','t','C','t','l',0},
        {'R','e','B','a','r','W','i','n','d','o','w','3','2',0},
        {'S','y','s','A','n','i','m','a','t','e','3','2',0},
        {'S','y','s','D','a','t','e','T','i','m','e','P','i','c','k','3','2',0},
        {'S','y','s','H','e','a','d','e','r','3','2',0},
        {'S','y','s','I','P','A','d','d','r','e','s','s','3','2',0},
        {'S','y','s','L','i','s','t','V','i','e','w','3','2',0},
        {'S','y','s','M','o','n','t','h','C','a','l','3','2',0},
        {'S','y','s','P','a','g','e','r',0},
        {'S','y','s','T','a','b','C','o','n','t','r','o','l','3','2',0},
        {'S','y','s','T','r','e','e','V','i','e','w','3','2',0},
        {'T','o','o','l','b','a','r','W','i','n','d','o','w','3','2',0},
        {'t','o','o','l','t','i','p','s','_','c','l','a','s','s','3','2',0},
    };

    int VAR_2 = 0, VAR_3 = (sizeof(VAR_1) / sizeof(VAR_1[0])) - 1;

    while (VAR_2 <= VAR_3)
    {
        int VAR_4, VAR_5 = (VAR_2 + VAR_3) / 2;
        if (!(VAR_4 = FUNC_0( VAR_0, VAR_1[VAR_5] ))) return VAR_1[VAR_5];
        if (VAR_4 < 0) VAR_3 = VAR_5 - 1;
        else VAR_2 = VAR_5 + 1;
    }
    return ((void*)0);
}
