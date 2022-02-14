
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t WORD ;


 scalar_t__ FUNC_0 (size_t*,size_t*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;
 size_t** VAR_1 ;

__attribute__((used)) static WORD FUNC_2(WORD *VAR_2, WORD *VAR_3)
{
    WORD VAR_4;

    for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if(FUNC_0(VAR_1[VAR_4], VAR_3, 16 * sizeof(WORD)) == 0) {
            return VAR_4;
        }
    }

    if(VAR_0 >= 4096) {
        FUNC_1("Could not add new subtable with diffs, storage is full\n");
        return 0;
    }

    VAR_1[VAR_0] = VAR_3;
    VAR_0++;

    return VAR_4;
}
