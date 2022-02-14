
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int uNumItem; int order; } ;
typedef int LRESULT ;
typedef int LPINT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ HEADER_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static LRESULT
FUNC_1(const HEADER_INFO *VAR_2, INT VAR_3, LPINT VAR_4)
{
    if ((UINT)VAR_3 <VAR_2->uNumItem)
      return VAR_0;

    FUNC_0(VAR_4, VAR_2->order, VAR_2->uNumItem * sizeof(INT));
    return VAR_1;
}
