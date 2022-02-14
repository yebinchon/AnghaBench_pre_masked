
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_3__ {int alloc; unsigned int size; size_t use; scalar_t__* content; scalar_t__* contentIO; } ;


 size_t VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (scalar_t__*,unsigned int) ;
 int FUNC_5 (char*) ;

int
FUNC_6(xmlBufferPtr VAR_3, unsigned int VAR_4)
{
    unsigned int VAR_5;
    xmlChar* VAR_6 = ((void*)0);
    size_t VAR_7;

    if (VAR_3 == ((void*)0))
        return(0);

    if (VAR_3->alloc == VAR_2) return(0);


    if (VAR_4 < VAR_3->size)
        return 1;


    switch (VAR_3->alloc){
 case 128:
 case 131:

     VAR_5 = (VAR_3->size ? VAR_3->size*2 : VAR_4 + 10);
     while (VAR_4 > VAR_5) {
         if (VAR_5 > VAR_1 / 2) {
             FUNC_5("growing buffer");
             return 0;
         }
         VAR_5 *= 2;
     }
     break;
 case 130:
     VAR_5 = VAR_4+10;
     break;
        case 129:
            if (VAR_3->use < VAR_0)
                VAR_5 = VAR_4;
            else {
                VAR_5 = VAR_3->size * 2;
                while (VAR_4 > VAR_5) {
                    if (VAR_5 > VAR_1 / 2) {
                        FUNC_5("growing buffer");
                        return 0;
                    }
                    VAR_5 *= 2;
                }
            }
            break;

 default:
     VAR_5 = VAR_4+10;
     break;
    }

    if ((VAR_3->alloc == 128) && (VAR_3->contentIO != ((void*)0))) {
        VAR_7 = VAR_3->content - VAR_3->contentIO;

        if (VAR_7 > VAR_5) {

     FUNC_1(VAR_3->contentIO, VAR_3->content, VAR_3->use);
     VAR_3->content = VAR_3->contentIO;
     VAR_3->content[VAR_3->use] = 0;
     VAR_3->size += VAR_7;
 } else {
     VAR_6 = (xmlChar *) FUNC_4(VAR_3->contentIO, VAR_7 + VAR_5);
     if (VAR_6 == ((void*)0)) {
  FUNC_5("growing buffer");
  return 0;
     }
     VAR_3->contentIO = VAR_6;
     VAR_3->content = VAR_6 + VAR_7;
 }
    } else {
 if (VAR_3->content == ((void*)0)) {
     VAR_6 = (xmlChar *) FUNC_3(VAR_5);
 } else if (VAR_3->size - VAR_3->use < 100) {
     VAR_6 = (xmlChar *) FUNC_4(VAR_3->content, VAR_5);
        } else {





     VAR_6 = (xmlChar *) FUNC_3(VAR_5);
     if (VAR_6 != ((void*)0)) {
  FUNC_0(VAR_6, VAR_3->content, VAR_3->use);
  FUNC_2(VAR_3->content);
  VAR_6[VAR_3->use] = 0;
     }
 }
 if (VAR_6 == ((void*)0)) {
     FUNC_5("growing buffer");
     return 0;
 }
 VAR_3->content = VAR_6;
    }
    VAR_3->size = VAR_5;

    return 1;
}
