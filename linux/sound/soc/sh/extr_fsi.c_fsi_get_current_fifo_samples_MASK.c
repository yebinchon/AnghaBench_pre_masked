
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsi_priv*,int) ;
 int FUNC_1 (struct fsi_priv*,int ) ;
 int FUNC_2 (struct fsi_priv*,struct fsi_stream*) ;

__attribute__((used)) static int FUNC_3(struct fsi_priv *VAR_2,
     struct fsi_stream *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, VAR_3);
 u32 VAR_5;
 int VAR_6;

 VAR_5 = VAR_4 ?
  FUNC_1(VAR_2, VAR_1) :
  FUNC_1(VAR_2, VAR_0);

 VAR_6 = 0x1ff & (VAR_5 >> 8);

 return FUNC_0(VAR_2, VAR_6);
}
