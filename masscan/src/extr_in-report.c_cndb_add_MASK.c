
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct CNDB_Entry {unsigned int ip; char* name; struct CNDB_Entry* next; } ;
struct TYPE_3__ {struct CNDB_Entry** entries; } ;


 TYPE_1__* FUNC_0 (int,int) ;
 void* FUNC_1 (size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,unsigned char const*,size_t) ;

__attribute__((used)) static void
FUNC_3(unsigned VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
    struct CNDB_Entry *VAR_4;

    if (VAR_3 == 0)
        return;

    if (VAR_0 == ((void*)0)) {
        VAR_0 = FUNC_0(1, sizeof(*VAR_0));
    }

    VAR_4 = FUNC_1(sizeof(*VAR_4));
    VAR_4->ip =VAR_1;
    VAR_4->name = FUNC_1(VAR_3+1);
    FUNC_2(VAR_4->name, VAR_2, VAR_3+1);
    VAR_4->name[VAR_3] = '\0';
    VAR_4->next = VAR_0->entries[VAR_1&0xFFFF];
    VAR_0->entries[VAR_1&0xFFFF] = VAR_4;

}
