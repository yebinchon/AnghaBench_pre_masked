
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ hDC; } ;
struct TYPE_8__ {scalar_t__ cy; scalar_t__ cx; } ;
typedef TYPE_1__ SIZE ;
typedef int ME_Style ;
typedef TYPE_2__ ME_Context ;
typedef int LPCWSTR ;
typedef int HGDIOBJ ;


 int FUNC_0 (scalar_t__,int ,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_3(ME_Context *VAR_0, LPCWSTR VAR_1, int VAR_2, ME_Style *VAR_3, SIZE *VAR_4)
{
  HGDIOBJ VAR_5;
  if (VAR_0->hDC) {
    VAR_5 = FUNC_1(VAR_0, VAR_3);
    FUNC_0(VAR_0->hDC, VAR_1, VAR_2, VAR_4);
    FUNC_2(VAR_0, VAR_3, VAR_5);
  } else {
    VAR_4->cx = 0;
    VAR_4->cy = 0;
  }
}
