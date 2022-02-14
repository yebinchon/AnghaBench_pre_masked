
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
typedef TYPE_2__* xmlDictEntryPtr ;
typedef int xmlDictEntry ;
typedef int xmlChar ;
struct TYPE_10__ {scalar_t__ valid; unsigned long okey; unsigned int len; struct TYPE_10__* next; int const* name; } ;
struct TYPE_9__ {unsigned long size; int nbElems; TYPE_2__* dict; struct TYPE_9__* subdict; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int FUNC_0 (char const*) ;
 int * FUNC_1 (TYPE_1__*,int const*,unsigned int,int const*,unsigned int) ;
 unsigned long FUNC_2 (TYPE_1__*,int const*,unsigned int,int const*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned long) ;
 int const* FUNC_4 (TYPE_1__*,int const*,int) ;
 TYPE_2__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int const*,int const*,int const*) ;

const xmlChar *
FUNC_7(xmlDictPtr VAR_3, const xmlChar *VAR_4, const xmlChar *VAR_5) {
    unsigned long VAR_6, VAR_7, VAR_8 = 0;
    xmlDictEntryPtr VAR_9;
    xmlDictEntryPtr VAR_10;
    const xmlChar *VAR_11;
    unsigned int VAR_12, VAR_13, VAR_14;

    if ((VAR_3 == ((void*)0)) || (VAR_5 == ((void*)0)))
 return(((void*)0));
    if (VAR_4 == ((void*)0))
        return(FUNC_4(VAR_3, VAR_5, -1));

    VAR_14 = VAR_12 = FUNC_0((const char *) VAR_5);
    VAR_13 = FUNC_0((const char *) VAR_4);
    VAR_12 += 1 + VAR_13;




    VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_13, VAR_5, VAR_14);
    VAR_7 = VAR_6 % VAR_3->size;
    if (VAR_3->dict[VAR_7].valid == 0) {
 VAR_10 = ((void*)0);
    } else {
 for (VAR_10 = &(VAR_3->dict[VAR_7]); VAR_10->next != ((void*)0);
      VAR_10 = VAR_10->next) {
     if ((VAR_10->okey == VAR_6) && (VAR_10->len == VAR_12) &&
         (FUNC_6(VAR_4, VAR_5, VAR_10->name)))
  return(VAR_10->name);
     VAR_8++;
 }
 if ((VAR_10->okey == VAR_6) && (VAR_10->len == VAR_12) &&
     (FUNC_6(VAR_4, VAR_5, VAR_10->name)))
     return(VAR_10->name);
    }

    if (VAR_3->subdict) {
        unsigned long VAR_15;


        if (((VAR_3->size == VAR_2) &&
      (VAR_3->subdict->size != VAR_2)) ||
            ((VAR_3->size != VAR_2) &&
      (VAR_3->subdict->size == VAR_2)))
     VAR_15 = FUNC_2(VAR_3->subdict, VAR_4, VAR_13, VAR_5, VAR_14);
 else
     VAR_15 = VAR_6;

 VAR_7 = VAR_15 % VAR_3->subdict->size;
 if (VAR_3->subdict->dict[VAR_7].valid != 0) {
     xmlDictEntryPtr VAR_16;
     for (VAR_16 = &(VAR_3->subdict->dict[VAR_7]); VAR_16->next != ((void*)0);
   VAR_16 = VAR_16->next) {
  if ((VAR_16->okey == VAR_15) && (VAR_16->len == VAR_12) &&
      (FUNC_6(VAR_4, VAR_5, VAR_16->name)))
      return(VAR_16->name);
  VAR_8++;
     }
     if ((VAR_16->okey == VAR_15) && (VAR_16->len == VAR_12) &&
  (FUNC_6(VAR_4, VAR_5, VAR_16->name)))
  return(VAR_16->name);
 }
 VAR_7 = VAR_6 % VAR_3->size;
    }

    VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_13, VAR_5, VAR_14);
    if (VAR_11 == ((void*)0))
        return(((void*)0));
    if (VAR_10 == ((void*)0)) {
 VAR_9 = &(VAR_3->dict[VAR_7]);
    } else {
 VAR_9 = FUNC_5(sizeof(xmlDictEntry));
 if (VAR_9 == ((void*)0))
      return(((void*)0));
    }
    VAR_9->name = VAR_11;
    VAR_9->len = VAR_12;
    VAR_9->next = ((void*)0);
    VAR_9->valid = 1;
    VAR_9->okey = VAR_6;

    if (VAR_10 != ((void*)0))
 VAR_10->next = VAR_9;

    VAR_3->nbElems++;

    if ((VAR_8 > VAR_1) &&
        (VAR_3->size <= ((VAR_0 / 2) / VAR_1)))
 FUNC_3(VAR_3, VAR_1 * 2 * VAR_3->size);


    return(VAR_11);
}
