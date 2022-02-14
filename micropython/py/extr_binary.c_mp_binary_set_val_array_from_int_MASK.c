
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* mp_int_t ;




void FUNC_0(char VAR_0, void *VAR_1, size_t VAR_2, mp_int_t VAR_3) {
    switch (VAR_0) {
        case 'b':
            ((signed char*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 128:
        case 'B':
            ((unsigned char*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'h':
            ((short*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'H':
            ((unsigned short*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'i':
            ((int*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'I':
            ((unsigned int*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'l':
            ((long*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'L':
            ((unsigned long*)VAR_1)[VAR_2] = VAR_3;
            break;
        case 'P':
            ((void**)VAR_1)[VAR_2] = (void*)(uintptr_t)VAR_3;
            break;
    }
}
