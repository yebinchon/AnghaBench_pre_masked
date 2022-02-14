
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long offset; } ;
struct snd_motu {int hwdep_wait; int lock; int msg; TYPE_1__ async_handler; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fw_card*,struct fw_request*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fw_card *VAR_3, struct fw_request *VAR_4,
      int VAR_5, int VAR_6, int VAR_7,
      int VAR_8, unsigned long long VAR_9,
      void *VAR_10, size_t VAR_11, void *VAR_12)
{
 struct snd_motu *VAR_13 = VAR_12;
 __be32 *VAR_14 = (__be32 *)VAR_10;
 unsigned long VAR_15;

 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_3, VAR_4, VAR_1);
  return;
 }

 if (VAR_9 != VAR_13->async_handler.offset || VAR_11 != 4) {
  FUNC_1(VAR_3, VAR_4, VAR_0);
  return;
 }

 FUNC_2(&VAR_13->lock, VAR_15);
 VAR_13->msg = FUNC_0(*VAR_14);
 FUNC_3(&VAR_13->lock, VAR_15);

 FUNC_1(VAR_3, VAR_4, VAR_1);

 FUNC_4(&VAR_13->hwdep_wait);
}
