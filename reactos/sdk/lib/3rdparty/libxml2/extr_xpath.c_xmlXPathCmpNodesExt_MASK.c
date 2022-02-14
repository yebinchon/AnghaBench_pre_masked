
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int type; scalar_t__ doc; struct TYPE_4__* next; scalar_t__ content; struct TYPE_4__* prev; struct TYPE_4__* parent; } ;
__attribute__((used)) static int
FUNC_0(xmlNodePtr VAR_0, xmlNodePtr VAR_1) {
    int VAR_2, VAR_3;
    int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
    xmlNodePtr VAR_7 = ((void*)0), VAR_8 = ((void*)0);
    xmlNodePtr VAR_9, VAR_10;
    ptrdiff_t VAR_11, VAR_12;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
 return(-2);

    if (VAR_0 == VAR_1)
 return(0);




    switch (VAR_0->type) {
 case 131:
     if (VAR_1->type == 131) {
  if ((0 > (ptrdiff_t) VAR_0->content) &&
      (0 > (ptrdiff_t) VAR_1->content) &&
      (VAR_0->doc == VAR_1->doc))
  {
      VAR_11 = -((ptrdiff_t) VAR_0->content);
      VAR_12 = -((ptrdiff_t) VAR_1->content);
      if (VAR_11 < VAR_12)
   return(1);
      if (VAR_11 > VAR_12)
   return(-1);
  } else
      goto turtle_comparison;
     }
     break;
 case 134:
     VAR_5 = 1;
     VAR_7 = VAR_0;
     VAR_0 = VAR_0->parent;
     VAR_4 = 1;
     break;
 case 128:
 case 133:
 case 132:
 case 129: {
     VAR_7 = VAR_0;



     if (VAR_0->prev != ((void*)0)) {
  do {
      VAR_0 = VAR_0->prev;
      if (VAR_0->type == 131) {
   VAR_5 = 3;
   break;
      }
      if (VAR_0->prev == ((void*)0)) {
   VAR_5 = 2;




   VAR_0 = VAR_0->parent;
   break;
      }
  } while (1);
     } else {
  VAR_5 = 2;
  VAR_0 = VAR_0->parent;
     }
     if ((VAR_0 == ((void*)0)) || (VAR_0->type != 131) ||
  (0 <= (ptrdiff_t) VAR_0->content)) {



  VAR_0 = VAR_7;
  VAR_5 = 0;
     } else
  VAR_4 = 1;
 }
     break;
 case 130:



     return(1);
 default:
     break;
    }
    switch (VAR_1->type) {
 case 131:
     break;
 case 134:
     VAR_6 = 1;
     VAR_8 = VAR_1;
     VAR_1 = VAR_1->parent;
     VAR_4 = 1;
     break;
 case 128:
 case 133:
 case 132:
 case 129: {
     VAR_8 = VAR_1;
     if (VAR_1->prev != ((void*)0)) {
  do {
      VAR_1 = VAR_1->prev;
      if (VAR_1->type == 131) {
   VAR_6 = 3;
   break;
      }
      if (VAR_1->prev == ((void*)0)) {
   VAR_6 = 2;
   VAR_1 = VAR_1->parent;
   break;
      }
  } while (1);
     } else {
  VAR_6 = 2;
  VAR_1 = VAR_1->parent;
     }
     if ((VAR_1 == ((void*)0)) || (VAR_1->type != 131) ||
  (0 <= (ptrdiff_t) VAR_1->content))
     {
  VAR_1 = VAR_8;
  VAR_6 = 0;
     } else
  VAR_4 = 1;
 }
     break;
 case 130:
     return(1);
 default:
     break;
    }
    if (VAR_4) {
 if (VAR_0 == VAR_1) {
     if (VAR_5 == VAR_6) {




  VAR_9 = VAR_8->prev;
  while (VAR_9 != ((void*)0)) {
      if (VAR_9 == VAR_7)
   return(1);
      if (VAR_9->type == 131)
   return(-1);
      VAR_9 = VAR_9->prev;
  }
  return (-1);
     } else {





  if (VAR_5 < VAR_6)
      return(1);
  else
      return(-1);
     }
 }
 if ((VAR_6 == 3) && (VAR_5 > 1)) {
     VAR_9 = VAR_0->parent;
     while (VAR_9) {
  if (VAR_9 == VAR_1)
      return(1);
  VAR_9 = VAR_9->parent;
     }
 }
 if ((VAR_5 == 3) && (VAR_6 > 1)) {
     VAR_9 = VAR_1->parent;
     while (VAR_9) {
  if (VAR_9 == VAR_0)
      return(-1);
  VAR_9 = VAR_9->parent;
     }
 }
    }




    if ((VAR_0->type == 131) &&
 (VAR_1->type == 131) &&
 (0 > (ptrdiff_t) VAR_0->content) &&
 (0 > (ptrdiff_t) VAR_1->content) &&
 (VAR_0->doc == VAR_1->doc)) {

 VAR_11 = -((ptrdiff_t) VAR_0->content);
 VAR_12 = -((ptrdiff_t) VAR_1->content);
 if (VAR_11 < VAR_12)
     return(1);
 if (VAR_11 > VAR_12)
     return(-1);
    }

turtle_comparison:

    if (VAR_0 == VAR_1->prev)
 return(1);
    if (VAR_0 == VAR_1->next)
 return(-1);



    for (VAR_3 = 0, VAR_9 = VAR_1; VAR_9->parent != ((void*)0); VAR_9 = VAR_9->parent) {
 if (VAR_9->parent == VAR_0)
     return(1);
 VAR_3++;
    }
    VAR_10 = VAR_9;
    for (VAR_2 = 0, VAR_9 = VAR_0; VAR_9->parent != ((void*)0); VAR_9 = VAR_9->parent) {
 if (VAR_9->parent == VAR_1)
     return(-1);
 VAR_2++;
    }



    if (VAR_10 != VAR_9) {
 return(-2);
    }



    while (VAR_2 > VAR_3) {
 VAR_2--;
 VAR_0 = VAR_0->parent;
    }
    while (VAR_3 > VAR_2) {
 VAR_3--;
 VAR_1 = VAR_1->parent;
    }
    while (VAR_0->parent != VAR_1->parent) {
 VAR_0 = VAR_0->parent;
 VAR_1 = VAR_1->parent;

 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
     return(-2);
    }



    if (VAR_0 == VAR_1->prev)
 return(1);
    if (VAR_0 == VAR_1->next)
 return(-1);



    if ((VAR_0->type == 131) &&
 (VAR_1->type == 131) &&
 (0 > (ptrdiff_t) VAR_0->content) &&
 (0 > (ptrdiff_t) VAR_1->content) &&
 (VAR_0->doc == VAR_1->doc)) {

 VAR_11 = -((ptrdiff_t) VAR_0->content);
 VAR_12 = -((ptrdiff_t) VAR_1->content);
 if (VAR_11 < VAR_12)
     return(1);
 if (VAR_11 > VAR_12)
     return(-1);
    }

    for (VAR_9 = VAR_0->next;VAR_9 != ((void*)0);VAR_9 = VAR_9->next)
 if (VAR_9 == VAR_1)
     return(1);
    return(-1);
}
