
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsi_master* FUNC_0 (struct fsi_priv*) ;
 int FUNC_1 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_2 (struct fsi_priv*,struct fsi_stream*) ;
 scalar_t__ FUNC_3 (struct fsi_priv*) ;
 scalar_t__ FUNC_4 (struct fsi_priv*) ;
 int FUNC_5 (struct fsi_master*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct fsi_priv *VAR_3, struct fsi_stream *VAR_4,
          int VAR_5)
{
 struct fsi_master *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7 = FUNC_4(VAR_3) ? VAR_1 : VAR_2;

 if (VAR_5)
  FUNC_2(VAR_3, VAR_4);
 else
  FUNC_1(VAR_3, VAR_4);

 if (FUNC_3(VAR_3))
  FUNC_5(VAR_6, VAR_0, VAR_7, (VAR_5) ? VAR_7 : 0);

 return 0;
}
