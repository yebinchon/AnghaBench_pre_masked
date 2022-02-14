
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_4__ {scalar_t__ alloc; scalar_t__ use; scalar_t__ size; char* content; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;

int
FUNC_3(xmlBufferPtr VAR_3, const char *VAR_4) {
    const char *VAR_5;

    if (VAR_3 == ((void*)0))
        return(-1);
    if (VAR_3->alloc == VAR_0) return -1;
    if (VAR_4 == ((void*)0)) {




 return -1;
    }
    for (VAR_5 = VAR_4;*VAR_5 != 0;VAR_5++) {
        if (VAR_3->use + 10 >= VAR_3->size) {
            if (!FUNC_0(VAR_3, VAR_3->use+10)){
  FUNC_2("growing buffer");
                return VAR_1;
            }
        }
        VAR_3->content[VAR_3->use++] = *VAR_5;
    }
    VAR_3->content[VAR_3->use] = 0;
    return 0;
}
