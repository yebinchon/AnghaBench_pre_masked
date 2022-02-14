
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdb_file_info {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 unsigned int FUNC_2 (struct pdb_file_info const*,char*) ;
 void* FUNC_3 (struct pdb_file_info const*,unsigned int) ;

__attribute__((used)) static void* FUNC_4(const struct pdb_file_info* VAR_0)
{
    unsigned VAR_1;
    void *VAR_2;

    VAR_1 = FUNC_2(VAR_0, "/names");
    if (VAR_1 != -1)
    {
        VAR_2 = FUNC_3( VAR_0, VAR_1 );
        if (VAR_2 && *(const DWORD *)VAR_2 == 0xeffeeffe) return VAR_2;
        FUNC_1( VAR_2 );
    }
    FUNC_0("string table not found\n");
    return ((void*)0);
}
