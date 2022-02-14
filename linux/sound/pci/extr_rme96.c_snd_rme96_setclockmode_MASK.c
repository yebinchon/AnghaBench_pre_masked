
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {scalar_t__ iobase; int areg; int wcreg; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct rme96 *VAR_5,
         int VAR_6)
{
 switch (VAR_6) {
 case 129:

  VAR_5->wcreg &= ~VAR_4;
  VAR_5->areg &= ~VAR_1;
  break;
 case 130:

  VAR_5->wcreg |= VAR_4;
  VAR_5->areg &= ~VAR_1;
  break;
 case 128:

  VAR_5->wcreg |= VAR_4;
  VAR_5->areg |= VAR_1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_5->wcreg, VAR_5->iobase + VAR_3);
 FUNC_0(VAR_5->areg, VAR_5->iobase + VAR_2);
 return 0;
}
