
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 scalar_t__ FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static WORD FUNC_3(WORD *VAR_2)
{
    WORD VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if(FUNC_0(&VAR_1[VAR_3 * 16], VAR_2, 16 * sizeof(WORD)) == 0) {
            return VAR_3;
        }
    }

    if(VAR_0 >= 4096) {
        FUNC_2("Could not add new subtable with offsets, storage is full\n");
        return 0;
    }

    FUNC_1(&VAR_1[VAR_0 * 16], VAR_2, 16 * sizeof(WORD));
    VAR_0++;

    return VAR_3;
}
