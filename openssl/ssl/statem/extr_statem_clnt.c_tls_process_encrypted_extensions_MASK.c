
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int RAW_EXTENSION ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int ,int **,int *,int) ;
 int FUNC_5 (int *,int ,int *,int *,int ,int) ;

__attribute__((used)) static MSG_PROCESS_RETURN FUNC_6(SSL *VAR_6, PACKET *VAR_7)
{
    PACKET VAR_8;
    RAW_EXTENSION *VAR_9 = ((void*)0);

    if (!FUNC_1(VAR_7, &VAR_8)
            || FUNC_2(VAR_7) != 0) {
        FUNC_3(VAR_6, VAR_2, VAR_4,
                 VAR_5);
        goto err;
    }

    if (!FUNC_4(VAR_6, &VAR_8,
                                VAR_3, &VAR_9,
                                ((void*)0), 1)
            || !FUNC_5(VAR_6, VAR_3,
                                         VAR_9, ((void*)0), 0, 1)) {

        goto err;
    }

    FUNC_0(VAR_9);
    return VAR_0;

 err:
    FUNC_0(VAR_9);
    return VAR_1;
}
