
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_package {unsigned char id; int node; int channel_whitelist; int channels; int lock; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int lock; int package_num; int packages; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ncsi_package*) ;
 struct ncsi_package* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct ncsi_package* FUNC_4 (struct ncsi_dev_priv*,unsigned char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

struct ncsi_package *FUNC_8(struct ncsi_dev_priv *VAR_2,
          unsigned char VAR_3)
{
 struct ncsi_package *VAR_4, *VAR_5;
 unsigned long VAR_6;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->id = VAR_3;
 VAR_4->ndp = VAR_2;
 FUNC_5(&VAR_4->lock);
 FUNC_0(&VAR_4->channels);
 VAR_4->channel_whitelist = VAR_1;

 FUNC_6(&VAR_2->lock, VAR_6);
 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_7(&VAR_2->lock, VAR_6);
  FUNC_1(VAR_4);
  return VAR_5;
 }

 FUNC_3(&VAR_4->node, &VAR_2->packages);
 VAR_2->package_num++;
 FUNC_7(&VAR_2->lock, VAR_6);

 return VAR_4;
}
