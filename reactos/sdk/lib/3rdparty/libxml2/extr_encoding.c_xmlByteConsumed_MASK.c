
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xmlParserInputPtr ;
typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int xmlCharEncodingHandler ;
struct TYPE_7__ {TYPE_2__* input; } ;
struct TYPE_6__ {unsigned char const* end; unsigned char const* cur; long consumed; unsigned char const* base; TYPE_1__* buf; } ;
struct TYPE_5__ {unsigned int rawconsumed; int * encoder; } ;


 int FUNC_0 (int *,unsigned char*,int*,unsigned char const*,int*) ;

long
FUNC_1(xmlParserCtxtPtr VAR_0) {
    xmlParserInputPtr VAR_1;

    if (VAR_0 == ((void*)0)) return(-1);
    VAR_1 = VAR_0->input;
    if (VAR_1 == ((void*)0)) return(-1);
    if ((VAR_1->buf != ((void*)0)) && (VAR_1->buf->encoder != ((void*)0))) {
        unsigned int VAR_2 = 0;
 xmlCharEncodingHandler * VAR_3 = VAR_1->buf->encoder;





        if (VAR_1->end - VAR_1->cur > 0) {
     unsigned char VAR_4[32000];
     const unsigned char *VAR_5 = (const unsigned char *)VAR_1->cur;
     int VAR_6 = VAR_1->end - VAR_1->cur, VAR_7 = 32000;

     int VAR_8;

            do {
                VAR_6 = VAR_1->end - VAR_5;
                VAR_7 = 32000;
                VAR_8 = FUNC_0(VAR_3, &VAR_4[0], &VAR_7,
                                        VAR_5, &VAR_6);
                if (VAR_8 < 0) {
                    if (VAR_7 > 0)
                        VAR_8 = -2;
                    else
                        return(-1);
                }
                VAR_2 += VAR_7;
                VAR_5 += VAR_6;
            } while (VAR_8 == -2);
 }
 if (VAR_1->buf->rawconsumed < VAR_2)
     return(-1);
 return(VAR_1->buf->rawconsumed - VAR_2);
    }
    return(VAR_1->consumed + (VAR_1->cur - VAR_1->base));
}
