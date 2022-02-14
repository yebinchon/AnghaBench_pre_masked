
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsi_stream {TYPE_1__* substream; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int lock; } ;
struct TYPE_2__ {scalar_t__ runtime; } ;


 struct fsi_master* FUNC_0 (struct fsi_priv*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct fsi_priv *VAR_0,
     struct fsi_stream *VAR_1)
{
 struct fsi_master *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_4 = !!(VAR_1->substream && VAR_1->substream->runtime);
 FUNC_2(&VAR_2->lock, VAR_3);

 return VAR_4;
}
