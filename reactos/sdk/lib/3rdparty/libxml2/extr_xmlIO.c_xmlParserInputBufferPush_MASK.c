
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int const xmlChar ;
struct TYPE_4__ {int * buffer; int * raw; int rawconsumed; scalar_t__ error; int * encoder; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,char*,int,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__,int *) ;

int
FUNC_7(xmlParserInputBufferPtr VAR_2,
                  int VAR_3, const char *VAR_4) {
    int VAR_5 = 0;
    int VAR_6;

    if (VAR_3 < 0) return(0);
    if ((VAR_2 == ((void*)0)) || (VAR_2->error)) return(-1);
    if (VAR_2->encoder != ((void*)0)) {
        unsigned int VAR_7;




        if (VAR_2->raw == ((void*)0)) {
     VAR_2->raw = FUNC_1();
 }
 VAR_6 = FUNC_0(VAR_2->raw, (const xmlChar *) VAR_4, VAR_3);
 if (VAR_6 != 0)
     return(-1);




 VAR_7 = FUNC_3(VAR_2->raw);
 VAR_5 = FUNC_4(VAR_2, 1);
 if (VAR_5 < 0) {
     FUNC_6(VAR_0, ((void*)0));
     VAR_2->error = VAR_0;
     return(-1);
 }
 VAR_2->rawconsumed += (VAR_7 - FUNC_3(VAR_2->raw));
    } else {
 VAR_5 = VAR_3;
        VAR_6 = FUNC_0(VAR_2->buffer, (xmlChar *) VAR_4, VAR_5);
 if (VAR_6 != 0)
     return(-1);
    }





    return(VAR_5);
}
