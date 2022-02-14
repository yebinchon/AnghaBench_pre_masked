
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle_table {int mutex; } ;
typedef int OBJECTHDR ;
typedef scalar_t__ HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct handle_table*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct handle_table*,int *,scalar_t__*) ;
 int FUNC_4 (struct handle_table*,scalar_t__,int ,int **) ;

BOOL FUNC_5(struct handle_table *VAR_2, HCRYPTKEY VAR_3, DWORD VAR_4, HCRYPTKEY *VAR_5)
{
    OBJECTHDR *VAR_6;
    BOOL VAR_7;

    FUNC_2("(lpTable=%p, handle=%ld, copy=%p)\n", VAR_2, VAR_3, VAR_5);

    FUNC_0(&VAR_2->mutex);
    if (!FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_6))
    {
        *VAR_5 = (HCRYPTKEY)VAR_1;
        FUNC_1(&VAR_2->mutex);
        return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_5);
    FUNC_1(&VAR_2->mutex);
    return VAR_7;
}
