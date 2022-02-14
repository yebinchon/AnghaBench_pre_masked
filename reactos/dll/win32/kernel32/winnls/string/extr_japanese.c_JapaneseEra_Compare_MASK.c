
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wYear; scalar_t__ wMonth; scalar_t__ wDay; } ;
typedef TYPE_1__* PCJAPANESE_ERA ;
typedef int INT ;



__attribute__((used)) static INT FUNC_0(const void *VAR_0, const void *VAR_1)
{
    PCJAPANESE_ERA VAR_2 = (PCJAPANESE_ERA)VAR_0;
    PCJAPANESE_ERA VAR_3 = (PCJAPANESE_ERA)VAR_1;
    if (VAR_2->wYear < VAR_3->wYear)
        return -1;
    if (VAR_2->wYear > VAR_3->wYear)
        return 1;
    if (VAR_2->wMonth < VAR_3->wMonth)
        return -1;
    if (VAR_2->wMonth > VAR_3->wMonth)
        return 1;
    if (VAR_2->wDay < VAR_3->wDay)
        return -1;
    if (VAR_2->wDay > VAR_3->wDay)
        return 1;
    return 0;
}
