
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct StringHashTable {struct StringEntry** Table; } ;
struct StringEntry {char* String; struct StringEntry* Next; int Offset; } ;
typedef int ULONG ;


 struct StringEntry* FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct StringHashTable *VAR_0,
                unsigned int VAR_1,
                ULONG VAR_2,
                char *VAR_3)
{
    struct StringEntry *VAR_4 = FUNC_0(1, sizeof(struct StringEntry));
    VAR_4->Offset = VAR_2;
    VAR_4->String = VAR_3;
    VAR_4->Next = VAR_0->Table[VAR_1];
    VAR_0->Table[VAR_1] = VAR_4;
}
