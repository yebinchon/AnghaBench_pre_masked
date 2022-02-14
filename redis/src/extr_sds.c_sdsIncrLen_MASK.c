
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef size_t ssize_t ;
typedef unsigned char* sds ;
struct TYPE_2__ {size_t alloc; size_t len; } ;


 int FUNC_0 (int,unsigned char*) ;



 unsigned char FUNC_1 (unsigned char) ;


 int const VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;

void FUNC_3(sds VAR_3, ssize_t VAR_4) {
    unsigned char VAR_5 = VAR_3[-1];
    size_t VAR_6;
    switch(VAR_5&VAR_1) {
        case 130: {
            unsigned char *VAR_7 = ((unsigned char*)VAR_3)-1;
            unsigned char VAR_8 = FUNC_1(VAR_5);
            FUNC_2((VAR_4 > 0 && VAR_8+VAR_4 < 32) || (VAR_4 < 0 && VAR_8 >= (unsigned int)(-VAR_4)));
            *VAR_7 = 130 | ((VAR_8+VAR_4) << VAR_0);
            VAR_6 = VAR_8+VAR_4;
            break;
        }
        case 128: {
            FUNC_0(8,VAR_3);
            FUNC_2((VAR_4 >= 0 && VAR_2->alloc-VAR_2->len >= VAR_4) || (VAR_4 < 0 && VAR_2->len >= (unsigned int)(-VAR_4)));
            VAR_6 = (VAR_2->len += VAR_4);
            break;
        }
        case 132: {
            FUNC_0(16,VAR_3);
            FUNC_2((VAR_4 >= 0 && VAR_2->alloc-VAR_2->len >= VAR_4) || (VAR_4 < 0 && VAR_2->len >= (unsigned int)(-VAR_4)));
            VAR_6 = (VAR_2->len += VAR_4);
            break;
        }
        case 131: {
            FUNC_0(32,VAR_3);
            FUNC_2((VAR_4 >= 0 && VAR_2->alloc-VAR_2->len >= (unsigned int)VAR_4) || (VAR_4 < 0 && VAR_2->len >= (unsigned int)(-VAR_4)));
            VAR_6 = (VAR_2->len += VAR_4);
            break;
        }
        case 129: {
            FUNC_0(64,VAR_3);
            FUNC_2((VAR_4 >= 0 && VAR_2->alloc-VAR_2->len >= (uint64_t)VAR_4) || (VAR_4 < 0 && VAR_2->len >= (uint64_t)(-VAR_4)));
            VAR_6 = (VAR_2->len += VAR_4);
            break;
        }
        default: VAR_6 = 0;
    }
    VAR_3[VAR_6] = '\0';
}
