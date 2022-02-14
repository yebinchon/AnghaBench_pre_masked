
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef TYPE_2__* xmlEntityPtr ;
typedef int xmlDoc ;
typedef char xmlChar ;
typedef int * xmlBufPtr ;
struct TYPE_12__ {scalar_t__ etype; char* content; int owner; TYPE_1__* last; TYPE_1__* children; } ;
struct TYPE_11__ {void* content; struct TYPE_11__* next; struct TYPE_11__* parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (int ) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 TYPE_2__* FUNC_10 (int const*,char*) ;
 TYPE_1__* FUNC_11 (int const*,int *) ;
 TYPE_1__* FUNC_12 (int const*,char*) ;
 char* FUNC_13 (char const*,int) ;
 int FUNC_14 (int ,TYPE_1__*,char const*) ;

xmlNodePtr
FUNC_15(const xmlDoc *VAR_5, const xmlChar *VAR_6) {
    xmlNodePtr VAR_7 = ((void*)0), VAR_8 = ((void*)0);
    xmlNodePtr VAR_9;
    xmlChar *VAR_10;
    const xmlChar *VAR_11 = VAR_6;
    const xmlChar *VAR_12;
    xmlEntityPtr VAR_13;
    xmlBufPtr VAR_14;

    if (VAR_6 == ((void*)0)) return(((void*)0));

    VAR_14 = FUNC_3(0);
    if (VAR_14 == ((void*)0)) return(((void*)0));
    FUNC_7(VAR_14, VAR_0);

    VAR_12 = VAR_11;
    while (*VAR_11 != 0) {
 if (VAR_11[0] == '&') {
     int VAR_15 = 0;
     xmlChar VAR_16;




            if (VAR_11 != VAR_12) {
  if (FUNC_1(VAR_14, VAR_12, VAR_11 - VAR_12))
      goto out;
     }
     VAR_12 = VAR_11;
     if ((VAR_11[1] == '#') && (VAR_11[2] == 'x')) {
  VAR_11 += 3;
  VAR_16 = *VAR_11;
  while (VAR_16 != ';') {
      if ((VAR_16 >= '0') && (VAR_16 <= '9'))
   VAR_15 = VAR_15 * 16 + (VAR_16 - '0');
      else if ((VAR_16 >= 'a') && (VAR_16 <= 'f'))
   VAR_15 = VAR_15 * 16 + (VAR_16 - 'a') + 10;
      else if ((VAR_16 >= 'A') && (VAR_16 <= 'F'))
   VAR_15 = VAR_15 * 16 + (VAR_16 - 'A') + 10;
      else {
   FUNC_14(VAR_3, (xmlNodePtr) VAR_5,
              ((void*)0));
   VAR_15 = 0;
   break;
      }
      VAR_11++;
      VAR_16 = *VAR_11;
  }
  if (VAR_16 == ';')
      VAR_11++;
  VAR_12 = VAR_11;
     } else if (VAR_11[1] == '#') {
  VAR_11 += 2;
  VAR_16 = *VAR_11;
  while (VAR_16 != ';') {
      if ((VAR_16 >= '0') && (VAR_16 <= '9'))
   VAR_15 = VAR_15 * 10 + (VAR_16 - '0');
      else {
   FUNC_14(VAR_2, (xmlNodePtr) VAR_5,
              ((void*)0));
   VAR_15 = 0;
   break;
      }
      VAR_11++;
      VAR_16 = *VAR_11;
  }
  if (VAR_16 == ';')
      VAR_11++;
  VAR_12 = VAR_11;
     } else {



  VAR_11++;
  VAR_12 = VAR_11;
  while ((*VAR_11 != 0) && (*VAR_11 != ';')) VAR_11++;
  if (*VAR_11 == 0) {
      FUNC_14(VAR_4,
                 (xmlNodePtr) VAR_5, (const char *) VAR_12);
      goto out;
  }
  if (VAR_11 != VAR_12) {



      VAR_10 = FUNC_13(VAR_12, VAR_11 - VAR_12);
      VAR_13 = FUNC_10(VAR_5, VAR_10);
      if ((VAR_13 != ((void*)0)) &&
   (VAR_13->etype == VAR_1)) {

   if (FUNC_2(VAR_14, VAR_13->content))
       goto out;

      } else {



   if (!FUNC_6(VAR_14)) {
       VAR_9 = FUNC_11(VAR_5, ((void*)0));
       VAR_9->content = FUNC_4(VAR_14);

       if (VAR_8 == ((void*)0)) {
    VAR_8 = VAR_7 = VAR_9;
       } else {
    VAR_8 = FUNC_0(VAR_8, VAR_9);
       }
   }




   VAR_9 = FUNC_12(VAR_5, VAR_10);
   if (VAR_9 == ((void*)0)) {
       if (VAR_10 != ((void*)0)) FUNC_9(VAR_10);
       goto out;
   }
   else if ((VAR_13 != ((void*)0)) && (VAR_13->children == ((void*)0))) {
       xmlNodePtr VAR_17;


       VAR_13->children = (xmlNodePtr) -1;
       VAR_13->children = FUNC_15(VAR_5,
        (const xmlChar*)VAR_9->content);
       VAR_13->owner = 1;
       VAR_17 = VAR_13->children;
       while (VAR_17) {
    VAR_17->parent = (xmlNodePtr)VAR_13;
    VAR_13->last = VAR_17;
    VAR_17 = VAR_17->next;
       }
   }
   if (VAR_8 == ((void*)0)) {
       VAR_8 = VAR_7 = VAR_9;
   } else {
       VAR_8 = FUNC_0(VAR_8, VAR_9);
   }
      }
      FUNC_9(VAR_10);
  }
  VAR_11++;
  VAR_12 = VAR_11;
     }
     if (VAR_15 != 0) {
  xmlChar VAR_18[10];
  int VAR_19;

  VAR_19 = FUNC_8(VAR_18, VAR_15);
  VAR_18[VAR_19] = 0;

  if (FUNC_2(VAR_14, VAR_18))
      goto out;
  VAR_15 = 0;
     }
 } else
     VAR_11++;
    }
    if ((VAR_11 != VAR_12) || (VAR_7 == ((void*)0))) {



 FUNC_1(VAR_14, VAR_12, VAR_11 - VAR_12);
    }

    if (!FUNC_6(VAR_14)) {
 VAR_9 = FUNC_11(VAR_5, ((void*)0));
 VAR_9->content = FUNC_4(VAR_14);

 if (VAR_8 == ((void*)0)) {
     VAR_7 = VAR_9;
 } else {
     FUNC_0(VAR_8, VAR_9);
 }
    }

out:
    FUNC_5(VAR_14);
    return(VAR_7);
}
