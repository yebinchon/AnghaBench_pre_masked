
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ffmpeg_data {int vframe; TYPE_2__* vcodec; TYPE_1__* video; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {int codec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ffmpeg_data *VAR_2)
{
 FUNC_2(VAR_2->video->codec);
 FUNC_1(VAR_2->vframe);



 if (VAR_2->vcodec->id == VAR_0 ||
     VAR_2->vcodec->id == VAR_1)
  return;

 FUNC_0(&VAR_2->vframe);
}
