
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdb_lookup {int filename; } ;
struct pdb_file_info {int dummy; } ;
typedef int * HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int * FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 char* FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct pdb_file_info*) ;
 int FUNC_7 (struct pdb_lookup const*,struct pdb_file_info*,char*,unsigned int*) ;

BOOL FUNC_8(const struct pdb_lookup* VAR_8, unsigned* VAR_9)
{
    HANDLE VAR_10, VAR_11 = ((void*)0);
    char* VAR_12 = ((void*)0);
    BOOL VAR_13;
    struct pdb_file_info VAR_14;

    if ((VAR_10 = FUNC_1(VAR_8->filename, VAR_4, VAR_3, ((void*)0),
                             VAR_6, VAR_1, ((void*)0))) == VAR_5 ||
        ((VAR_11 = FUNC_2(VAR_10, ((void*)0), VAR_7, 0, 0, ((void*)0))) == ((void*)0)) ||
        ((VAR_12 = FUNC_3(VAR_11, VAR_2, 0, 0, 0)) == ((void*)0)))
    {
        FUNC_5("Unable to open .PDB file: %s\n", VAR_8->filename);
        VAR_13 = VAR_0;
    }
    else
    {
        VAR_13 = FUNC_7(VAR_8, &VAR_14, VAR_12, VAR_9);
        FUNC_6(&VAR_14);
    }

    if (VAR_12) FUNC_4(VAR_12);
    if (VAR_11) FUNC_0(VAR_11);
    if (VAR_10 != VAR_5) FUNC_0(VAR_10);

    return VAR_13;
}
