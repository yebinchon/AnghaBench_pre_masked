
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int textAlign; scalar_t__ fontId; float lineHeight; } ;
struct TYPE_5__ {float width; char* next; int end; int start; } ;
typedef TYPE_1__ NVGtextRow ;
typedef TYPE_2__ NVGstate ;
typedef int NVGcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,float,float,int ,int ) ;
 int FUNC_1 (int *,char const*,char const*,float,TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int *,float*) ;
 TYPE_2__* FUNC_3 (int *) ;

void FUNC_4(NVGcontext* VAR_8, float VAR_9, float VAR_10, float VAR_11, const char* VAR_12, const char* VAR_13)
{
 NVGstate* VAR_14 = FUNC_3(VAR_8);
 NVGtextRow VAR_15[2];
 int VAR_16 = 0, VAR_17;
 int VAR_18 = VAR_14->textAlign;
 int VAR_19 = VAR_14->textAlign & (VAR_4 | VAR_3 | VAR_6);
 int VAR_20 = VAR_14->textAlign & (VAR_7 | VAR_5 | VAR_2 | VAR_1);
 float VAR_21 = 0;

 if (VAR_14->fontId == VAR_0) return;

 FUNC_2(VAR_8, ((void*)0), ((void*)0), &VAR_21);

 VAR_14->textAlign = VAR_4 | VAR_20;

 while ((VAR_16 = FUNC_1(VAR_8, VAR_12, VAR_13, VAR_11, VAR_15, 2))) {
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   NVGtextRow* VAR_22 = &VAR_15[VAR_17];
   if (VAR_19 & VAR_4)
    FUNC_0(VAR_8, VAR_9, VAR_10, VAR_22->start, VAR_22->end);
   else if (VAR_19 & VAR_3)
    FUNC_0(VAR_8, VAR_9 + VAR_11*0.5f - VAR_22->width*0.5f, VAR_10, VAR_22->start, VAR_22->end);
   else if (VAR_19 & VAR_6)
    FUNC_0(VAR_8, VAR_9 + VAR_11 - VAR_22->width, VAR_10, VAR_22->start, VAR_22->end);
   VAR_10 += VAR_21 * VAR_14->lineHeight;
  }
  VAR_12 = VAR_15[VAR_16-1].next;
 }

 VAR_14->textAlign = VAR_18;
}
