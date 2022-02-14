
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int capture; int playback; } ;
struct fsi_master {TYPE_1__ fsib; TYPE_1__ fsia; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct fsi_master*) ;
 int FUNC_4 (struct fsi_master*,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct fsi_master *VAR_9 = VAR_8;
 u32 VAR_10 = FUNC_3(VAR_9);


 FUNC_4(VAR_9, VAR_6, VAR_4, 0);
 FUNC_4(VAR_9, VAR_6, VAR_4, VAR_4);

 if (VAR_10 & FUNC_0(1, VAR_1))
  FUNC_5(&VAR_9->fsia.playback);
 if (VAR_10 & FUNC_0(1, VAR_3))
  FUNC_5(&VAR_9->fsib.playback);
 if (VAR_10 & FUNC_0(1, VAR_0))
  FUNC_5(&VAR_9->fsia.capture);
 if (VAR_10 & FUNC_0(1, VAR_2))
  FUNC_5(&VAR_9->fsib.capture);

 FUNC_1(&VAR_9->fsia);
 FUNC_1(&VAR_9->fsib);

 FUNC_2(&VAR_9->fsia);
 FUNC_2(&VAR_9->fsib);

 return VAR_5;
}
