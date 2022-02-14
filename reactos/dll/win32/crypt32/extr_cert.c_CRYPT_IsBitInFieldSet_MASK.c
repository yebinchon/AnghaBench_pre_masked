
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BitField {int* indexes; int cIndexes; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static BOOL FUNC_1(const struct BitField *VAR_1, DWORD VAR_2)
{
    BOOL VAR_3;
    DWORD VAR_4 = VAR_2 / VAR_0;

    FUNC_0(VAR_1->cIndexes);
    VAR_3 = VAR_1->indexes[VAR_4] & (1 << (VAR_2 % VAR_0));
    return VAR_3;
}
