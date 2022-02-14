
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,size_t,int *,unsigned char const*,long) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (int) ;

char *FUNC_5(const unsigned char *VAR_2, long VAR_3)
{
    char *VAR_4;
    size_t VAR_5;

    if (VAR_3 == 0)
        return FUNC_4(1);

    VAR_5 = VAR_3 * 3;
    if ((VAR_4 = FUNC_3(VAR_5)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    if (FUNC_1(VAR_4, VAR_5, ((void*)0), VAR_2, VAR_3))
        return VAR_4;
    FUNC_2(VAR_4);
    return ((void*)0);
}
