
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct handle_table {unsigned int iEntries; int mutex; TYPE_2__* paEntries; } ;
struct TYPE_4__ {TYPE_1__* pObject; } ;
struct TYPE_3__ {scalar_t__ dwType; } ;
typedef int HCRYPTKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct handle_table*,int ) ;
 int VAR_1 ;

BOOL FUNC_4(struct handle_table *VAR_2, HCRYPTKEY VAR_3, DWORD VAR_4)
{
    unsigned int VAR_5 = FUNC_1(VAR_3);
    BOOL VAR_6 = VAR_0;

    FUNC_3("(lpTable=%p, handle=%ld)\n", VAR_2, VAR_3);

    FUNC_0(&VAR_2->mutex);


    if (!VAR_3) goto exit;


    if (VAR_5 >= VAR_2->iEntries) goto exit;


    if (!VAR_2->paEntries[VAR_5].pObject) goto exit;


    if (VAR_2->paEntries[VAR_5].pObject->dwType != VAR_4) goto exit;

    VAR_6 = VAR_1;
exit:
    FUNC_2(&VAR_2->mutex);
    return VAR_6;
}
