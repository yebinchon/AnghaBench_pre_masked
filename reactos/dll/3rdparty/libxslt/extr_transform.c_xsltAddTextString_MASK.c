
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_10__ {scalar_t__* content; } ;
struct TYPE_9__ {int lasttuse; int lasttsize; scalar_t__* lasttext; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__ const*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_2__*,char*) ;

__attribute__((used)) static xmlNodePtr
FUNC_5(xsltTransformContextPtr VAR_1, xmlNodePtr VAR_2,
    const xmlChar *VAR_3, int VAR_4) {



    if ((VAR_4 <= 0) || (VAR_3 == ((void*)0)) || (VAR_2 == ((void*)0)))
        return(VAR_2);

    if (VAR_1->lasttext == VAR_2->content) {
        int VAR_5;


        if (VAR_4 >= VAR_0 - VAR_1->lasttuse) {
            FUNC_4(VAR_1, ((void*)0), VAR_2,
                "xsltCopyText: text allocation failed\n");
            return(((void*)0));
        }
        VAR_5 = VAR_1->lasttuse + VAR_4 + 1;

        if (VAR_1->lasttsize < VAR_5) {
     xmlChar *VAR_6;
     int VAR_7;
            int VAR_8;


            VAR_8 = VAR_5 < 100 ? 100 : VAR_5;


            if (VAR_8 > VAR_0 - VAR_1->lasttsize) {
                VAR_7 = VAR_0;
            }
            else {
                VAR_7 = VAR_1->lasttsize + VAR_8;
            }

     VAR_6 = (xmlChar *) FUNC_2(VAR_2->content,VAR_7);
     if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_1, ((void*)0), VAR_2,
   "xsltCopyText: text allocation failed\n");
  return(((void*)0));
     }
     VAR_1->lasttsize = VAR_7;
     VAR_1->lasttext = VAR_6;
     VAR_2->content = VAR_6;
 }
 FUNC_0(&(VAR_2->content[VAR_1->lasttuse]), VAR_3, VAR_4);
 VAR_1->lasttuse += VAR_4;
 VAR_2->content[VAR_1->lasttuse] = 0;
    } else {
 FUNC_1(VAR_2, VAR_3);
 VAR_1->lasttext = VAR_2->content;
 VAR_4 = FUNC_3(VAR_2->content);
 VAR_1->lasttsize = VAR_4;
 VAR_1->lasttuse = VAR_4;
    }
    return(VAR_2);
}
