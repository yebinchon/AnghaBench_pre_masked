
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {scalar_t__ uNumItem; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int RECT ;
typedef int POINT ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__ const*,scalar_t__,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static INT FUNC_2 (const TAB_INFO *VAR_2, POINT VAR_3, UINT *VAR_4)
{
  RECT VAR_5;
  INT VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2->uNumItem; VAR_6++)
  {
    FUNC_1(VAR_2, VAR_6, &VAR_5, ((void*)0));

    if (FUNC_0(&VAR_5, VAR_3))
    {
      *VAR_4 = VAR_1;
      return VAR_6;
    }
  }

  *VAR_4 = VAR_0;
  return -1;
}
