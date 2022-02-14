
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BitField {int cIndexes; int* indexes; } ;
typedef int DWORD ;


 int VAR_0 ;
 int* FUNC_0 (int) ;
 int* FUNC_1 (int*,int) ;

__attribute__((used)) static void FUNC_2(struct BitField *VAR_1, DWORD VAR_2)
{
    DWORD VAR_3 = VAR_2 / VAR_0;

    if (VAR_3 + 1 > VAR_1->cIndexes)
    {
        if (VAR_1->cIndexes)
            VAR_1->indexes = FUNC_1(VAR_1->indexes,
             (VAR_3 + 1) * sizeof(DWORD));
        else
            VAR_1->indexes = FUNC_0(sizeof(DWORD));
        if (VAR_1->indexes)
        {
            VAR_1->indexes[VAR_3] = 0;
            VAR_1->cIndexes = VAR_3 + 1;
        }
    }
    if (VAR_1->indexes)
        VAR_1->indexes[VAR_3] |= 1 << (VAR_2 % VAR_0);
}
