
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t max_url_length; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (char*,size_t*) ;

__attribute__((used)) static inline char *FUNC_1(char *VAR_1, size_t *VAR_2) {
    size_t VAR_3 = 0;
    char *VAR_4 = FUNC_0(VAR_1, &VAR_3);


    if(VAR_3 > VAR_0.max_url_length) {
        VAR_3 = VAR_0.max_url_length;
        VAR_4[VAR_3] = '\0';
    }

    if(VAR_2) *VAR_2 = VAR_3;
    return VAR_4;
}
