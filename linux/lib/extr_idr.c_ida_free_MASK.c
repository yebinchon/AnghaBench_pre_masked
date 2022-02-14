
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_bitmap {int bitmap; } ;
struct ida {int xa; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int,char*,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct ida_bitmap*) ;
 int FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (struct ida_bitmap*) ;
 int * FUNC_8 (unsigned long) ;
 unsigned long FUNC_9 (struct ida_bitmap*) ;
 int VAR_3 ;
 struct ida_bitmap* FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,unsigned long) ;

void FUNC_15(struct ida *VAR_4, unsigned int VAR_5)
{
 FUNC_2(VAR_3, &VAR_4->xa, VAR_5 / VAR_1);
 unsigned VAR_6 = VAR_5 % VAR_1;
 struct ida_bitmap *VAR_7;
 unsigned long VAR_8;

 FUNC_0((int)VAR_5 < 0);

 FUNC_11(&VAR_3, VAR_8);
 VAR_7 = FUNC_10(&VAR_3);

 if (FUNC_7(VAR_7)) {
  unsigned long VAR_9 = FUNC_9(VAR_7);
  if (VAR_6 >= VAR_0)
   goto err;
  if (!(VAR_9 & (1UL << VAR_6)))
   goto err;
  VAR_9 &= ~(1UL << VAR_6);
  if (!VAR_9)
   goto delete;
  FUNC_13(&VAR_3, FUNC_8(VAR_9));
 } else {
  if (!FUNC_6(VAR_6, VAR_7->bitmap))
   goto err;
  FUNC_3(VAR_6, VAR_7->bitmap);
  FUNC_12(&VAR_3, VAR_2);
  if (FUNC_4(VAR_7->bitmap, VAR_1)) {
   FUNC_5(VAR_7);
delete:
   FUNC_13(&VAR_3, ((void*)0));
  }
 }
 FUNC_14(&VAR_3, VAR_8);
 return;
 err:
 FUNC_14(&VAR_3, VAR_8);
 FUNC_1(1, "ida_free called for id=%d which is not allocated.\n", VAR_5);
}
