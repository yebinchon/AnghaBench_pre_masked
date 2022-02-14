
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_PTR ;
typedef scalar_t__ LONG ;
typedef scalar_t__ INT ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const void *VAR_1,
                           int VAR_2, void** VAR_3)
{
    LONG VAR_4 = (LONG_PTR)VAR_1;
    LONG VAR_5 = (INT)FUNC_0(VAR_0, 0);

    *VAR_3 = (char *)VAR_0+(VAR_2?8:6);
    FUNC_1("Comparing '%d' with '%d'\n", VAR_4, VAR_5);
    if (VAR_5 < VAR_4) return -1;
    if (VAR_5 > VAR_4) return 1;
    return 0;
}
