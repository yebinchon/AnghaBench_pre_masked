
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_stream {int dummy; } ;
struct fsi_priv {struct fsi_stream playback; } ;



__attribute__((used)) static inline int FUNC_0(struct fsi_priv *VAR_0,
         struct fsi_stream *VAR_1)
{
 return &VAR_0->playback == VAR_1;
}
