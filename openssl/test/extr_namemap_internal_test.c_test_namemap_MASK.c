
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_NAMEMAP ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(OSSL_NAMEMAP *VAR_4)
{
    int VAR_5 = FUNC_2(VAR_4, 0, VAR_2);
    int VAR_6 = FUNC_2(VAR_4, 0, VAR_3);
    int VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_0);
    int VAR_8 = FUNC_2(VAR_4, 0, VAR_1);
    int VAR_9 = FUNC_3(VAR_4, VAR_2);
    int VAR_10 = FUNC_3(VAR_4, VAR_3);
    int VAR_11 = FUNC_3(VAR_4, VAR_0);
    int VAR_12 = FUNC_3(VAR_4, VAR_1);
    int VAR_13 = FUNC_3(VAR_4, "foo");

    return FUNC_1(VAR_5, 0)
        && FUNC_1(VAR_6, 0)
        && FUNC_0(VAR_5, VAR_7)
        && FUNC_0(VAR_7, VAR_8)
        && FUNC_0(VAR_5, VAR_9)
        && FUNC_0(VAR_6, VAR_10)
        && FUNC_0(VAR_7, VAR_11)
        && FUNC_0(VAR_8, VAR_12)
        && FUNC_0(VAR_13, 0);
}
