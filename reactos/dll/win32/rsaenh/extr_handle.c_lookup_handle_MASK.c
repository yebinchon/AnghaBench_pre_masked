
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct handle_table {int mutex; TYPE_1__* paEntries; } ;
struct TYPE_2__ {int * pObject; } ;
typedef int OBJECTHDR ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct handle_table*,int ,int **) ;
 int VAR_1 ;
 int FUNC_4 (struct handle_table*,int ,int ) ;

BOOL FUNC_5(struct handle_table *VAR_2, HCRYPTKEY VAR_3, DWORD VAR_4, OBJECTHDR **VAR_5)
{
    BOOL VAR_6 = VAR_0;

    FUNC_3("(lpTable=%p, handle=%ld, lplpObject=%p)\n", VAR_2, VAR_3, VAR_5);

    FUNC_0(&VAR_2->mutex);
    if (!FUNC_4(VAR_2, VAR_3, VAR_4))
    {
        *VAR_5 = ((void*)0);
        goto exit;
    }
    *VAR_5 = VAR_2->paEntries[FUNC_1(VAR_3)].pObject;

    VAR_6 = VAR_1;
exit:
    FUNC_2(&VAR_2->mutex);
    return VAR_6;
}
