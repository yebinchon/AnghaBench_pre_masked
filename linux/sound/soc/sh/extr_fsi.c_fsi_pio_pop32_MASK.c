
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fsi_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_priv*,int ) ;

__attribute__((used)) static void FUNC_1(struct fsi_priv *VAR_1, u8 *VAR_2, int VAR_3)
{
 u32 *VAR_4 = (u32 *)VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  *(VAR_4 + VAR_5) = FUNC_0(VAR_1, VAR_0);
}
