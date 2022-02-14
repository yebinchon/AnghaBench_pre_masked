
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ag71xx_ring {scalar_t__ curr; TYPE_2__* buf; } ;
struct ag71xx {struct ag71xx_ring rx_ring; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {int ctrl; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ag71xx *VAR_4)
{
 struct ag71xx_ring *VAR_5 = &VAR_4->rx_ring;
 int VAR_6;

 if (!VAR_5->buf)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
     VAR_5->buf[VAR_6].desc->data = (u32) FUNC_1(VAR_2[VAR_6]);
     FUNC_0((u32) VAR_2[VAR_6], VAR_3);
        VAR_5->buf[VAR_6].desc->ctrl = VAR_1;
    }

 VAR_5->curr = 0;
}
