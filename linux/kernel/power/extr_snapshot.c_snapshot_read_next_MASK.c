
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {int dummy; } ;
struct snapshot_handle {scalar_t__ cur; void* buffer; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 void* VAR_4 ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (void*,void*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct swsusp_info*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (void*,int *) ;
 void* FUNC_10 (struct page*) ;
 struct page* FUNC_11 (int ) ;

int FUNC_12(struct snapshot_handle *VAR_9)
{
 if (VAR_9->cur > VAR_7 + VAR_6)
  return 0;

 if (!VAR_4) {

  VAR_4 = FUNC_3(VAR_1, VAR_3);
  if (!VAR_4)
   return -VAR_0;
 }
 if (!VAR_9->cur) {
  int VAR_10;

  VAR_10 = FUNC_4((struct swsusp_info *)VAR_4);
  if (VAR_10)
   return VAR_10;
  VAR_9->buffer = VAR_4;
  FUNC_8(&VAR_8);
  FUNC_8(&VAR_5);
 } else if (VAR_9->cur <= VAR_7) {
  FUNC_1(VAR_4);
  FUNC_9(VAR_4, &VAR_8);
 } else {
  struct page *VAR_11;

  VAR_11 = FUNC_11(FUNC_7(&VAR_5));
  if (FUNC_0(VAR_11)) {





   void *VAR_12;

   VAR_12 = FUNC_5(VAR_11);
   FUNC_2(VAR_4, VAR_12);
   FUNC_6(VAR_12);
   VAR_9->buffer = VAR_4;
  } else {
   VAR_9->buffer = FUNC_10(VAR_11);
  }
 }
 VAR_9->cur++;
 return VAR_2;
}
