
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gsize ;
typedef int GChecksum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char const*,int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5 (unsigned char *VAR_1, const char *VAR_2, int VAR_3)
{
    GChecksum *VAR_4;
    gsize VAR_5 = 20;

    if (VAR_3 < 0)
        VAR_3 = FUNC_4(VAR_2);

    VAR_4 = FUNC_2 (VAR_0);
    FUNC_3(VAR_4, (const unsigned char *)VAR_2, VAR_3);
    FUNC_1 (VAR_4, VAR_1, &VAR_5);
    FUNC_0 (VAR_4);
    return 0;
}
