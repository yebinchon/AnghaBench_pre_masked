
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct TYPE_6__ {scalar_t__ add_time; scalar_t__ use_time; } ;
struct TYPE_5__ {scalar_t__ hard_add_expires_seconds; scalar_t__ hard_use_expires_seconds; scalar_t__ soft_add_expires_seconds; scalar_t__ soft_use_expires_seconds; } ;
struct TYPE_4__ {int dead; } ;
struct xfrm_policy {int lock; int timer; TYPE_3__ curlft; TYPE_2__ lft; int index; TYPE_1__ walk; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct xfrm_policy* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xfrm_policy*,int,int,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct xfrm_policy*) ;
 int FUNC_9 (struct xfrm_policy*) ;
 int FUNC_10 (struct xfrm_policy*,int) ;
 int FUNC_11 (int ) ;
 struct xfrm_policy* VAR_4 ;

__attribute__((used)) static void FUNC_12(struct timer_list *VAR_5)
{
 struct xfrm_policy *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_3);
 time64_t VAR_7 = FUNC_2();
 time64_t VAR_8 = VAR_0;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_5(&VAR_6->lock);

 if (FUNC_7(VAR_6->walk.dead))
  goto out;

 VAR_10 = FUNC_11(VAR_6->index);

 if (VAR_6->lft.hard_add_expires_seconds) {
  time64_t VAR_11 = VAR_6->lft.hard_add_expires_seconds +
   VAR_6->curlft.add_time - VAR_7;
  if (VAR_11 <= 0)
   goto expired;
  if (VAR_11 < VAR_8)
   VAR_8 = VAR_11;
 }
 if (VAR_6->lft.hard_use_expires_seconds) {
  time64_t VAR_12 = VAR_6->lft.hard_use_expires_seconds +
   (VAR_6->curlft.use_time ? : VAR_6->curlft.add_time) - VAR_7;
  if (VAR_12 <= 0)
   goto expired;
  if (VAR_12 < VAR_8)
   VAR_8 = VAR_12;
 }
 if (VAR_6->lft.soft_add_expires_seconds) {
  time64_t VAR_13 = VAR_6->lft.soft_add_expires_seconds +
   VAR_6->curlft.add_time - VAR_7;
  if (VAR_13 <= 0) {
   VAR_9 = 1;
   VAR_13 = VAR_1;
  }
  if (VAR_13 < VAR_8)
   VAR_8 = VAR_13;
 }
 if (VAR_6->lft.soft_use_expires_seconds) {
  time64_t VAR_14 = VAR_6->lft.soft_use_expires_seconds +
   (VAR_6->curlft.use_time ? : VAR_6->curlft.add_time) - VAR_7;
  if (VAR_14 <= 0) {
   VAR_9 = 1;
   VAR_14 = VAR_1;
  }
  if (VAR_14 < VAR_8)
   VAR_8 = VAR_14;
 }

 if (VAR_9)
  FUNC_1(VAR_6, VAR_10, 0, 0);
 if (VAR_8 != VAR_0 &&
     !FUNC_4(&VAR_6->timer, VAR_2 + FUNC_3(VAR_8)))
  FUNC_8(VAR_6);

out:
 FUNC_6(&VAR_6->lock);
 FUNC_9(VAR_6);
 return;

expired:
 FUNC_6(&VAR_6->lock);
 if (!FUNC_10(VAR_6, VAR_10))
  FUNC_1(VAR_6, VAR_10, 1, 0);
 FUNC_9(VAR_6);
}
