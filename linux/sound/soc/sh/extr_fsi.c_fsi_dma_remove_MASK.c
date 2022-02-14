
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int * chan; } ;
struct fsi_priv {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsi_priv*,struct fsi_stream*) ;

__attribute__((used)) static int FUNC_2(struct fsi_priv *VAR_0, struct fsi_stream *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);

 if (VAR_1->chan)
  FUNC_0(VAR_1->chan);

 VAR_1->chan = ((void*)0);
 return 0;
}
