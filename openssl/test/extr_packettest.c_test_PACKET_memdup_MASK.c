
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned char**,size_t*) ;
 int FUNC_5 (unsigned char*,size_t,int ,size_t) ;
 int FUNC_6 (size_t,scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(void)
{
    unsigned char *VAR_2 = ((void*)0);
    size_t VAR_3;
    PACKET VAR_4;
    int VAR_5 = 0;

    if (!FUNC_7(FUNC_1(&VAR_4, VAR_1, VAR_0))
            || !FUNC_7(FUNC_4(&VAR_4, &VAR_2, &VAR_3))
            || !FUNC_6(VAR_3, VAR_0)
            || !FUNC_5(VAR_2, VAR_3, FUNC_2(&VAR_4), VAR_3)
            || !FUNC_7(FUNC_3(&VAR_4, 10))
            || !FUNC_7(FUNC_4(&VAR_4, &VAR_2, &VAR_3))
            || !FUNC_6(VAR_3, VAR_0 - 10)
            || !FUNC_5(VAR_2, VAR_3, FUNC_2(&VAR_4), VAR_3))
        goto end;
    VAR_5 = 1;
end:
    FUNC_0(VAR_2);
    return VAR_5;
}
