
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct src_mgr {int mgr_lock; int mgr; TYPE_1__* card; } ;
struct src_desc {scalar_t__ mode; int multi; } ;
struct src {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct src* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct src*) ;
 struct src* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int,unsigned int*) ;
 int FUNC_5 (int *,int,unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct src*,unsigned int,struct src_desc const*,struct src_mgr*) ;

__attribute__((used)) static int
FUNC_9(struct src_mgr *VAR_4, const struct src_desc *VAR_5, struct src **VAR_6)
{
 unsigned int VAR_7 = VAR_3;
 int VAR_8;
 struct src *VAR_9;
 unsigned long VAR_10;

 *VAR_6 = ((void*)0);


 FUNC_6(&VAR_4->mgr_lock, VAR_10);
 if (VAR_2 == VAR_5->mode)
  VAR_8 = FUNC_4(&VAR_4->mgr, VAR_5->multi, &VAR_7);
 else
  VAR_8 = FUNC_4(&VAR_4->mgr, 1, &VAR_7);

 FUNC_7(&VAR_4->mgr_lock, VAR_10);
 if (VAR_8) {
  FUNC_0(VAR_4->card->dev,
   "Can't meet SRC resource request!\n");
  return VAR_8;
 }


 if (VAR_2 == VAR_5->mode)
  VAR_9 = FUNC_1(VAR_5->multi, sizeof(*VAR_9), VAR_1);
 else
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);

 if (!VAR_9) {
  VAR_8 = -VAR_0;
  goto error1;
 }

 VAR_8 = FUNC_8(VAR_9, VAR_7, VAR_5, VAR_4);
 if (VAR_8)
  goto error2;

 *VAR_6 = VAR_9;

 return 0;

error2:
 FUNC_2(VAR_9);
error1:
 FUNC_6(&VAR_4->mgr_lock, VAR_10);
 if (VAR_2 == VAR_5->mode)
  FUNC_5(&VAR_4->mgr, VAR_5->multi, VAR_7);
 else
  FUNC_5(&VAR_4->mgr, 1, VAR_7);

 FUNC_7(&VAR_4->mgr_lock, VAR_10);
 return VAR_8;
}
