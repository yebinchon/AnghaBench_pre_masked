
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsTagTypeSignature ;
typedef int cmsTagTypeHandler ;
typedef int cmsContext ;
struct TYPE_2__ {int TagTypes; } ;
typedef TYPE_1__ _cmsTagTypePluginChunkType ;
typedef int _cmsTagTypeLinkedList ;


 int * FUNC_0 (int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

cmsTagTypeHandler* FUNC_2(cmsContext VAR_2, cmsTagTypeSignature VAR_3)
{
    _cmsTagTypePluginChunkType* VAR_4 = ( _cmsTagTypePluginChunkType*) FUNC_1(VAR_2, VAR_1);

    return FUNC_0(VAR_3, VAR_4->TagTypes, (_cmsTagTypeLinkedList*) VAR_0);
}
