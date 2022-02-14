
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int version; } ;
struct TYPE_11__ {int index; } ;
struct TYPE_13__ {int lineno_size; int symbol_size; TYPE_2__ range; int file; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_12__ {int lineno_size; int symbol_size; TYPE_1__ range; int file; } ;
typedef TYPE_3__ PDB_SYMBOL_FILE_EX ;
typedef TYPE_4__ PDB_SYMBOL_FILE ;
typedef TYPE_5__ PDB_SYMBOLS ;


 int FUNC_0 (TYPE_3__*,void const*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(const PDB_SYMBOLS* VAR_0,
                                    PDB_SYMBOL_FILE_EX* VAR_1,
                                    unsigned* VAR_2, const void* VAR_3)

{
    if (VAR_0->version < 19970000)
    {
        const PDB_SYMBOL_FILE *VAR_4 = VAR_3;
        FUNC_1(VAR_1, 0, sizeof(*VAR_1));
        VAR_1->file = VAR_4->file;
        VAR_1->range.index = VAR_4->range.index;
        VAR_1->symbol_size = VAR_4->symbol_size;
        VAR_1->lineno_size = VAR_4->lineno_size;
        *VAR_2 = sizeof(PDB_SYMBOL_FILE) - 1;
    }
    else
    {
        FUNC_0(VAR_1, VAR_3, sizeof(PDB_SYMBOL_FILE_EX));
        *VAR_2 = sizeof(PDB_SYMBOL_FILE_EX) - 1;
    }
}
