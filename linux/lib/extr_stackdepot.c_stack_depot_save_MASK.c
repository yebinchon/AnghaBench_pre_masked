
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int handle; } ;
struct stack_record {TYPE_1__ handle; struct stack_record* next; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
typedef int depot_stack_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 struct page* FUNC_1 (int,int ) ;
 struct stack_record* FUNC_2 (unsigned long*,unsigned int,size_t,void**,int) ;
 int VAR_6 ;
 struct stack_record* FUNC_3 (struct stack_record*,unsigned long*,unsigned int,size_t) ;
 int FUNC_4 (unsigned long,int ) ;
 size_t FUNC_5 (unsigned long*,unsigned int) ;
 int FUNC_6 (void**) ;
 struct stack_record* VAR_7 ;
 void* FUNC_7 (struct page*) ;
 struct stack_record* FUNC_8 (struct stack_record**) ;
 int FUNC_9 (struct stack_record**,struct stack_record*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct stack_record** VAR_8 ;
 scalar_t__ FUNC_12 (int) ;

depot_stack_handle_t FUNC_13(unsigned long *VAR_9,
          unsigned int VAR_10,
          gfp_t VAR_11)
{
 struct stack_record *VAR_12 = ((void*)0), **VAR_13;
 depot_stack_handle_t VAR_14 = 0;
 struct page *VAR_15 = ((void*)0);
 void *VAR_16 = ((void*)0);
 unsigned long VAR_17;
 u32 VAR_18;

 if (FUNC_12(VAR_10 == 0))
  goto fast_exit;

 VAR_18 = FUNC_5(VAR_9, VAR_10);
 VAR_13 = &VAR_8[VAR_18 & VAR_4];






 VAR_12 = FUNC_3(FUNC_8(VAR_13), VAR_9,
      VAR_10, VAR_18);
 if (VAR_12)
  goto exit;
 if (FUNC_12(!FUNC_8(&VAR_7))) {





  VAR_11 &= ~VAR_2;
  VAR_11 &= (VAR_0 | VAR_1);
  VAR_11 |= VAR_5;
  VAR_15 = FUNC_1(VAR_11, VAR_3);
  if (VAR_15)
   VAR_16 = FUNC_7(VAR_15);
 }

 FUNC_10(&VAR_6, VAR_17);

 VAR_12 = FUNC_3(*VAR_13, VAR_9, VAR_10, VAR_18);
 if (!VAR_12) {
  struct stack_record *VAR_19 =
   FUNC_2(VAR_9, VAR_10,
       VAR_18, &VAR_16, VAR_11);
  if (VAR_19) {
   VAR_19->next = *VAR_13;




   FUNC_9(VAR_13, VAR_19);
   VAR_12 = VAR_19;
  }
 } else if (VAR_16) {




  FUNC_0(!FUNC_6(&VAR_16));
 }

 FUNC_11(&VAR_6, VAR_17);
exit:
 if (VAR_16) {

  FUNC_4((unsigned long)VAR_16, VAR_3);
 }
 if (VAR_12)
  VAR_14 = VAR_12->handle.handle;
fast_exit:
 return VAR_14;
}
