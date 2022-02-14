
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct j1939_session {scalar_t__ state; int active_session_list_entry; TYPE_1__* priv; } ;
struct TYPE_2__ {int active_session_list_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct j1939_session*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct j1939_session *VAR_3)
{
 bool VAR_4 = 0;

 FUNC_2(&VAR_3->priv->active_session_list_lock);

 if (VAR_3->state >= VAR_0 &&
     VAR_3->state < VAR_1) {
  VAR_4 = 1;

  FUNC_1(&VAR_3->active_session_list_entry);
  VAR_3->state = VAR_2;
  FUNC_0(VAR_3);
 }

 return VAR_4;
}
