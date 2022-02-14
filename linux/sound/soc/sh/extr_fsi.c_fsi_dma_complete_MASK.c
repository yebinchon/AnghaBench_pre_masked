
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int period_samples; } ;
struct fsi_priv {int dummy; } ;


 int FUNC_0 (struct fsi_priv*) ;
 int FUNC_1 (struct fsi_stream*,int ) ;
 struct fsi_priv* FUNC_2 (struct fsi_stream*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct fsi_stream *VAR_1 = (struct fsi_stream *)VAR_0;
 struct fsi_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_1->period_samples);

 FUNC_0(VAR_2);
}
