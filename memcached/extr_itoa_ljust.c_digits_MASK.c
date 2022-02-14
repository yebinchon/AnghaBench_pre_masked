
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 char* FUNC_0 (int,char*) ;

__attribute__((used)) static inline int FUNC_1( uint32_t VAR_0, unsigned VAR_1, int* VAR_2, char** VAR_3, int VAR_4 ) {
    if (VAR_0 < VAR_1*10) {
        *VAR_2 = VAR_0 / VAR_1;
        *VAR_3 = FUNC_0('0'+*VAR_2, *VAR_3);
        --VAR_4;
    }
    return VAR_4;
}
