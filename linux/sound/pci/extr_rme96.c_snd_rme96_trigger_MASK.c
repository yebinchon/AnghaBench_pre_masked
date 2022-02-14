
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int rcreg; scalar_t__ iobase; int wcreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct rme96 *VAR_17,
    int VAR_18)
{
 if (VAR_18 & VAR_10)
  FUNC_1(0, VAR_17->iobase + VAR_3);
 if (VAR_18 & VAR_9)
  FUNC_1(0, VAR_17->iobase + VAR_4);
 if (VAR_18 & VAR_8) {
  VAR_17->rcreg = FUNC_0(VAR_17->iobase + VAR_2);
  if (VAR_17->rcreg & VAR_5)
   FUNC_1(0, VAR_17->iobase + VAR_0);
 }
 if (VAR_18 & VAR_7) {
  VAR_17->rcreg = FUNC_0(VAR_17->iobase + VAR_2);
  if (VAR_17->rcreg & VAR_6)
   FUNC_1(0, VAR_17->iobase + VAR_1);
 }
 if (VAR_18 & VAR_12)
  VAR_17->wcreg |= VAR_15;
 if (VAR_18 & VAR_14)
  VAR_17->wcreg &= ~VAR_15;
 if (VAR_18 & VAR_11)
  VAR_17->wcreg |= VAR_16;
 if (VAR_18 & VAR_13)
  VAR_17->wcreg &= ~VAR_16;
 FUNC_1(VAR_17->wcreg, VAR_17->iobase + VAR_2);
}
