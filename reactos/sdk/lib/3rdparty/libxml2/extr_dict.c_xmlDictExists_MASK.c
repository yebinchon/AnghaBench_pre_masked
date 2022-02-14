
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
typedef TYPE_2__* xmlDictEntryPtr ;
typedef int xmlChar ;
struct TYPE_6__ {scalar_t__ valid; unsigned long okey; unsigned int len; int const* name; struct TYPE_6__* next; } ;
struct TYPE_5__ {unsigned int limit; unsigned long size; TYPE_2__* dict; struct TYPE_5__* subdict; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_1 (char const*) ;
 unsigned long FUNC_2 (TYPE_1__*,int const*,unsigned int) ;
 int FUNC_3 (int const*,int const*,unsigned int) ;

const xmlChar *
FUNC_4(xmlDictPtr VAR_2, const xmlChar *VAR_3, int VAR_4) {
    unsigned long VAR_5, VAR_6, VAR_7 = 0;
    xmlDictEntryPtr VAR_8;
    unsigned int VAR_9;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
 return(((void*)0));

    if (VAR_4 < 0)
        VAR_9 = FUNC_1((const char *) VAR_3);
    else
        VAR_9 = VAR_4;
    if (((VAR_2->limit > 0) && (VAR_9 >= VAR_2->limit)) ||
        (VAR_9 > VAR_0 / 2))
        return(((void*)0));




    VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_9);
    VAR_5 = VAR_6 % VAR_2->size;
    if (VAR_2->dict[VAR_5].valid == 0) {
 VAR_8 = ((void*)0);
    } else {
 for (VAR_8 = &(VAR_2->dict[VAR_5]); VAR_8->next != ((void*)0);
      VAR_8 = VAR_8->next) {

     if ((VAR_8->okey == VAR_6) && (VAR_8->len == VAR_9)) {
  if (!FUNC_0(VAR_8->name, VAR_3, VAR_9))
      return(VAR_8->name);
     }





     VAR_7++;
 }

 if ((VAR_8->okey == VAR_6) && (VAR_8->len == VAR_9)) {
     if (!FUNC_0(VAR_8->name, VAR_3, VAR_9))
  return(VAR_8->name);
 }





    }

    if (VAR_2->subdict) {
        unsigned long VAR_10;


        if (((VAR_2->size == VAR_1) &&
      (VAR_2->subdict->size != VAR_1)) ||
            ((VAR_2->size != VAR_1) &&
      (VAR_2->subdict->size == VAR_1)))
     VAR_10 = FUNC_2(VAR_2->subdict, VAR_3, VAR_9);
 else
     VAR_10 = VAR_6;

 VAR_5 = VAR_10 % VAR_2->subdict->size;
 if (VAR_2->subdict->dict[VAR_5].valid != 0) {
     xmlDictEntryPtr VAR_11;

     for (VAR_11 = &(VAR_2->subdict->dict[VAR_5]); VAR_11->next != ((void*)0);
   VAR_11 = VAR_11->next) {

  if ((VAR_11->okey == VAR_10) && (VAR_11->len == VAR_9)) {
      if (!FUNC_0(VAR_11->name, VAR_3, VAR_9))
   return(VAR_11->name);
  }





  VAR_7++;
     }

     if ((VAR_11->okey == VAR_10) && (VAR_11->len == VAR_9)) {
  if (!FUNC_0(VAR_11->name, VAR_3, VAR_9))
      return(VAR_11->name);
     }





 }
    }


    return(((void*)0));
}
