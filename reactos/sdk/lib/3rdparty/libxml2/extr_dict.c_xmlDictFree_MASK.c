
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlDictStringsPtr ;
typedef TYPE_1__* xmlDictPtr ;
typedef TYPE_1__* xmlDictEntryPtr ;
struct TYPE_6__ {scalar_t__ ref_counter; size_t size; scalar_t__ nbElems; scalar_t__ valid; struct TYPE_6__* next; struct TYPE_6__* strings; struct TYPE_6__* dict; struct TYPE_6__* subdict; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(xmlDictPtr VAR_2) {
    size_t VAR_3;
    xmlDictEntryPtr VAR_4;
    xmlDictEntryPtr VAR_5;
    int VAR_6 = 0;
    xmlDictStringsPtr VAR_7, VAR_8;

    if (VAR_2 == ((void*)0))
 return;

    if (!VAR_0)
        if (!FUNC_0())
            return;


    FUNC_2(VAR_1);
    VAR_2->ref_counter--;
    if (VAR_2->ref_counter > 0) {
        FUNC_3(VAR_1);
        return;
    }

    FUNC_3(VAR_1);

    if (VAR_2->subdict != ((void*)0)) {
        FUNC_4(VAR_2->subdict);
    }

    if (VAR_2->dict) {
 for(VAR_3 = 0; ((VAR_3 < VAR_2->size) && (VAR_2->nbElems > 0)); VAR_3++) {
     VAR_4 = &(VAR_2->dict[VAR_3]);
     if (VAR_4->valid == 0)
  continue;
     VAR_6 = 1;
     while (VAR_4) {
  VAR_5 = VAR_4->next;
  if (!VAR_6)
      FUNC_1(VAR_4);
  VAR_2->nbElems--;
  VAR_6 = 0;
  VAR_4 = VAR_5;
     }
 }
 FUNC_1(VAR_2->dict);
    }
    VAR_7 = VAR_2->strings;
    while (VAR_7 != ((void*)0)) {
        VAR_8 = VAR_7->next;
 FUNC_1(VAR_7);
 VAR_7 = VAR_8;
    }
    FUNC_1(VAR_2);
}
