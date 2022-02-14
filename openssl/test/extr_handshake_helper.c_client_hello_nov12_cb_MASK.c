
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,unsigned char const**) ;
 scalar_t__ FUNC_1 (int *,unsigned char const**) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char const**) ;
 int FUNC_4 (int *,unsigned char const**) ;
 int FUNC_5 (int *,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_6 (int *,void*,int ) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_8, int *VAR_9, void *VAR_10)
{
    int VAR_11;
    unsigned int VAR_12;
    const unsigned char *VAR_13;

    VAR_12 = FUNC_2(VAR_8);
    if (VAR_12 > VAR_7 || VAR_12 < VAR_0) {
        *VAR_9 = VAR_2;
        return VAR_4;
    }
    (void)FUNC_4(VAR_8, &VAR_13);
    if (VAR_13 == ((void*)0) ||
        FUNC_3(VAR_8, &VAR_13) == 0 ||
        FUNC_0(VAR_8, &VAR_13) == 0 ||
        FUNC_1(VAR_8, &VAR_13) == 0) {
        *VAR_9 = VAR_1;
        return VAR_4;
    }
    VAR_11 = FUNC_6(VAR_8, VAR_10, 0);
    FUNC_5(VAR_8, VAR_6);
    if (!VAR_11) {
        *VAR_9 = VAR_3;
        return VAR_4;
    }
    return VAR_5;
}
