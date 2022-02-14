
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int FormattersFactory; } ;
typedef TYPE_1__ cmsPluginFormatters ;
typedef int cmsPluginBase ;
struct TYPE_5__ {struct TYPE_5__* Next; int Factory; } ;
typedef TYPE_2__ cmsFormattersFactoryList ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_6__ {TYPE_2__* FactoryList; } ;
typedef TYPE_3__ _cmsFormattersPluginChunkType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

cmsBool FUNC_2(cmsContext VAR_3, cmsPluginBase* VAR_4)
{
    _cmsFormattersPluginChunkType* VAR_5 = ( _cmsFormattersPluginChunkType*) FUNC_0(VAR_3, VAR_1);
    cmsPluginFormatters* VAR_6 = (cmsPluginFormatters*) VAR_4;
    cmsFormattersFactoryList* VAR_7 ;


    if (VAR_4 == ((void*)0)) {

          VAR_5 ->FactoryList = ((void*)0);
          return VAR_2;
    }

    VAR_7 = (cmsFormattersFactoryList*) FUNC_1(VAR_3, sizeof(cmsFormattersFactoryList));
    if (VAR_7 == ((void*)0)) return VAR_0;

    VAR_7 ->Factory = VAR_6 ->FormattersFactory;

    VAR_7 ->Next = VAR_5 -> FactoryList;
    VAR_5 ->FactoryList = VAR_7;

    return VAR_2;
}
