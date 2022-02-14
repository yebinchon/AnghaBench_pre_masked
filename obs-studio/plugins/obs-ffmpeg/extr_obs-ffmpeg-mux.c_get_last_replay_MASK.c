
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct ffmpeg_muxer {TYPE_1__ path; int muxing; } ;
typedef int calldata_t ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, calldata_t *VAR_1)
{
 struct ffmpeg_muxer *VAR_2 = VAR_0;
 if (!FUNC_1(&VAR_2->muxing))
  FUNC_0(VAR_1, "path", VAR_2->path.array);
}
