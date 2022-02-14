
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_4__ {scalar_t__ alloc; int use; unsigned int size; scalar_t__* content; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int const*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (char*) ;

int
FUNC_5(xmlBufferPtr VAR_3, const xmlChar *VAR_4, int VAR_5) {
    unsigned int VAR_6;

    if ((VAR_4 == ((void*)0)) || (VAR_3 == ((void*)0))) {
 return -1;
    }
    if (VAR_3->alloc == VAR_0) return -1;
    if (VAR_5 < -1) {




 return -1;
    }
    if (VAR_5 == 0) return 0;

    if (VAR_5 < 0)
        VAR_5 = FUNC_3(VAR_4);

    if (VAR_5 < 0) return -1;
    if (VAR_5 == 0) return 0;

    VAR_6 = VAR_3->use + VAR_5 + 2;
    if (VAR_6 > VAR_3->size){
        if (!FUNC_1(VAR_3, VAR_6)){
     FUNC_4("growing buffer");
            return VAR_1;
        }
    }

    FUNC_0(&VAR_3->content[VAR_3->use], VAR_4, VAR_5*sizeof(xmlChar));
    VAR_3->use += VAR_5;
    VAR_3->content[VAR_3->use] = 0;
    return 0;
}
