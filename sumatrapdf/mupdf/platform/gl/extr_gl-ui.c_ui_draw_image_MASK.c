
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture {scalar_t__ y; scalar_t__ w; scalar_t__ x; int s; scalar_t__ h; int t; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

void FUNC_9(struct texture *VAR_5, float VAR_6, float VAR_7)
{
 FUNC_2(VAR_1, VAR_2);
 FUNC_5(VAR_0);
 FUNC_1(VAR_3, VAR_5->id);
 FUNC_5(VAR_3);
 FUNC_0(VAR_4);
 {
  FUNC_3(1, 1, 1, 1);
  FUNC_7(0, VAR_5->t);
  FUNC_8(VAR_6 + VAR_5->x, VAR_7 + VAR_5->y + VAR_5->h);
  FUNC_7(0, 0);
  FUNC_8(VAR_6 + VAR_5->x, VAR_7 + VAR_5->y);
  FUNC_7(VAR_5->s, VAR_5->t);
  FUNC_8(VAR_6 + VAR_5->x + VAR_5->w, VAR_7 + VAR_5->y + VAR_5->h);
  FUNC_7(VAR_5->s, 0);
  FUNC_8(VAR_6 + VAR_5->x + VAR_5->w, VAR_7 + VAR_5->y);
 }
 FUNC_6();
 FUNC_4(VAR_3);
 FUNC_4(VAR_0);
}
