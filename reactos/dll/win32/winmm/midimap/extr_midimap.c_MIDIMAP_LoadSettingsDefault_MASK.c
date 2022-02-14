
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int ** ChannelMap; } ;
typedef TYPE_1__ MIDIMAPDATA ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*,unsigned int*) ;
 int VAR_1 ;
 int * VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static BOOL FUNC_3(MIDIMAPDATA* VAR_4, const WCHAR* VAR_5)
{
    unsigned VAR_6, VAR_7 = 0;

    if (VAR_5 != ((void*)0) && !FUNC_1(VAR_5, &VAR_7))
    {
 FUNC_0("Registry glitch: couldn't find midi out (%s)\n", FUNC_2(VAR_5));
 VAR_7 = 0;
    }


    if (VAR_7 >= VAR_3)
 return VAR_0;

    for (VAR_6 = 0; VAR_6 < 16; VAR_6++) VAR_4->ChannelMap[VAR_6] = &VAR_2[VAR_7];

    return VAR_1;
}
