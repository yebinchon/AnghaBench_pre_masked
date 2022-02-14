
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {int cur; int sync_read; void* buffer; } ;
struct chain_allocator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 void* VAR_5 ;
 int FUNC_2 (struct chain_allocator*,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 () ;
 void* FUNC_4 (int *,struct chain_allocator*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int *,int *) ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_14 (void*,int *) ;

int FUNC_15(struct snapshot_handle *VAR_12)
{
 static struct chain_allocator VAR_13;
 int VAR_14 = 0;


 if (VAR_12->cur > 1 && VAR_12->cur > VAR_8 + VAR_7)
  return 0;

 VAR_12->sync_read = 1;

 if (!VAR_12->cur) {
  if (!VAR_5)

   VAR_5 = FUNC_5(VAR_1, VAR_3);

  if (!VAR_5)
   return -VAR_0;

  VAR_12->buffer = VAR_5;
 } else if (VAR_12->cur == 1) {
  VAR_14 = FUNC_8(VAR_5);
  if (VAR_14)
   return VAR_14;

  VAR_11 = ((void*)0);

  VAR_14 = FUNC_9(&VAR_6, VAR_1, VAR_3);
  if (VAR_14)
   return VAR_14;


  VAR_14 = FUNC_11(VAR_7);
  if (VAR_14)
   return VAR_14;

  FUNC_7();
 } else if (VAR_12->cur <= VAR_8 + 1) {
  VAR_14 = FUNC_14(VAR_5, &VAR_6);
  if (VAR_14)
   return VAR_14;

  if (VAR_12->cur == VAR_8 + 1) {
   VAR_14 = FUNC_13(&VAR_9, &VAR_6);
   if (VAR_14)
    return VAR_14;

   FUNC_2(&VAR_13, VAR_1, VAR_4);
   FUNC_10(&VAR_9);
   VAR_10 = ((void*)0);
   VAR_12->buffer = FUNC_4(&VAR_9, &VAR_13);
   VAR_12->sync_read = 0;
   if (FUNC_0(VAR_12->buffer))
    return FUNC_1(VAR_12->buffer);
  }
 } else {
  FUNC_3();

  FUNC_12(VAR_12->buffer);
  FUNC_6(VAR_12->buffer);
  VAR_12->buffer = FUNC_4(&VAR_9, &VAR_13);
  if (FUNC_0(VAR_12->buffer))
   return FUNC_1(VAR_12->buffer);
  if (VAR_12->buffer != VAR_5)
   VAR_12->sync_read = 0;
 }
 VAR_12->cur++;
 return VAR_2;
}
