
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int digest; int data_len; int data; int key_len; int key; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 char* FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2)
{
    char *VAR_3;







    VAR_3 = FUNC_4(FUNC_1(FUNC_0(),
                VAR_1[VAR_2].key, VAR_1[VAR_2].key_len,
                VAR_1[VAR_2].data, VAR_1[VAR_2].data_len, ((void*)0), ((void*)0)),
                VAR_0);

    if (!FUNC_2(VAR_3, VAR_1[VAR_2].digest))
      return 0;

    return 1;
}
