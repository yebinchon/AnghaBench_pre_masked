
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _cmsContext_struct {int MemPool; scalar_t__* chunks; } ;
struct TYPE_4__ {struct TYPE_4__* TagTypes; struct TYPE_4__* Next; int * member_0; } ;
typedef TYPE_1__ _cmsTagTypePluginChunkType ;
typedef TYPE_1__ _cmsTagTypeLinkedList ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int) ;

__attribute__((used)) static
void FUNC_1(struct _cmsContext_struct* VAR_0,
                    const struct _cmsContext_struct* VAR_1,
                    int VAR_2)
{
   _cmsTagTypePluginChunkType VAR_3 = { ((void*)0) };
   _cmsTagTypeLinkedList* VAR_4;
   _cmsTagTypeLinkedList* VAR_5 = ((void*)0);
   _cmsTagTypePluginChunkType* VAR_6 = (_cmsTagTypePluginChunkType*) VAR_1->chunks[VAR_2];


   for (VAR_4 = VAR_6->TagTypes;
       VAR_4 != ((void*)0);
       VAR_4 = VAR_4 ->Next) {

           _cmsTagTypeLinkedList *VAR_7 = ( _cmsTagTypeLinkedList *) FUNC_0(VAR_0 ->MemPool, VAR_4, sizeof(_cmsTagTypeLinkedList));

           if (VAR_7 == ((void*)0))
               return;


           VAR_7 -> Next = ((void*)0);
           if (VAR_5)
               VAR_5 -> Next = VAR_7;

           VAR_5 = VAR_7;

           if (VAR_3.TagTypes == ((void*)0))
               VAR_3.TagTypes = VAR_7;
   }

   VAR_0 ->chunks[VAR_2] = FUNC_0(VAR_0->MemPool, &VAR_3, sizeof(_cmsTagTypePluginChunkType));
}
