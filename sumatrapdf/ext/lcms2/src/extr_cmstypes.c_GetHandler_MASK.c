
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ cmsTagTypeSignature ;
struct TYPE_6__ {scalar_t__ Signature; } ;
typedef TYPE_1__ cmsTagTypeHandler ;
struct TYPE_7__ {TYPE_1__ Handler; struct TYPE_7__* Next; } ;
typedef TYPE_2__ _cmsTagTypeLinkedList ;



__attribute__((used)) static
cmsTagTypeHandler* FUNC_0(cmsTagTypeSignature VAR_0, _cmsTagTypeLinkedList* VAR_1, _cmsTagTypeLinkedList* VAR_2)
{
    _cmsTagTypeLinkedList* VAR_3;

    for (VAR_3 = VAR_1;
         VAR_3 != ((void*)0);
         VAR_3 = VAR_3 ->Next) {

            if (VAR_0 == VAR_3 -> Handler.Signature) return &VAR_3 ->Handler;
    }

    for (VAR_3 = VAR_2;
         VAR_3 != ((void*)0);
         VAR_3 = VAR_3 ->Next) {

            if (VAR_0 == VAR_3 -> Handler.Signature) return &VAR_3 ->Handler;
    }

    return ((void*)0);
}
