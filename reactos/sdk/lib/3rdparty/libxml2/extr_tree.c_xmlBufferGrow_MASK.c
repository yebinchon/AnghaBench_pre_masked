
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_3__ {scalar_t__ alloc; unsigned int use; unsigned int size; int * content; int * contentIO; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(xmlBufferPtr VAR_2, unsigned int VAR_3) {
    int VAR_4;
    xmlChar *VAR_5;

    if (VAR_2 == ((void*)0)) return(-1);

    if (VAR_2->alloc == VAR_0) return(0);
    if (VAR_3 + VAR_2->use < VAR_2->size) return(0);
    if (VAR_2->size > VAR_3)
        VAR_4 = VAR_2->size * 2;
    else
        VAR_4 = VAR_2->use + VAR_3 + 100;




    if ((VAR_2->alloc == VAR_1) && (VAR_2->contentIO != ((void*)0))) {
        size_t VAR_6 = VAR_2->content - VAR_2->contentIO;

 VAR_5 = (xmlChar *) FUNC_0(VAR_2->contentIO, VAR_6 + VAR_4);
 if (VAR_5 == ((void*)0)) {
     FUNC_1("growing buffer");
     return(-1);
 }
 VAR_2->contentIO = VAR_5;
 VAR_2->content = VAR_5 + VAR_6;
    } else {
 VAR_5 = (xmlChar *) FUNC_0(VAR_2->content, VAR_4);
 if (VAR_5 == ((void*)0)) {
     FUNC_1("growing buffer");
     return(-1);
 }
 VAR_2->content = VAR_5;
    }
    VAR_2->size = VAR_4;
    return(VAR_2->size - VAR_2->use);
}
