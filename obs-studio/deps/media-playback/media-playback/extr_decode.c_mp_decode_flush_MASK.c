
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_decode {int eof; int frame_ready; scalar_t__ frame_pts; int decoder; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mp_decode*) ;

void FUNC_2(struct mp_decode *VAR_0)
{
 FUNC_0(VAR_0->decoder);
 FUNC_1(VAR_0);
 VAR_0->eof = 0;
 VAR_0->frame_pts = 0;
 VAR_0->frame_ready = 0;
}
