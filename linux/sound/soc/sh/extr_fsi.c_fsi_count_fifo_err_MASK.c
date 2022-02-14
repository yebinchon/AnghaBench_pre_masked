
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int uerr_num; int oerr_num; } ;
struct TYPE_3__ {int uerr_num; int oerr_num; } ;
struct fsi_priv {TYPE_2__ capture; TYPE_1__ playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsi_priv*,int ) ;
 int FUNC_1 (struct fsi_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fsi_priv *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_1);
 u32 VAR_6 = FUNC_0(VAR_4, VAR_0);

 if (VAR_5 & VAR_2)
  VAR_4->playback.oerr_num++;

 if (VAR_5 & VAR_3)
  VAR_4->playback.uerr_num++;

 if (VAR_6 & VAR_2)
  VAR_4->capture.oerr_num++;

 if (VAR_6 & VAR_3)
  VAR_4->capture.uerr_num++;

 FUNC_1(VAR_4, VAR_1, 0);
 FUNC_1(VAR_4, VAR_0, 0);
}
