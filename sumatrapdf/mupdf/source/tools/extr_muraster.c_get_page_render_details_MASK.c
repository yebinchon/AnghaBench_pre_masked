
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x1; int x0; int y1; int y0; } ;
struct TYPE_5__ {int tbounds; int ibounds; int ctm; TYPE_3__ bounds; int num_workers; int * list; int * page; } ;
typedef TYPE_1__ render_details ;
typedef int fz_page ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 TYPE_3__ FUNC_0 (int *,int *) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (int ,float,float) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__,int ) ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_7, fz_page *VAR_8, render_details *VAR_9)
{
 float VAR_10, VAR_11;
 int VAR_12;
 float VAR_13, VAR_14;

 VAR_9->page = VAR_8;
 VAR_9->list = ((void*)0);
 VAR_9->num_workers = VAR_2;

 VAR_9->bounds = FUNC_0(VAR_7, VAR_8);
 VAR_10 = (VAR_9->bounds.x1 - VAR_9->bounds.x0)/72;
 VAR_11 = (VAR_9->bounds.y1 - VAR_9->bounds.y0)/72;

 VAR_13 = VAR_5 / 72;
 VAR_14 = VAR_6 / 72;
 if (VAR_3 == -1)
 {

  if (VAR_10 <= VAR_4 && VAR_11 <= VAR_1)
  {

   VAR_12 = 0;
  }
  else if (VAR_0)
  {

   float VAR_15 = VAR_4 / VAR_10;
   float VAR_16 = VAR_1 / VAR_11;
   float VAR_17 = VAR_1 / VAR_10;
   float VAR_18 = VAR_4 / VAR_11;
   float VAR_19, VAR_20;
   VAR_19 = FUNC_1(VAR_15, VAR_16);
   VAR_20 = FUNC_1(VAR_17, VAR_18);
   if (VAR_19 >= VAR_20)
   {
    VAR_12 = 0;
    if (VAR_19 < 1)
    {
     VAR_13 *= VAR_19;
     VAR_14 *= VAR_19;
    }
   }
   else
   {
    VAR_12 = 90;
    if (VAR_20 < 1)
    {
     VAR_13 *= VAR_20;
     VAR_14 *= VAR_20;
    }
   }
  }
  else
  {

   float VAR_21 = 0;
   float VAR_22 = 0;

   if (VAR_10 > VAR_4)
    VAR_21 += (VAR_10 - VAR_4) * (VAR_11 > VAR_1 ? VAR_1 : VAR_11);
   if (VAR_11 > VAR_1)
    VAR_21 += (VAR_11 - VAR_1) * VAR_10;

   if (VAR_10 > VAR_1)
    VAR_22 += (VAR_10 - VAR_1) * (VAR_11 > VAR_4 ? VAR_4 : VAR_11);
   if (VAR_11 > VAR_4)
    VAR_22 += (VAR_11 - VAR_4) * VAR_10;

   VAR_12 = (VAR_21 <= VAR_22 ? 0 : 90);
  }
 }
 else
 {
  VAR_12 = VAR_3;
 }

 VAR_9->ctm = FUNC_2(FUNC_3(VAR_12), VAR_13, VAR_14);
 VAR_9->tbounds = FUNC_5(VAR_9->bounds, VAR_9->ctm);;
 VAR_9->ibounds = FUNC_4(VAR_9->tbounds);
}
