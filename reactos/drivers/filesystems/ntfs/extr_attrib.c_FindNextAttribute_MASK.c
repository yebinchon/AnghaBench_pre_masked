
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* CurrAttr; } ;
struct TYPE_7__ {scalar_t__ Type; } ;
typedef int * PNTFS_ATTR_RECORD ;
typedef TYPE_2__* PFIND_ATTR_CONTXT ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int **) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_4(PFIND_ATTR_CONTXT VAR_3,
                  PNTFS_ATTR_RECORD * VAR_4)
{
    NTSTATUS VAR_5;

    FUNC_0("FindNextAttribute(%p, %p)\n", VAR_3, VAR_4);

    *VAR_4 = FUNC_1(VAR_3);
    if (*VAR_4 == ((void*)0))
    {
        return VAR_1;
    }

    if (VAR_3->CurrAttr->Type != VAR_0)
    {
        return VAR_2;
    }

    VAR_5 = FUNC_2(VAR_3);
    if (!FUNC_3(VAR_5))
    {
        return VAR_5;
    }

    *VAR_4 = FUNC_1(VAR_3);
    if (*VAR_4 == ((void*)0))
    {
        return VAR_1;
    }

    return VAR_2;
}
