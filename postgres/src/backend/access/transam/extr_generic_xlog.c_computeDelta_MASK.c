
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {scalar_t__ deltaLen; int delta; } ;
struct TYPE_6__ {int pd_lower; int pd_upper; } ;
typedef TYPE_1__* PageHeader ;
typedef TYPE_2__ PageData ;
typedef scalar_t__ Page ;
typedef TYPE_3__ PGAlignedBlock ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(PageData *VAR_3, Page VAR_4, Page VAR_5)
{
 int VAR_6 = ((PageHeader) VAR_5)->pd_lower,
    VAR_7 = ((PageHeader) VAR_5)->pd_upper,
    VAR_8 = ((PageHeader) VAR_4)->pd_lower,
    VAR_9 = ((PageHeader) VAR_4)->pd_upper;

 VAR_3->deltaLen = 0;


 FUNC_1(VAR_3, VAR_4, VAR_5,
        0, VAR_6,
        0, VAR_8);

 FUNC_1(VAR_3, VAR_4, VAR_5,
        VAR_7, VAR_0,
        VAR_9, VAR_0);
}
