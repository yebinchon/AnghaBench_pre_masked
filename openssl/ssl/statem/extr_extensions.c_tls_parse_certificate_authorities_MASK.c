
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_3, PACKET *VAR_4,
                                             unsigned int VAR_5, X509 *VAR_6,
                                             size_t VAR_7)
{
    if (!FUNC_2(VAR_3, VAR_4))
        return 0;
    if (FUNC_0(VAR_4) != 0) {
        FUNC_1(VAR_3, VAR_0,
                 VAR_1, VAR_2);
        return 0;
    }
    return 1;
}
