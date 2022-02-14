
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unwind_entry_cb_t ;
typedef scalar_t__ unw_word_t ;
typedef int unw_cursor_t ;
typedef int * unw_addr_space_t ;
typedef scalar_t__ u64 ;
struct unwind_info {TYPE_3__* thread; TYPE_1__* sample; } ;
struct TYPE_8__ {scalar_t__ order; } ;
struct TYPE_7__ {TYPE_2__* mg; } ;
struct TYPE_6__ {int * addr_space; } ;
struct TYPE_5__ {int user_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_3__*,int ,void*) ;
 int FUNC_3 (scalar_t__*,int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int *,int *,struct unwind_info*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct unwind_info *VAR_4, unwind_entry_cb_t VAR_5,
         void *VAR_6, int VAR_7)
{
 u64 VAR_8;
 unw_word_t VAR_9[VAR_7];
 unw_addr_space_t VAR_10;
 unw_cursor_t VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_3(&VAR_8, &VAR_4->sample->user_regs,
        VAR_0);
 if (VAR_12)
  return VAR_12;

 VAR_9[VAR_13++] = (unw_word_t) VAR_8;





 if (VAR_7 - 1 > 0) {
  FUNC_0(!VAR_4->thread, "WARNING: ui->thread is NULL");
  VAR_10 = VAR_4->thread->mg->addr_space;

  if (VAR_10 == ((void*)0))
   return -1;

  VAR_12 = FUNC_5(&VAR_11, VAR_10, VAR_4);
  if (VAR_12)
   FUNC_1(VAR_12);

  while (!VAR_12 && (FUNC_7(&VAR_11) > 0) && VAR_13 < VAR_7) {
   FUNC_4(&VAR_11, VAR_2, &VAR_9[VAR_13]);
   if (FUNC_6(&VAR_11) <= 0)
    --VAR_9[VAR_13];

   ++VAR_13;
  }

  VAR_7 = VAR_13;
 }




 for (VAR_13 = 0; VAR_13 < VAR_7 && !VAR_12; VAR_13++) {
  int VAR_14 = VAR_13;

  if (VAR_3.order == VAR_1)
   VAR_14 = VAR_7 - VAR_13 - 1;
  VAR_12 = VAR_9[VAR_14] ? FUNC_2(VAR_9[VAR_14], VAR_4->thread, VAR_5, VAR_6) : 0;
 }

 return VAR_12;
}
