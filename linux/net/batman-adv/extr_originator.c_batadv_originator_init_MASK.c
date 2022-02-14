
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int orig_work; scalar_t__ orig_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;

int FUNC_5(struct batadv_priv *VAR_5)
{
 if (VAR_5->orig_hash)
  return 0;

 VAR_5->orig_hash = FUNC_1(1024);

 if (!VAR_5->orig_hash)
  goto err;

 FUNC_2(VAR_5->orig_hash,
       &VAR_3);

 FUNC_0(&VAR_5->orig_work, VAR_4);
 FUNC_4(VAR_2,
      &VAR_5->orig_work,
      FUNC_3(VAR_0));

 return 0;

err:
 return -VAR_1;
}
