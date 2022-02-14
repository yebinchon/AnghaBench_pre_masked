
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
typedef struct _xmlDictEntry* xmlDictEntryPtr ;
typedef int xmlDictEntry ;
struct _xmlDictEntry {scalar_t__ valid; unsigned long okey; struct _xmlDictEntry* next; int len; int name; } ;
struct TYPE_4__ {size_t size; struct _xmlDictEntry* dict; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct _xmlDictEntry*,struct _xmlDictEntry*,int) ;
 int FUNC_2 (struct _xmlDictEntry*,int ,size_t) ;
 int VAR_1 ;
 unsigned long FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct _xmlDictEntry*) ;
 int FUNC_5 (int ,char*,size_t,size_t,unsigned long) ;
 int VAR_2 ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(xmlDictPtr VAR_3, size_t VAR_4) {
    unsigned long VAR_5, VAR_6;
    size_t VAR_7, VAR_8;
    xmlDictEntryPtr VAR_9, VAR_10;
    struct _xmlDictEntry *VAR_11;



    int VAR_12 = 0;
    int VAR_13 = 1;

    if (VAR_3 == ((void*)0))
 return(-1);
    if (VAR_4 < 8)
        return(-1);
    if (VAR_4 > 8 * 2048)
 return(-1);





    VAR_7 = VAR_3->size;
    VAR_11 = VAR_3->dict;
    if (VAR_11 == ((void*)0))
        return(-1);
    if (VAR_7 == VAR_0)
        VAR_13 = 0;

    VAR_3->dict = FUNC_6(VAR_4 * sizeof(xmlDictEntry));
    if (VAR_3->dict == ((void*)0)) {
 VAR_3->dict = VAR_11;
 return(-1);
    }
    FUNC_2(VAR_3->dict, 0, VAR_4 * sizeof(xmlDictEntry));
    VAR_3->size = VAR_4;







    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
 if (VAR_11[VAR_8].valid == 0)
     continue;

 if (VAR_13)
     VAR_6 = VAR_11[VAR_8].okey;
 else
     VAR_6 = FUNC_3(VAR_3, VAR_11[VAR_8].name, VAR_11[VAR_8].len);
 VAR_5 = VAR_6 % VAR_3->size;

 if (VAR_3->dict[VAR_5].valid == 0) {
     FUNC_1(&(VAR_3->dict[VAR_5]), &(VAR_11[VAR_8]), sizeof(xmlDictEntry));
     VAR_3->dict[VAR_5].next = ((void*)0);
     VAR_3->dict[VAR_5].okey = VAR_6;
 } else {
     xmlDictEntryPtr VAR_14;

     VAR_14 = FUNC_6(sizeof(xmlDictEntry));
     if (VAR_14 != ((void*)0)) {
  VAR_14->name = VAR_11[VAR_8].name;
  VAR_14->len = VAR_11[VAR_8].len;
  VAR_14->okey = VAR_6;
  VAR_14->next = VAR_3->dict[VAR_5].next;
  VAR_14->valid = 1;
  VAR_3->dict[VAR_5].next = VAR_14;
     } else {




         VAR_12 = -1;
     }
 }



    }

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
 VAR_9 = VAR_11[VAR_8].next;
 while (VAR_9) {
     VAR_10 = VAR_9->next;





     if (VAR_13)
  VAR_6 = VAR_9->okey;
     else
  VAR_6 = FUNC_3(VAR_3, VAR_9->name, VAR_9->len);
     VAR_5 = VAR_6 % VAR_3->size;
     if (VAR_3->dict[VAR_5].valid == 0) {
  FUNC_1(&(VAR_3->dict[VAR_5]), VAR_9, sizeof(xmlDictEntry));
  VAR_3->dict[VAR_5].next = ((void*)0);
  VAR_3->dict[VAR_5].valid = 1;
  VAR_3->dict[VAR_5].okey = VAR_6;
  FUNC_4(VAR_9);
     } else {
  VAR_9->next = VAR_3->dict[VAR_5].next;
  VAR_9->okey = VAR_6;
  VAR_3->dict[VAR_5].next = VAR_9;
     }





     VAR_9 = VAR_10;
 }
    }

    FUNC_4(VAR_11);






    return(VAR_12);
}
