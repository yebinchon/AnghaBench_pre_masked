
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int length; int data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__**) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,char*,int) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(void)
{
    int VAR_1 = 0;
    BIO *VAR_2 = ((void*)0);
    BUF_MEM *VAR_3 = ((void*)0);

    VAR_2 = FUNC_2(FUNC_4());
    if (!FUNC_10(VAR_2))
        goto finish;
    if (!FUNC_7(FUNC_3(VAR_2, "Hello World\n"), 12))
        goto finish;
    FUNC_1(VAR_2, &VAR_3);
    if (!FUNC_10(VAR_3))
        goto finish;
    if (!FUNC_8(FUNC_5(VAR_2, VAR_0), 0))
        goto finish;
    FUNC_0(VAR_2);
    VAR_2 = ((void*)0);
    if (!FUNC_9(VAR_3->data, VAR_3->length, "Hello World\n", 12))
        goto finish;
    VAR_1 = 1;

finish:
    FUNC_0(VAR_2);
    FUNC_6(VAR_3);
    return VAR_1;
}
