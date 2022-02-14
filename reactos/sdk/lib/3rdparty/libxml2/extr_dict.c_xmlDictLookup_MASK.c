
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
typedef TYPE_2__* xmlDictEntryPtr ;
typedef int xmlDictEntry ;
typedef int xmlChar ;
struct TYPE_9__ {scalar_t__ valid; unsigned long okey; unsigned int len; struct TYPE_9__* next; int const* name; } ;
struct TYPE_8__ {unsigned int limit; unsigned long size; int nbElems; TYPE_2__* dict; struct TYPE_8__* subdict; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_1 (char const*) ;
 int * FUNC_2 (TYPE_1__*,int const*,unsigned int) ;
 unsigned long FUNC_3 (TYPE_1__*,int const*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned long) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (int const*,int const*,unsigned int) ;

const xmlChar *
FUNC_7(xmlDictPtr VAR_4, const xmlChar *VAR_5, int VAR_6) {
    unsigned long VAR_7, VAR_8, VAR_9 = 0;
    xmlDictEntryPtr VAR_10;
    xmlDictEntryPtr VAR_11;
    const xmlChar *VAR_12;
    unsigned int VAR_13;

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
 return(((void*)0));

    if (VAR_6 < 0)
        VAR_13 = FUNC_1((const char *) VAR_5);
    else
        VAR_13 = VAR_6;

    if (((VAR_4->limit > 0) && (VAR_13 >= VAR_4->limit)) ||
        (VAR_13 > VAR_0 / 2))
        return(((void*)0));




    VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_13);
    VAR_7 = VAR_8 % VAR_4->size;
    if (VAR_4->dict[VAR_7].valid == 0) {
 VAR_11 = ((void*)0);
    } else {
 for (VAR_11 = &(VAR_4->dict[VAR_7]); VAR_11->next != ((void*)0);
      VAR_11 = VAR_11->next) {

     if ((VAR_11->okey == VAR_8) && (VAR_11->len == VAR_13)) {
  if (!FUNC_0(VAR_11->name, VAR_5, VAR_13))
      return(VAR_11->name);
     }





     VAR_9++;
 }

 if ((VAR_11->okey == VAR_8) && (VAR_11->len == VAR_13)) {
     if (!FUNC_0(VAR_11->name, VAR_5, VAR_13))
  return(VAR_11->name);
 }





    }

    if (VAR_4->subdict) {
        unsigned long VAR_14;


        if (((VAR_4->size == VAR_3) &&
      (VAR_4->subdict->size != VAR_3)) ||
            ((VAR_4->size != VAR_3) &&
      (VAR_4->subdict->size == VAR_3)))
     VAR_14 = FUNC_3(VAR_4->subdict, VAR_5, VAR_13);
 else
     VAR_14 = VAR_8;

 VAR_7 = VAR_14 % VAR_4->subdict->size;
 if (VAR_4->subdict->dict[VAR_7].valid != 0) {
     xmlDictEntryPtr VAR_15;

     for (VAR_15 = &(VAR_4->subdict->dict[VAR_7]); VAR_15->next != ((void*)0);
   VAR_15 = VAR_15->next) {

  if ((VAR_15->okey == VAR_14) && (VAR_15->len == VAR_13)) {
      if (!FUNC_0(VAR_15->name, VAR_5, VAR_13))
   return(VAR_15->name);
  }





  VAR_9++;
     }

     if ((VAR_15->okey == VAR_14) && (VAR_15->len == VAR_13)) {
  if (!FUNC_0(VAR_15->name, VAR_5, VAR_13))
      return(VAR_15->name);
     }





 }
 VAR_7 = VAR_8 % VAR_4->size;
    }

    VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_13);
    if (VAR_12 == ((void*)0))
        return(((void*)0));
    if (VAR_11 == ((void*)0)) {
 VAR_10 = &(VAR_4->dict[VAR_7]);
    } else {
 VAR_10 = FUNC_5(sizeof(xmlDictEntry));
 if (VAR_10 == ((void*)0))
      return(((void*)0));
    }
    VAR_10->name = VAR_12;
    VAR_10->len = VAR_13;
    VAR_10->next = ((void*)0);
    VAR_10->valid = 1;
    VAR_10->okey = VAR_8;


    if (VAR_11 != ((void*)0))
 VAR_11->next = VAR_10;

    VAR_4->nbElems++;

    if ((VAR_9 > VAR_2) &&
        (VAR_4->size <= ((VAR_1 / 2) / VAR_2))) {
 if (FUNC_4(VAR_4, VAR_2 * 2 * VAR_4->size) != 0)
     return(((void*)0));
    }


    return(VAR_12);
}
