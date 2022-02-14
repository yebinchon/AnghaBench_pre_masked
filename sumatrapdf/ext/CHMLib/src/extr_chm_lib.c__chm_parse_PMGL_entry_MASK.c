
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int space; scalar_t__ length; scalar_t__ start; int path; } ;
typedef scalar_t__ UInt64 ;
typedef int UChar ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int **) ;

__attribute__((used)) static int FUNC_2(UChar **VAR_1, struct chmUnitInfo *VAR_2)
{
    UInt64 VAR_3;


    VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 > VAR_0)
        return 0;


    if (! FUNC_0(VAR_1, VAR_3, VAR_2->path))
        return 0;


    VAR_2->space = (int)FUNC_1(VAR_1);
    VAR_2->start = FUNC_1(VAR_1);
    VAR_2->length = FUNC_1(VAR_1);
    return 1;
}
