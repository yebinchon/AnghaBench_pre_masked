
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct ida_bitmap {unsigned long* bitmap; } ;
struct ida {int xa; } ;
typedef int gfp_t ;
struct TYPE_11__ {unsigned int xa_index; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__,int *,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long*,unsigned int) ;
 unsigned int FUNC_3 (unsigned long*,unsigned int,unsigned int) ;
 int FUNC_4 (struct ida_bitmap*) ;
 struct ida_bitmap* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct ida_bitmap*) ;
 struct ida_bitmap* FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (struct ida_bitmap*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 struct ida_bitmap* FUNC_11 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_12 (TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,unsigned int) ;
 int FUNC_15 (TYPE_1__*,struct ida_bitmap*) ;
 int FUNC_16 (TYPE_1__*,unsigned long) ;

int FUNC_17(struct ida *VAR_8, unsigned int VAR_9, unsigned int VAR_10,
   gfp_t VAR_11)
{
 FUNC_0(VAR_7, &VAR_8->xa, VAR_9 / VAR_4);
 unsigned VAR_12 = VAR_9 % VAR_4;
 unsigned long VAR_13;
 struct ida_bitmap *VAR_14, *VAR_15 = ((void*)0);

 if ((int)VAR_9 < 0)
  return -VAR_2;

 if ((int)VAR_10 < 0)
  VAR_10 = VAR_5;

retry:
 FUNC_12(&VAR_7, VAR_13);
next:
 VAR_14 = FUNC_11(&VAR_7, VAR_10 / VAR_4, VAR_6);
 if (VAR_7.xa_index > VAR_9 / VAR_4)
  VAR_12 = 0;
 if (VAR_7.xa_index * VAR_4 + VAR_12 > VAR_10)
  goto nospc;

 if (FUNC_6(VAR_14)) {
  unsigned long VAR_16 = FUNC_8(VAR_14);

  if (VAR_12 < VAR_0) {
   VAR_12 = FUNC_3(&VAR_16, VAR_0, VAR_12);
   if (VAR_7.xa_index * VAR_4 + VAR_12 > VAR_10)
    goto nospc;
   if (VAR_12 < VAR_0) {
    VAR_16 |= 1UL << VAR_12;
    FUNC_15(&VAR_7, FUNC_7(VAR_16));
    goto out;
   }
  }
  VAR_14 = VAR_15;
  if (!VAR_14)
   VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_3);
  if (!VAR_14)
   goto alloc;
  VAR_14->bitmap[0] = VAR_16;
  FUNC_15(&VAR_7, VAR_14);
  if (FUNC_10(&VAR_7)) {
   VAR_14->bitmap[0] = 0;
   goto out;
  }
 }

 if (VAR_14) {
  VAR_12 = FUNC_3(VAR_14->bitmap, VAR_4, VAR_12);
  if (VAR_7.xa_index * VAR_4 + VAR_12 > VAR_10)
   goto nospc;
  if (VAR_12 == VAR_4)
   goto next;

  FUNC_1(VAR_12, VAR_14->bitmap);
  if (FUNC_2(VAR_14->bitmap, VAR_4))
   FUNC_9(&VAR_7, VAR_6);
 } else {
  if (VAR_12 < VAR_0) {
   VAR_14 = FUNC_7(1UL << VAR_12);
  } else {
   VAR_14 = VAR_15;
   if (!VAR_14)
    VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_3);
   if (!VAR_14)
    goto alloc;
   FUNC_1(VAR_12, VAR_14->bitmap);
  }
  FUNC_15(&VAR_7, VAR_14);
 }
out:
 FUNC_16(&VAR_7, VAR_13);
 if (FUNC_13(&VAR_7, VAR_11)) {
  VAR_7.xa_index = VAR_9 / VAR_4;
  VAR_12 = VAR_9 % VAR_4;
  goto retry;
 }
 if (VAR_14 != VAR_15)
  FUNC_4(VAR_15);
 if (FUNC_10(&VAR_7))
  return FUNC_10(&VAR_7);
 return VAR_7.xa_index * VAR_4 + VAR_12;
alloc:
 FUNC_16(&VAR_7, VAR_13);
 VAR_15 = FUNC_5(sizeof(*VAR_14), VAR_11);
 if (!VAR_15)
  return -VAR_1;
 FUNC_14(&VAR_7, VAR_9 / VAR_4);
 VAR_12 = VAR_9 % VAR_4;
 goto retry;
nospc:
 FUNC_16(&VAR_7, VAR_13);
 return -VAR_2;
}
