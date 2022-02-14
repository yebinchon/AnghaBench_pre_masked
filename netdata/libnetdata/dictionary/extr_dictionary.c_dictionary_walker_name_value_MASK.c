
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** avl_link; } ;
typedef TYPE_1__ avl ;
struct TYPE_5__ {char* name; void* value; } ;
typedef TYPE_2__ NAME_VALUE ;



__attribute__((used)) static int FUNC_0(avl *VAR_0, int (*VAR_1)(char *VAR_2, void *VAR_3, void *VAR_4), void *VAR_5) {
    int VAR_6 = 0, VAR_7 = 0;

    if(VAR_0->avl_link[0]) {
        VAR_7 = FUNC_0(VAR_0->avl_link[0], VAR_1, VAR_5);
        if(VAR_7 < 0) return VAR_7;
        VAR_6 += VAR_7;
    }

    VAR_7 = VAR_1(((NAME_VALUE *)VAR_0)->name, ((NAME_VALUE *)VAR_0)->value, VAR_5);
    if(VAR_7 < 0) return VAR_7;
    VAR_6 += VAR_7;

    if(VAR_0->avl_link[1]) {
        VAR_7 = FUNC_0(VAR_0->avl_link[1], VAR_1, VAR_5);
        if (VAR_7 < 0) return VAR_7;
        VAR_6 += VAR_7;
    }

    return VAR_6;
}
