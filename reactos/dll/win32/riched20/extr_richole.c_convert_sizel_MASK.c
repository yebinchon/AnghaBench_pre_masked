
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cy; int cx; } ;
struct TYPE_11__ {TYPE_1__ dpi; } ;
struct TYPE_10__ {void* cy; void* cx; } ;
struct TYPE_9__ {int cy; int cx; } ;
typedef TYPE_2__ SIZEL ;
typedef TYPE_3__ SIZE ;
typedef TYPE_4__ ME_Context ;


 void* FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(const ME_Context *VAR_0, const SIZEL* VAR_1, SIZE* VAR_2)
{

  VAR_2->cx = FUNC_0(VAR_1->cx, VAR_0->dpi.cx, 2540);
  VAR_2->cy = FUNC_0(VAR_1->cy, VAR_0->dpi.cy, 2540);
}
