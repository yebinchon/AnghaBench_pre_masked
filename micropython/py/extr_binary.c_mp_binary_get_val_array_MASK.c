
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;
typedef long mp_int_t ;



 int FUNC_0 (long) ;
 int FUNC_1 (double) ;
 int FUNC_2 (long) ;
 int FUNC_3 (long long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long long) ;

mp_obj_t FUNC_6(char VAR_0, void *VAR_1, size_t VAR_2) {
    mp_int_t VAR_3 = 0;
    switch (VAR_0) {
        case 'b':
            VAR_3 = ((signed char*)VAR_1)[VAR_2];
            break;
        case 128:
        case 'B':
            VAR_3 = ((unsigned char*)VAR_1)[VAR_2];
            break;
        case 'h':
            VAR_3 = ((short*)VAR_1)[VAR_2];
            break;
        case 'H':
            VAR_3 = ((unsigned short*)VAR_1)[VAR_2];
            break;
        case 'i':
            return FUNC_2(((int*)VAR_1)[VAR_2]);
        case 'I':
            return FUNC_4(((unsigned int*)VAR_1)[VAR_2]);
        case 'l':
            return FUNC_2(((long*)VAR_1)[VAR_2]);
        case 'L':
            return FUNC_4(((unsigned long*)VAR_1)[VAR_2]);
        case 'O':
            return ((mp_obj_t*)VAR_1)[VAR_2];

        case 'P':
            return FUNC_2((mp_int_t)(uintptr_t)((void**)VAR_1)[VAR_2]);
    }
    return FUNC_0(VAR_3);
}
