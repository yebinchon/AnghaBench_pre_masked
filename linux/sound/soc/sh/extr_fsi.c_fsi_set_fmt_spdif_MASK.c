
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_priv {int fmt; int chan_num; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsi_master* FUNC_0 (struct fsi_priv*) ;
 int FUNC_1 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_2(struct fsi_priv *VAR_3)
{
 struct fsi_master *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_4) < 2)
  return -VAR_2;

 VAR_3->fmt = VAR_0 | VAR_1;
 VAR_3->chan_num = 2;

 return 0;
}
