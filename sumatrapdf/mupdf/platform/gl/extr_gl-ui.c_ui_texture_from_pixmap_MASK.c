
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct texture {int w; int h; int s; int t; int y; int x; int id; } ;
struct TYPE_3__ {int w; int h; int n; int * samples; int y; int x; } ;
typedef TYPE_1__ fz_pixmap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int,int,int ,int ,int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int) ;

void FUNC_8(struct texture *VAR_11, fz_pixmap *VAR_12)
{
 if (!VAR_11->id)
  FUNC_2(1, &VAR_11->id);
 FUNC_1(VAR_3, VAR_11->id);
 FUNC_5(VAR_3, VAR_4, VAR_0);
 FUNC_5(VAR_3, VAR_5, VAR_0);

 VAR_11->x = VAR_12->x;
 VAR_11->y = VAR_12->y;
 VAR_11->w = VAR_12->w;
 VAR_11->h = VAR_12->h;

 if (VAR_9)
 {
  if (VAR_11->w > VAR_10 || VAR_11->h > VAR_10)
   FUNC_0(VAR_8, "texture size (%d x %d) exceeds implementation limit (%d)", VAR_11->w, VAR_11->h, VAR_10);
  FUNC_3(VAR_6, 1);
  FUNC_4(VAR_3, 0, VAR_2, VAR_11->w, VAR_11->h, 0, VAR_12->n == 4 ? VAR_2 : VAR_1, VAR_7, VAR_12->samples);
  VAR_11->s = 1;
  VAR_11->t = 1;
 }
 else
 {
  int VAR_13 = FUNC_7(VAR_11->w);
  int VAR_14 = FUNC_7(VAR_11->h);
  if (VAR_13 > VAR_10 || VAR_14 > VAR_10)
   FUNC_0(VAR_8, "texture size (%d x %d) exceeds implementation limit (%d)", VAR_13, VAR_14, VAR_10);
  FUNC_3(VAR_6, 1);
  FUNC_4(VAR_3, 0, VAR_2, VAR_13, VAR_14, 0, VAR_2, VAR_7, ((void*)0));
  FUNC_6(VAR_3, 0, 0, 0, VAR_11->w, VAR_11->h, VAR_12->n == 4 ? VAR_2 : VAR_1, VAR_7, VAR_12->samples);
  VAR_11->s = (float) VAR_11->w / VAR_13;
  VAR_11->t = (float) VAR_11->h / VAR_14;
 }
}
