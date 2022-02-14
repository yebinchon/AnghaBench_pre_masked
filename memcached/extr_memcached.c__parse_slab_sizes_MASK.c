
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int chunk_size; int slab_chunk_size_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char**) ;

__attribute__((used)) static bool FUNC_4(char *VAR_4, uint32_t *VAR_5) {
    char *VAR_6 = ((void*)0);
    uint32_t VAR_7 = 0;
    int VAR_8 = 0;
    uint32_t VAR_9 = 0;

    if (FUNC_2(VAR_4) < 1)
        return 0;

    for (char *VAR_10 = FUNC_3(VAR_4, "-", &VAR_6);
         VAR_10 != ((void*)0);
         VAR_10 = FUNC_3(((void*)0), "-", &VAR_6)) {
        if (!FUNC_1(VAR_10, &VAR_7) || VAR_7 < VAR_2.chunk_size
             || VAR_7 > VAR_2.slab_chunk_size_max) {
            FUNC_0(VAR_3, "slab size %u is out of valid range\n", VAR_7);
            return 0;
        }
        if (VAR_9 >= VAR_7) {
            FUNC_0(VAR_3, "slab size %u cannot be lower than or equal to a previous class size\n", VAR_7);
            return 0;
        }
        if (VAR_7 <= VAR_9 + VAR_0) {
            FUNC_0(VAR_3, "slab size %u must be at least %d bytes larger than previous class\n",
                    VAR_7, VAR_0);
            return 0;
        }
        VAR_5[VAR_8++] = VAR_7;
        VAR_9 = VAR_7;
        if (VAR_8 >= VAR_1-1) {
            FUNC_0(VAR_3, "too many slab classes specified\n");
            return 0;
        }
    }

    VAR_5[VAR_8] = 0;
    return 1;
}
