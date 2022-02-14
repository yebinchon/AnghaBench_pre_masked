
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int SeafFSObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int) ;
 scalar_t__ FUNC_1 (char const*,int const*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char const*,int const*,int) ;

SeafFSObject *
FUNC_4 (const char *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_0 (VAR_3, VAR_4);

    if (VAR_5 == VAR_1)
        return (SeafFSObject *)FUNC_3 (VAR_2, VAR_3, VAR_4);
    else if (VAR_5 == VAR_0)
        return (SeafFSObject *)FUNC_1 (VAR_2, VAR_3, VAR_4);
    else {
        FUNC_2 ("Invalid object type %d.\n", VAR_5);
        return ((void*)0);
    }
}
