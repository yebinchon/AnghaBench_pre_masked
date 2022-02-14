
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {float x0; int y0; float x1; scalar_t__ y1; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ fz_link ;
struct TYPE_11__ {float y; float x; float w; scalar_t__ h; scalar_t__ type; struct TYPE_11__* next; int box; } ;
typedef TYPE_3__ fz_html_flow ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *,TYPE_1__,int *,char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static fz_link *FUNC_8(fz_context *VAR_1, fz_html_flow *VAR_2, fz_link *VAR_3, int VAR_4, float VAR_5, const char *VAR_6, const char *VAR_7)
{
 fz_link *VAR_8;
 fz_html_flow *VAR_9;
 char VAR_10[2048];
 fz_rect VAR_11;
 const char *VAR_12;
 const char *VAR_13;
 float VAR_14;

 while (VAR_2)
 {
  VAR_13 = FUNC_0(VAR_2->box);
  VAR_9 = VAR_2->next;
  if (VAR_13 && (int)(VAR_2->y / VAR_5) == VAR_4)
  {

   VAR_14 = VAR_2->x + VAR_2->w;
   while (VAR_9 &&
     VAR_9->y == VAR_2->y &&
     VAR_9->h == VAR_2->h &&
     FUNC_6(VAR_9->box, VAR_13))
   {
    VAR_14 = VAR_9->x + VAR_9->w;
    VAR_9 = VAR_9->next;
   }

   VAR_11.x0 = VAR_2->x;
   VAR_11.y0 = VAR_2->y - VAR_4 * VAR_5;
   VAR_11.x1 = VAR_14;
   VAR_11.y1 = VAR_11.y0 + VAR_2->h;
   if (VAR_2->type != VAR_0)
   {

    VAR_11.y0 -= 0.8f * VAR_2->h;
    VAR_11.y1 -= 0.8f * VAR_2->h;
   }

   if (FUNC_7(VAR_13))
   {
    if (VAR_13[0] == '#')
    {
     FUNC_4(VAR_10, VAR_7, sizeof VAR_10);
     FUNC_3(VAR_10, VAR_13, sizeof VAR_10);
    }
    else
    {
     FUNC_4(VAR_10, VAR_6, sizeof VAR_10);
     FUNC_3(VAR_10, "/", sizeof VAR_10);
     FUNC_3(VAR_10, VAR_13, sizeof VAR_10);
    }
    FUNC_5(VAR_10);
    FUNC_1(VAR_10);

    VAR_12 = VAR_10;
   }
   else
   {
    VAR_12 = VAR_13;
   }

   VAR_8 = FUNC_2(VAR_1, VAR_11, ((void*)0), VAR_12);
   VAR_8->next = VAR_3;
   VAR_3 = VAR_8;
  }
  VAR_2 = VAR_9;
 }
 return VAR_3;
}
