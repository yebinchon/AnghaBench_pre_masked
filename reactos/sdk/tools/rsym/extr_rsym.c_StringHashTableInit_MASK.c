
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct StringHashTable {int TableSize; int Table; } ;
struct StringEntry {int dummy; } ;
typedef int ULONG ;


 int FUNC_0 (struct StringHashTable*,int,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct StringHashTable *VAR_0,
                    ULONG VAR_1,
                    char *VAR_2)
{
    char *VAR_3 = VAR_2;
    char *VAR_4 = VAR_2 + VAR_1;
    VAR_0->TableSize = 1024;
    VAR_0->Table = FUNC_2(1024, sizeof(struct StringEntry *));
    while (VAR_3 < VAR_4)
    {
        FUNC_0(VAR_0,
                        FUNC_1(VAR_3) % VAR_0->TableSize,
                        VAR_3 - VAR_2,
                        VAR_3);
        VAR_3 += FUNC_3(VAR_3) + 1;
    }
}
