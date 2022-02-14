
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbtt__hheap ;
struct TYPE_5__ {float x1; float x0; float y1; float y0; scalar_t__ invert; } ;
typedef TYPE_1__ stbtt__edge ;
struct TYPE_6__ {float fdx; float fdy; float fx; float direction; float sy; float ey; scalar_t__ next; } ;
typedef TYPE_2__ stbtt__active_edge ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,void*) ;

__attribute__((used)) static stbtt__active_edge *FUNC_2(stbtt__hheap *VAR_0, stbtt__edge *VAR_1, int VAR_2, float VAR_3, void *VAR_4)
{
   stbtt__active_edge *VAR_5 = (stbtt__active_edge *) FUNC_1(VAR_0, sizeof(*VAR_5), VAR_4);
   float VAR_6 = (VAR_1->x1 - VAR_1->x0) / (VAR_1->y1 - VAR_1->y0);
   FUNC_0(VAR_5 != ((void*)0));

   if (!VAR_5) return VAR_5;
   VAR_5->fdx = VAR_6;
   VAR_5->fdy = VAR_6 != 0.0f ? (1.0f/VAR_6) : 0.0f;
   VAR_5->fx = VAR_1->x0 + VAR_6 * (VAR_3 - VAR_1->y0);
   VAR_5->fx -= VAR_2;
   VAR_5->direction = VAR_1->invert ? 1.0f : -1.0f;
   VAR_5->sy = VAR_1->y0;
   VAR_5->ey = VAR_1->y1;
   VAR_5->next = 0;
   return VAR_5;
}
