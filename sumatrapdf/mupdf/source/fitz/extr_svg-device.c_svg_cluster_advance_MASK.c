
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wmode; TYPE_1__* items; int font; } ;
typedef TYPE_2__ fz_text_span ;
typedef int fz_context ;
struct TYPE_4__ {int gid; } ;


 int FUNC_0 (int *,int ,int,int ) ;

__attribute__((used)) static float
FUNC_1(fz_context *VAR_0, const fz_text_span *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 1;
 while (VAR_2 + VAR_4 < VAR_3 && VAR_1->items[VAR_2 + VAR_4].gid == -1)
  ++VAR_4;
 if (VAR_4 > 1)
  return FUNC_0(VAR_0, VAR_1->font, VAR_1->items[VAR_2].gid, VAR_1->wmode) / VAR_4;
 return 0;
}
