
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_3, PACKET *VAR_4)
{
    PACKET VAR_5;

    while (FUNC_1(VAR_4)) {
        if (!FUNC_0(VAR_4, &VAR_5)
            || FUNC_1(&VAR_5) == 0) {
            FUNC_2(VAR_3, VAR_0, VAR_1,
                     VAR_2);
            return 0;
        }
    }

    return 1;
}
