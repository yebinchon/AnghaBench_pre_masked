
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mp_decode {int dummy; } ;
struct TYPE_12__ {int fmt; } ;
typedef TYPE_1__ mp_media_t ;
struct TYPE_13__ {scalar_t__ size; } ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,char*,int ,int) ;
 struct mp_decode* FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (struct mp_decode*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(mp_media_t *VAR_2)
{
 AVPacket VAR_3;
 AVPacket VAR_4;
 FUNC_1(&VAR_4);
 VAR_3 = VAR_4;

 int VAR_5 = FUNC_4(VAR_2->fmt, &VAR_4);
 if (VAR_5 < 0) {
  if (VAR_5 != VAR_0)
   FUNC_5(VAR_1, "MP: av_read_frame failed: %s (%d)",
        FUNC_0(VAR_5), VAR_5);
  return VAR_5;
 }

 struct mp_decode *VAR_6 = FUNC_6(VAR_2, &VAR_4);
 if (VAR_6 && VAR_4.size) {
  FUNC_2(&VAR_3, &VAR_4);
  FUNC_7(VAR_6, &VAR_3);
 }

 FUNC_3(&VAR_4);
 return VAR_5;
}
