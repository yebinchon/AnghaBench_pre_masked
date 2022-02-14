
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rlayer; } ;
typedef int SSL3_BUFFER ;
typedef TYPE_1__ SSL ;


 int * FUNC_0 (int *) ;
 unsigned char* FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned char VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_2)
{
    SSL3_BUFFER *VAR_3;
    size_t VAR_4, VAR_5;
    unsigned char *VAR_6;

    VAR_3 = FUNC_0(&VAR_2->rlayer);

    VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 == ((void*)0))
        return 0;

    VAR_4 = FUNC_2(VAR_3);

    if (VAR_4 < VAR_1)
        return 0;

    VAR_6 += FUNC_3(VAR_3);





    if (*VAR_6 != VAR_0)
        return 0;

    VAR_6 += 3;
    FUNC_4(VAR_6, VAR_5);

    if (VAR_4 < VAR_1 + VAR_5)
        return 0;

    return 1;
}
