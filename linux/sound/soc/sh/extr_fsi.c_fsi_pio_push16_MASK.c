
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct fsi_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fsi_priv*) ;
 int FUNC_1 (struct fsi_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fsi_priv *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_1)) {





  u32 *VAR_5 = (u32 *)VAR_2;

  for (VAR_4 = 0; VAR_4 < VAR_3 / 2; VAR_4++)
   FUNC_1(VAR_1, VAR_0, VAR_5[VAR_4]);
 } else {

  u16 *VAR_6 = (u16 *)VAR_2;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_1(VAR_1, VAR_0, ((u32)*(VAR_6 + VAR_4) << 8));
 }
}
