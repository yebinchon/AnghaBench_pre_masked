
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {struct fsi_priv* priv; } ;
struct fsi_priv {int dummy; } ;



__attribute__((used)) static struct fsi_priv *FUNC_0(struct fsi_stream *VAR_0)
{
 return VAR_0->priv;
}
