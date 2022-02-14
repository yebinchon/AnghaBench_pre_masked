
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int ASN1_TIME ;


 int * FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void)
{
    time_t VAR_0 = FUNC_4(((void*)0));

    ASN1_TIME *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
    int VAR_3, VAR_4 = 0;

    VAR_1 = FUNC_0(((void*)0), VAR_0, -1, 0);
    VAR_2 = FUNC_0(((void*)0), VAR_0, 1, 0);

    VAR_3 = FUNC_3(VAR_1, ((void*)0));
    if (!FUNC_2(VAR_3, -1))
        VAR_4 = 1;

    VAR_3 = FUNC_3(VAR_2, ((void*)0));
    if (!FUNC_2(VAR_3, 1))
        VAR_4 = 1;

    FUNC_1(VAR_1);
    FUNC_1(VAR_2);

    return VAR_4 == 0;
}
