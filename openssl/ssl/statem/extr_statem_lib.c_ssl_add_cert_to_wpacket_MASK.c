
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int WPACKET ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int,unsigned char**) ;
 int FUNC_3 (int *,unsigned char**) ;
 int FUNC_4 (int *,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_5, WPACKET *VAR_6, X509 *VAR_7, int VAR_8)
{
    int VAR_9;
    unsigned char *VAR_10;

    VAR_9 = FUNC_3(VAR_7, ((void*)0));
    if (VAR_9 < 0) {
        FUNC_1(VAR_5, VAR_2, VAR_4,
                 VAR_0);
        return 0;
    }
    if (!FUNC_2(VAR_6, VAR_9, &VAR_10)
            || FUNC_3(VAR_7, &VAR_10) != VAR_9) {
        FUNC_1(VAR_5, VAR_2, VAR_4,
                 VAR_1);
        return 0;
    }

    if (FUNC_0(VAR_5)
            && !FUNC_4(VAR_5, VAR_6, VAR_3, VAR_7,
                                         VAR_8)) {

        return 0;
    }

    return 1;
}
