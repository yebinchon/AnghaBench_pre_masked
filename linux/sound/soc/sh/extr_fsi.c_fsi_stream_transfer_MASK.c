
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int dummy; } ;
struct fsi_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_stream*,int ,struct fsi_priv*,struct fsi_stream*) ;
 struct fsi_priv* FUNC_1 (struct fsi_stream*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct fsi_stream *VAR_2)
{
 struct fsi_priv *VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_1, VAR_3, VAR_2);
}
