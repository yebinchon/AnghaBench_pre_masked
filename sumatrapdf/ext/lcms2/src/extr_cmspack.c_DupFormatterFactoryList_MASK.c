
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _cmsContext_struct {int MemPool; scalar_t__* chunks; } ;
struct TYPE_4__ {struct TYPE_4__* FactoryList; struct TYPE_4__* Next; int * member_0; } ;
typedef TYPE_1__ cmsFormattersFactoryList ;
typedef TYPE_1__ _cmsFormattersPluginChunkType ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int) ;

__attribute__((used)) static
void FUNC_2(struct _cmsContext_struct* VAR_1,
                                               const struct _cmsContext_struct* VAR_2)
{
   _cmsFormattersPluginChunkType VAR_3 = { ((void*)0) };
   cmsFormattersFactoryList* VAR_4;
   cmsFormattersFactoryList* VAR_5 = ((void*)0);
   _cmsFormattersPluginChunkType* VAR_6 = (_cmsFormattersPluginChunkType*) VAR_2->chunks[VAR_0];

     FUNC_0(VAR_6 != ((void*)0));


   for (VAR_4 = VAR_6->FactoryList;
       VAR_4 != ((void*)0);
       VAR_4 = VAR_4 ->Next) {

           cmsFormattersFactoryList *VAR_7 = ( cmsFormattersFactoryList *) FUNC_1(VAR_1 ->MemPool, VAR_4, sizeof(cmsFormattersFactoryList));

           if (VAR_7 == ((void*)0))
               return;


           VAR_7 -> Next = ((void*)0);
           if (VAR_5)
               VAR_5 -> Next = VAR_7;

           VAR_5 = VAR_7;

           if (VAR_3.FactoryList == ((void*)0))
               VAR_3.FactoryList = VAR_7;
   }

   VAR_1 ->chunks[VAR_0] = FUNC_1(VAR_1->MemPool, &VAR_3, sizeof(_cmsFormattersPluginChunkType));
}
