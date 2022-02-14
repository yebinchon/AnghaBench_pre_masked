
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Handler; } ;
typedef TYPE_1__ cmsPluginTagType ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {TYPE_3__* TagTypes; } ;
typedef TYPE_2__ _cmsTagTypePluginChunkType ;
struct TYPE_6__ {struct TYPE_6__* Next; int Handler; } ;
typedef TYPE_3__ _cmsTagTypeLinkedList ;
typedef int _cmsMemoryClient ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, cmsPluginBase* VAR_3, _cmsMemoryClient VAR_4)
{
    cmsPluginTagType* VAR_5 = (cmsPluginTagType*) VAR_3;
    _cmsTagTypePluginChunkType* VAR_6 = ( _cmsTagTypePluginChunkType*) FUNC_0(VAR_2, VAR_4);
    _cmsTagTypeLinkedList *VAR_7;


    if (VAR_3 == ((void*)0)) {


        VAR_6 ->TagTypes = ((void*)0);
        return VAR_1;
    }


    VAR_7 = (_cmsTagTypeLinkedList*) FUNC_1(VAR_2, sizeof(_cmsTagTypeLinkedList));
    if (VAR_7 == ((void*)0)) return VAR_0;

    VAR_7 ->Handler = VAR_5 ->Handler;
    VAR_7 ->Next = VAR_6 ->TagTypes;

    VAR_6 ->TagTypes = VAR_7;

    return VAR_1;
}
