
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xmlCharEncodingHandler ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_6__ {int size; int use; scalar_t__* content; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,scalar_t__*,int*,scalar_t__*,int*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;

int
FUNC_4(xmlCharEncodingHandler *VAR_1, xmlBufferPtr VAR_2,
                       xmlBufferPtr VAR_3, int VAR_4) {
    int VAR_5;
    int VAR_6;
    int VAR_7;

    if (VAR_1 == ((void*)0)) return(-1);
    if (VAR_2 == ((void*)0)) return(-1);
    if (VAR_3 == ((void*)0)) return(-1);


    VAR_6 = VAR_2->size - VAR_2->use - 1;
    VAR_7 = VAR_3->use;
    if (VAR_4 >= 0) {
        if (VAR_7 > VAR_4)
            VAR_7 = VAR_4;
    } else {
        if (VAR_7 > 180)
            VAR_7 = 180;
    }
    if (VAR_7 * 2 >= VAR_6) {
        FUNC_0(VAR_2, VAR_7 * 2);
 VAR_6 = VAR_2->size - VAR_2->use - 1;
    }

    VAR_5 = FUNC_2(VAR_1, &VAR_2->content[VAR_2->use], &VAR_6,
                           VAR_3->content, &VAR_7, 0);
    FUNC_1(VAR_3, VAR_7);
    VAR_2->use += VAR_6;
    VAR_2->content[VAR_2->use] = 0;
    if (VAR_5 == -1) VAR_5 = -3;
    if (VAR_5 == -3) VAR_5 = 0;
    if (VAR_5 == -1) VAR_5 = 0;
    return(VAR_5);
}
