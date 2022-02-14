
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsi_priv*) ;
 int FUNC_1 (struct fsi_priv*,struct fsi_stream*) ;

__attribute__((used)) static u32 FUNC_2(struct fsi_priv *VAR_4, struct fsi_stream *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4, VAR_5);
 int VAR_7 = FUNC_0(VAR_4);
 u32 VAR_8;

 if (VAR_7)
  VAR_8 = VAR_6 ? VAR_1 : VAR_0;
 else
  VAR_8 = VAR_6 ? VAR_3 : VAR_2;

 return VAR_8;
}
