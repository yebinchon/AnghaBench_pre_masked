
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct mp_decode {scalar_t__ hw_format; TYPE_4__* sw_frame; TYPE_4__* frame; TYPE_4__* hw_frame; scalar_t__ hw; TYPE_1__ pkt; int in_frame; int decoder; scalar_t__ audio; } ;
struct TYPE_7__ {scalar_t__ format; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ,int*,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int*,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct mp_decode *VAR_2, int *VAR_3)
{
 int VAR_4;
 *VAR_3 = 0;
 if (VAR_2->audio) {
  VAR_4 = FUNC_2(VAR_2->decoder, VAR_2->in_frame, VAR_3,
         &VAR_2->pkt);
 } else {
  VAR_4 = FUNC_3(VAR_2->decoder, VAR_2->in_frame, VAR_3,
         &VAR_2->pkt);
 }
 VAR_2->frame = VAR_2->sw_frame;
 return VAR_4;
}
