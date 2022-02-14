
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t mlen; size_t rlen; size_t xlen; TYPE_3__* xranges; TYPE_2__* ranges; TYPE_1__* mranges; } ;
typedef TYPE_4__ pdf_cmap ;
struct TYPE_11__ {int low; int high; int out; scalar_t__ many; } ;
typedef TYPE_5__ cmap_splay ;
struct TYPE_9__ {int low; int high; int out; } ;
struct TYPE_8__ {int low; int high; int out; } ;
struct TYPE_7__ {int low; int out; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(cmap_splay *VAR_0, void *VAR_1)
{
 pdf_cmap *VAR_2 = (pdf_cmap *)VAR_1;

 if (VAR_0->many)
 {
  FUNC_0(VAR_0->low == VAR_0->high);
  VAR_2->mranges[VAR_2->mlen].low = VAR_0->low;
  VAR_2->mranges[VAR_2->mlen].out = VAR_0->out;
  VAR_2->mlen++;
 }
 else if (VAR_0->low <= 0xffff && VAR_0->high <= 0xFFFF && VAR_0->out <= 0xFFFF)
 {
  VAR_2->ranges[VAR_2->rlen].low = VAR_0->low;
  VAR_2->ranges[VAR_2->rlen].high = VAR_0->high;
  VAR_2->ranges[VAR_2->rlen].out = VAR_0->out;
  VAR_2->rlen++;
 }
 else
 {
  VAR_2->xranges[VAR_2->xlen].low = VAR_0->low;
  VAR_2->xranges[VAR_2->xlen].high = VAR_0->high;
  VAR_2->xranges[VAR_2->xlen].out = VAR_0->out;
  VAR_2->xlen++;
 }
}
