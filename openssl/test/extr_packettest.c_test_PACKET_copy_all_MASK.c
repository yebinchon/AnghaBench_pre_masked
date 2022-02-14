
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,unsigned char*,int,size_t*) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,unsigned char*,int) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(void)
{
    unsigned char VAR_2[VAR_0];
    PACKET VAR_3;
    size_t VAR_4;

    if (!FUNC_6(FUNC_0(&VAR_3, VAR_1, VAR_0))
            || !FUNC_6(FUNC_1(&VAR_3, VAR_2, VAR_0, &VAR_4))
            || !FUNC_5(VAR_4, VAR_0)
            || !FUNC_4(VAR_1, VAR_0, VAR_2, VAR_0)
            || !FUNC_5(FUNC_2(&VAR_3), VAR_0)
            || !FUNC_3(FUNC_1(&VAR_3, VAR_2, VAR_0 - 1, &VAR_4)))
        return 0;

    return 1;
}
