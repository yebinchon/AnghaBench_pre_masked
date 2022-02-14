
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int digest; int data_len; int data; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int ,int ,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
    char *VAR_2;


    VAR_2 = FUNC_3(FUNC_1(FUNC_0(), ((void*)0), 0, VAR_1[4].data, VAR_1[4].data_len,
                ((void*)0), ((void*)0)), VAR_0);
    if (!FUNC_2(VAR_2, VAR_1[4].digest))
        return 0;

    return 1;
}
