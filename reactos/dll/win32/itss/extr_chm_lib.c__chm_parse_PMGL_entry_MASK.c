
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int space; scalar_t__ length; scalar_t__ start; int path; } ;
typedef scalar_t__ UInt64 ;
typedef int UChar ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int **) ;

__attribute__((used)) static BOOL FUNC_2(UChar **VAR_3, struct chmUnitInfo *VAR_4)
{
    UInt64 VAR_5;


    VAR_5 = FUNC_1(VAR_3);
    if (VAR_5 > VAR_0)
        return VAR_1;


    if (! FUNC_0(VAR_3, VAR_5, VAR_4->path))
        return VAR_1;


    VAR_4->space = (int)FUNC_1(VAR_3);
    VAR_4->start = FUNC_1(VAR_3);
    VAR_4->length = FUNC_1(VAR_3);
    return VAR_2;
}
