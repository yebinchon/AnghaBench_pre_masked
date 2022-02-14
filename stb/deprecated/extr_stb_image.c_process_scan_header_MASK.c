
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int scan_n; int* order; TYPE_4__* s; TYPE_1__* img_comp; } ;
typedef TYPE_2__ jpeg ;
struct TYPE_8__ {int img_n; } ;
struct TYPE_6__ {int id; int hd; int ha; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(jpeg *VAR_0)
{
   int VAR_1;
   int VAR_2 = FUNC_1(VAR_0->s);
   VAR_0->scan_n = FUNC_2(VAR_0->s);
   if (VAR_0->scan_n < 1 || VAR_0->scan_n > 4 || VAR_0->scan_n > (int) VAR_0->s->img_n) return FUNC_0("bad SOS component count","Corrupt JPEG");
   if (VAR_2 != 6+2*VAR_0->scan_n) return FUNC_0("bad SOS len","Corrupt JPEG");
   for (VAR_1=0; VAR_1 < VAR_0->scan_n; ++VAR_1) {
      int VAR_3 = FUNC_2(VAR_0->s), VAR_4;
      int VAR_5 = FUNC_2(VAR_0->s);
      for (VAR_4 = 0; VAR_4 < VAR_0->s->img_n; ++VAR_4)
         if (VAR_0->img_comp[VAR_4].id == VAR_3)
            break;
      if (VAR_4 == VAR_0->s->img_n) return 0;
      VAR_0->img_comp[VAR_4].hd = VAR_5 >> 4; if (VAR_0->img_comp[VAR_4].hd > 3) return FUNC_0("bad DC huff","Corrupt JPEG");
      VAR_0->img_comp[VAR_4].ha = VAR_5 & 15; if (VAR_0->img_comp[VAR_4].ha > 3) return FUNC_0("bad AC huff","Corrupt JPEG");
      VAR_0->order[VAR_1] = VAR_4;
   }
   if (FUNC_2(VAR_0->s) != 0) return FUNC_0("bad SOS","Corrupt JPEG");
   FUNC_2(VAR_0->s);
   if (FUNC_2(VAR_0->s) != 0) return FUNC_0("bad SOS","Corrupt JPEG");

   return 1;
}
