
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ cmsTagSignature ;
typedef int cmsTagDescriptor ;
typedef int cmsContext ;
struct TYPE_4__ {TYPE_2__* Tag; } ;
typedef TYPE_1__ _cmsTagPluginChunkType ;
struct TYPE_5__ {scalar_t__ Signature; int Descriptor; struct TYPE_5__* Next; } ;
typedef TYPE_2__ _cmsTagLinkedList ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

cmsTagDescriptor* FUNC_1(cmsContext VAR_2, cmsTagSignature VAR_3)
{
    _cmsTagLinkedList* VAR_4;
    _cmsTagPluginChunkType* VAR_5 = ( _cmsTagPluginChunkType*) FUNC_0(VAR_2, VAR_1);

    for (VAR_4 = VAR_5->Tag;
             VAR_4 != ((void*)0);
             VAR_4 = VAR_4 ->Next) {

                if (VAR_3 == VAR_4 -> Signature) return &VAR_4 ->Descriptor;
    }

    for (VAR_4 = VAR_0;
            VAR_4 != ((void*)0);
            VAR_4 = VAR_4 ->Next) {

                if (VAR_3 == VAR_4 -> Signature) return &VAR_4 ->Descriptor;
    }

    return ((void*)0);
}
