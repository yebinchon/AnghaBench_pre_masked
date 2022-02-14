
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daio {int dummy; } ;
struct dao {struct daio daio; } ;
struct daio_mgr {int mgr_lock; int mgr; int (* commit_write ) (struct daio_mgr*) ;int (* daio_enable ) (struct daio_mgr*,struct daio*) ;TYPE_1__* card; } ;
struct daio_desc {scalar_t__ type; } ;
struct dai {struct daio daio; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dao*,struct daio_desc const*,struct daio_mgr*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct dao*,struct daio_desc const*,struct daio_mgr*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct dao*) ;
 struct dao* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct daio_mgr*,struct daio*) ;
 int FUNC_10 (struct daio_mgr*) ;

__attribute__((used)) static int FUNC_11(struct daio_mgr *VAR_3,
   const struct daio_desc *VAR_4,
   struct daio **VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 *VAR_5 = ((void*)0);


 FUNC_7(&VAR_3->mgr_lock, VAR_7);
 VAR_6 = FUNC_1(&VAR_3->mgr, VAR_4->type);
 FUNC_8(&VAR_3->mgr_lock, VAR_7);
 if (VAR_6) {
  FUNC_4(VAR_3->card->dev,
   "Can't meet DAIO resource request!\n");
  return VAR_6;
 }

 VAR_6 = -VAR_1;

 if (VAR_4->type <= VAR_0) {
  struct dao *VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   goto error;

  VAR_6 = FUNC_3(VAR_8, VAR_4, VAR_3);
  if (VAR_6) {
   FUNC_5(VAR_8);
   goto error;
  }

  *VAR_5 = &VAR_8->daio;
 } else {
  struct dai *VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   goto error;

  VAR_6 = FUNC_0(VAR_9, VAR_4, VAR_3);
  if (VAR_6) {
   FUNC_5(VAR_9);
   goto error;
  }

  *VAR_5 = &VAR_9->daio;
 }

 VAR_3->daio_enable(VAR_3, *VAR_5);
 VAR_3->commit_write(VAR_3);

 return 0;

error:
 FUNC_7(&VAR_3->mgr_lock, VAR_7);
 FUNC_2(&VAR_3->mgr, VAR_4->type);
 FUNC_8(&VAR_3->mgr_lock, VAR_7);
 return VAR_6;
}
