
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _cmsContext_struct {int MemPool; scalar_t__* chunks; } ;
struct TYPE_4__ {struct TYPE_4__* Tag; struct TYPE_4__* Next; int * member_0; } ;
typedef TYPE_1__ _cmsTagPluginChunkType ;
typedef TYPE_1__ _cmsTagLinkedList ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int) ;

__attribute__((used)) static
void FUNC_1(struct _cmsContext_struct* VAR_1,
                    const struct _cmsContext_struct* VAR_2)
{
   _cmsTagPluginChunkType VAR_3 = { ((void*)0) };
   _cmsTagLinkedList* VAR_4;
   _cmsTagLinkedList* VAR_5 = ((void*)0);
   _cmsTagPluginChunkType* VAR_6 = (_cmsTagPluginChunkType*) VAR_2->chunks[VAR_0];


   for (VAR_4 = VAR_6->Tag;
       VAR_4 != ((void*)0);
       VAR_4 = VAR_4 ->Next) {

           _cmsTagLinkedList *VAR_7 = ( _cmsTagLinkedList *) FUNC_0(VAR_1 ->MemPool, VAR_4, sizeof(_cmsTagLinkedList));

           if (VAR_7 == ((void*)0))
               return;


           VAR_7 -> Next = ((void*)0);
           if (VAR_5)
               VAR_5 -> Next = VAR_7;

           VAR_5 = VAR_7;

           if (VAR_3.Tag == ((void*)0))
               VAR_3.Tag = VAR_7;
   }

   VAR_1 ->chunks[VAR_0] = FUNC_0(VAR_1->MemPool, &VAR_3, sizeof(_cmsTagPluginChunkType));
}
