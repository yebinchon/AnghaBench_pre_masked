
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int card; } ;
struct amixer_mgr {int card; int put_amixer; int get_amixer; int mgr_lock; int mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amixer_mgr*) ;
 struct amixer_mgr* FUNC_1 (int,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,struct hw*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hw *VAR_6, struct amixer_mgr **VAR_7)
{
 int VAR_8;
 struct amixer_mgr *VAR_9;

 *VAR_7 = ((void*)0);
 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_8 = FUNC_2(&VAR_9->mgr, VAR_0, VAR_1, VAR_6);
 if (VAR_8)
  goto error;

 FUNC_3(&VAR_9->mgr_lock);

 VAR_9->get_amixer = VAR_4;
 VAR_9->put_amixer = VAR_5;
 VAR_9->card = VAR_6->card;

 *VAR_7 = VAR_9;

 return 0;

error:
 FUNC_0(VAR_9);
 return VAR_8;
}
