
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
struct TYPE_5__ {scalar_t__ Intent; struct TYPE_5__* Next; } ;
typedef TYPE_1__ cmsIntentsList ;
typedef int cmsContext ;
struct TYPE_6__ {TYPE_1__* Intents; } ;
typedef TYPE_2__ _cmsIntentsPluginChunkType ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
cmsIntentsList* FUNC_1(cmsContext VAR_2, cmsUInt32Number VAR_3)
{
    _cmsIntentsPluginChunkType* VAR_4 = ( _cmsIntentsPluginChunkType*) FUNC_0(VAR_2, VAR_1);
    cmsIntentsList* VAR_5;

    for (VAR_5 = VAR_4 -> Intents; VAR_5 != ((void*)0); VAR_5 = VAR_5 -> Next)
        if (VAR_5 ->Intent == VAR_3) return VAR_5;

    for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5 -> Next)
        if (VAR_5 ->Intent == VAR_3) return VAR_5;

    return ((void*)0);
}
