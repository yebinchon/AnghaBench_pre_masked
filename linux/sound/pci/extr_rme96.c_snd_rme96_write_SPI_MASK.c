
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rme96 {int areg; scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct rme96 *VAR_4, u16 VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  if (VAR_5 & 0x8000) {
   VAR_4->areg |= VAR_1;
  } else {
   VAR_4->areg &= ~VAR_1;
  }
  VAR_4->areg &= ~(VAR_0 | VAR_2);
  FUNC_1(VAR_4->areg, VAR_4->iobase + VAR_3);
  FUNC_0(10);
  VAR_4->areg |= VAR_0;
  FUNC_1(VAR_4->areg, VAR_4->iobase + VAR_3);
  FUNC_0(10);
  VAR_5 <<= 1;
 }
 VAR_4->areg &= ~(VAR_0 | VAR_1);
 VAR_4->areg |= VAR_2;
 FUNC_1(VAR_4->areg, VAR_4->iobase + VAR_3);
 FUNC_0(10);
 VAR_4->areg &= ~VAR_2;
 FUNC_1(VAR_4->areg, VAR_4->iobase + VAR_3);
}
