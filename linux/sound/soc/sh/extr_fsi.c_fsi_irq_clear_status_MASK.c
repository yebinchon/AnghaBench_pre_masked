
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_priv {int capture; int playback; } ;
struct fsi_master {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct fsi_master*,int ,int ,int ) ;
 struct fsi_master* FUNC_2 (struct fsi_priv*) ;
 int FUNC_3 (struct fsi_priv*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct fsi_priv *VAR_1)
{
 u32 VAR_2 = 0;
 struct fsi_master *VAR_3 = FUNC_2(VAR_1);

 VAR_2 |= FUNC_0(1, FUNC_3(VAR_1, &VAR_1->playback));
 VAR_2 |= FUNC_0(1, FUNC_3(VAR_1, &VAR_1->capture));


 FUNC_1(VAR_3, VAR_0, VAR_2, 0);
}
