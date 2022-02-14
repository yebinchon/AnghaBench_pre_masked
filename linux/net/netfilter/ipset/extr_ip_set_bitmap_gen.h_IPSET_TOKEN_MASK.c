
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct mtype {scalar_t__ elements; TYPE_1__ gc; int members; struct ip_set* set; } ;
struct ip_set {int timeout; int lock; int elements; int dsize; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (void*,struct ip_set*) ;
 struct mtype* FUNC_4 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 void* FUNC_5 (struct ip_set*,struct mtype*,scalar_t__) ;
 int FUNC_6 (struct ip_set*,void*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 struct mtype* VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,struct mtype*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct timer_list *VAR_4)
{
 struct mtype *VAR_5 = FUNC_4(VAR_5, VAR_4, VAR_1);
 struct ip_set *VAR_6 = VAR_5->set;
 void *VAR_7;
 u32 VAR_8;




 FUNC_9(&VAR_6->lock);
 for (VAR_8 = 0; VAR_8 < VAR_5->elements; VAR_8++)
  if (FUNC_8(VAR_8, VAR_5, VAR_6->dsize)) {
   VAR_7 = FUNC_5(VAR_6, VAR_5, VAR_8);
   if (FUNC_7(FUNC_3(VAR_7, VAR_6))) {
    FUNC_2(VAR_8, VAR_5->members);
    FUNC_6(VAR_6, VAR_7);
    VAR_6->elements--;
   }
  }
 FUNC_10(&VAR_6->lock);

 VAR_5->gc.expires = VAR_2 + FUNC_0(VAR_6->timeout) * VAR_0;
 FUNC_1(&VAR_5->gc);
}
