
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int MouseDownID; int Self; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef int POINT ;
typedef int * PDOC_ITEM ;
typedef int LRESULT ;


 int * FUNC_0 (TYPE_1__*,int const*,int*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_4 (SYSLINK_INFO *VAR_1, const POINT *VAR_2)
{
    PDOC_ITEM VAR_3, VAR_4;
    int VAR_5;

    VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_0);
    if(VAR_3 != ((void*)0))
    {
      FUNC_3(VAR_1->Self);

      VAR_4 = FUNC_2(VAR_1, VAR_3);
      if(VAR_4 != ((void*)0) && VAR_4 != VAR_3)
      {
          FUNC_1(VAR_1, VAR_4);
      }
      VAR_1->MouseDownID = VAR_5;
      FUNC_1(VAR_1, VAR_3);
    }

    return 0;
}
