
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hw {int dummy; } ;
struct TYPE_5__ {int i2sictl; int i2soctl; int spoctl; int spictl; scalar_t__ daoimap; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {int idx; int aim; } ;
struct daio_mgr_ctrl_blk {TYPE_3__ dirty; TYPE_1__ daoimap; int spictl; int spoctl; int i2sctl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hw*,scalar_t__,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_4, void *VAR_5)
{
 struct daio_mgr_ctrl_blk *VAR_6 = VAR_5;
 int VAR_7;

 if (VAR_6->dirty.bf.i2sictl || VAR_6->dirty.bf.i2soctl) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if ((VAR_6->dirty.bf.i2sictl & (0x1 << VAR_7)))
    VAR_6->dirty.bf.i2sictl &= ~(0x1 << VAR_7);

   if ((VAR_6->dirty.bf.i2soctl & (0x1 << VAR_7)))
    VAR_6->dirty.bf.i2soctl &= ~(0x1 << VAR_7);
  }
  FUNC_0(VAR_4, VAR_1, VAR_6->i2sctl);
  FUNC_1(1);
 }
 if (VAR_6->dirty.bf.spoctl) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if ((VAR_6->dirty.bf.spoctl & (0x1 << VAR_7)))
    VAR_6->dirty.bf.spoctl &= ~(0x1 << VAR_7);
  }
  FUNC_0(VAR_4, VAR_3, VAR_6->spoctl);
  FUNC_1(1);
 }
 if (VAR_6->dirty.bf.spictl) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if ((VAR_6->dirty.bf.spictl & (0x1 << VAR_7)))
    VAR_6->dirty.bf.spictl &= ~(0x1 << VAR_7);
  }
  FUNC_0(VAR_4, VAR_2, VAR_6->spictl);
  FUNC_1(1);
 }
 if (VAR_6->dirty.bf.daoimap) {
  FUNC_0(VAR_4, VAR_0+VAR_6->daoimap.idx*4,
     VAR_6->daoimap.aim);
  VAR_6->dirty.bf.daoimap = 0;
 }

 return 0;
}
