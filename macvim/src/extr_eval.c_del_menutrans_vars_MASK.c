
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hashitem_T ;
struct TYPE_7__ {int di_key; } ;
struct TYPE_6__ {int * ht_array; scalar_t__ ht_used; } ;


 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6()
{
    hashitem_T *VAR_2;
    int VAR_3;

    FUNC_4(&VAR_0);
    VAR_3 = (int)VAR_0.ht_used;
    for (VAR_2 = VAR_0.ht_array; VAR_3 > 0 && !VAR_1; ++VAR_2)
    {
 if (!FUNC_0(VAR_2))
 {
     --VAR_3;
     if (FUNC_2(FUNC_1(VAR_2)->di_key, "menutrans_", 10) == 0)
  FUNC_3(&VAR_0, VAR_2);
 }
    }
    FUNC_5(&VAR_0);
}
