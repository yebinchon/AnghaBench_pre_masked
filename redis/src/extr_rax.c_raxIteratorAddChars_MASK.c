
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t key_max; size_t key_len; unsigned char* key; unsigned char* key_static_string; } ;
typedef TYPE_1__ raxIterator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 unsigned char* FUNC_2 (unsigned char*,size_t) ;

int FUNC_3(raxIterator *VAR_2, unsigned char *VAR_3, size_t VAR_4) {
    if (VAR_2->key_max < VAR_2->key_len+VAR_4) {
        unsigned char *VAR_5 = (VAR_2->key == VAR_2->key_static_string) ? ((void*)0) :
                                                                  VAR_2->key;
        size_t VAR_6 = (VAR_2->key_len+VAR_4)*2;
        VAR_2->key = FUNC_2(VAR_5,VAR_6);
        if (VAR_2->key == ((void*)0)) {
            VAR_2->key = (!VAR_5) ? VAR_2->key_static_string : VAR_5;
            VAR_1 = VAR_0;
            return 0;
        }
        if (VAR_5 == ((void*)0)) FUNC_0(VAR_2->key,VAR_2->key_static_string,VAR_2->key_len);
        VAR_2->key_max = VAR_6;
    }


    FUNC_1(VAR_2->key+VAR_2->key_len,VAR_3,VAR_4);
    VAR_2->key_len += VAR_4;
    return 1;
}
