
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsi_master*,int ,int,int) ;
 struct fsi_master* FUNC_1 (struct fsi_priv*) ;
 scalar_t__ FUNC_2 (struct fsi_priv*) ;

__attribute__((used)) static void FUNC_3(struct fsi_priv *VAR_4, int VAR_5)
{
 struct fsi_master *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7, VAR_8;

 VAR_7 = VAR_0 | VAR_1;
 VAR_8 = VAR_5 ? VAR_7 : 0;

 FUNC_2(VAR_4) ?
  FUNC_0(VAR_6, VAR_2, VAR_7, VAR_8) :
  FUNC_0(VAR_6, VAR_3, VAR_7, VAR_8);
}
