
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct fsi_master*,int ,int ,int ) ;
 struct fsi_master* FUNC_2 (struct fsi_priv*) ;
 int FUNC_3 (struct fsi_priv*,struct fsi_stream*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct fsi_priv *VAR_2, struct fsi_stream *VAR_3)
{
 u32 VAR_4 = FUNC_0(1, FUNC_3(VAR_2, VAR_3));
 struct fsi_master *VAR_5 = FUNC_2(VAR_2);

 FUNC_1(VAR_5, VAR_1, VAR_4, 0);
 FUNC_1(VAR_5, VAR_0, VAR_4, 0);
}
