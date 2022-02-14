
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int minex; int maxex; long min; long max; } ;
typedef TYPE_1__ zrangespec ;
struct TYPE_7__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_2__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (long) ;
 void* FUNC_1 (char*,char**) ;

__attribute__((used)) static int FUNC_2(robj *VAR_3, robj *VAR_4, zrangespec *VAR_5) {
    char *VAR_6;
    VAR_5->minex = VAR_5->maxex = 0;





    if (VAR_3->encoding == VAR_2) {
        VAR_5->min = (long)VAR_3->ptr;
    } else {
        if (((char*)VAR_3->ptr)[0] == '(') {
            VAR_5->min = FUNC_1((char*)VAR_3->ptr+1,&VAR_6);
            if (VAR_6[0] != '\0' || FUNC_0(VAR_5->min)) return VAR_0;
            VAR_5->minex = 1;
        } else {
            VAR_5->min = FUNC_1((char*)VAR_3->ptr,&VAR_6);
            if (VAR_6[0] != '\0' || FUNC_0(VAR_5->min)) return VAR_0;
        }
    }
    if (VAR_4->encoding == VAR_2) {
        VAR_5->max = (long)VAR_4->ptr;
    } else {
        if (((char*)VAR_4->ptr)[0] == '(') {
            VAR_5->max = FUNC_1((char*)VAR_4->ptr+1,&VAR_6);
            if (VAR_6[0] != '\0' || FUNC_0(VAR_5->max)) return VAR_0;
            VAR_5->maxex = 1;
        } else {
            VAR_5->max = FUNC_1((char*)VAR_4->ptr,&VAR_6);
            if (VAR_6[0] != '\0' || FUNC_0(VAR_5->max)) return VAR_0;
        }
    }

    return VAR_1;
}
