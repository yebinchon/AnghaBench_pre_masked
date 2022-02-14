
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Descriptor; int Signature; } ;
typedef TYPE_1__ cmsPluginTag ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {TYPE_3__* Tag; } ;
typedef TYPE_2__ _cmsTagPluginChunkType ;
struct TYPE_6__ {struct TYPE_6__* Next; int Descriptor; int Signature; } ;
typedef TYPE_3__ _cmsTagLinkedList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

cmsBool FUNC_2(cmsContext VAR_3, cmsPluginBase* VAR_4)
{
    cmsPluginTag* VAR_5 = (cmsPluginTag*) VAR_4;
    _cmsTagLinkedList *VAR_6;
    _cmsTagPluginChunkType* VAR_7 = ( _cmsTagPluginChunkType*) FUNC_0(VAR_3, VAR_2);

    if (VAR_4 == ((void*)0)) {

        VAR_7->Tag = ((void*)0);
        return VAR_1;
    }

    VAR_6 = (_cmsTagLinkedList*) FUNC_1(VAR_3, sizeof(_cmsTagLinkedList));
    if (VAR_6 == ((void*)0)) return VAR_0;

    VAR_6 ->Signature = VAR_5 ->Signature;
    VAR_6 ->Descriptor = VAR_5 ->Descriptor;
    VAR_6 ->Next = VAR_7 ->Tag;

    VAR_7 ->Tag = VAR_6;

    return VAR_1;
}
