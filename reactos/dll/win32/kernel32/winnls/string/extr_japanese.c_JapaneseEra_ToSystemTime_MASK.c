
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wDay; int wMonth; int wYear; } ;
struct TYPE_6__ {int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__* PCJAPANESE_ERA ;
typedef TYPE_2__* LPSYSTEMTIME ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static BOOL FUNC_2(PCJAPANESE_ERA VAR_1, LPSYSTEMTIME VAR_2)
{
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_1(VAR_2, sizeof(*VAR_2));
    VAR_2->wYear = VAR_1->wYear;
    VAR_2->wMonth = VAR_1->wMonth;
    VAR_2->wDay = VAR_1->wDay;
    return VAR_0;
}
