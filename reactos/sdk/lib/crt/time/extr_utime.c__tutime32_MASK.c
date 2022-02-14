
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _utimbuf {int dummy; } ;
typedef int _TCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct _utimbuf*) ;
 int FUNC_2 (int const*,int) ;

int
FUNC_3(const _TCHAR* VAR_2, struct _utimbuf *VAR_3)
{
    int VAR_4 = FUNC_2(VAR_2, VAR_1 | VAR_0);

    if (VAR_4 > 0)
    {
        int VAR_5 = FUNC_1(VAR_4, VAR_3);
        FUNC_0(VAR_4);
        return VAR_5;
    }
    return -1;
}
