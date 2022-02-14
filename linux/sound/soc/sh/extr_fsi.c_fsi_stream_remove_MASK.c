
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int dummy; } ;
struct fsi_priv {struct fsi_stream capture; struct fsi_stream playback; } ;


 int FUNC_0 (struct fsi_stream*,int ,struct fsi_priv*,struct fsi_stream*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fsi_priv *VAR_1)
{
 struct fsi_stream *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = &VAR_1->playback;
 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_2);

 VAR_2 = &VAR_1->capture;
 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_2);

 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
