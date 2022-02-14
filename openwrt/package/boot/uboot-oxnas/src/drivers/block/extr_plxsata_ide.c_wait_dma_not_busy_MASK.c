
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(int VAR_5)
{
 unsigned int VAR_6 = 0;


 int VAR_7 = VAR_3;
 do {
  if (!FUNC_0()) {
   break;
  }
  FUNC_3(100);
 } while (--VAR_7);

 if (!VAR_7) {
  FUNC_1("wait_dma_not_busy() Timed out of wait for DMA not busy\n");
  VAR_6 = 1;
 }

 if (VAR_6) {

  unsigned int VAR_8 = FUNC_2(
   VAR_4 + VAR_0);
  VAR_8 |= VAR_1;
  FUNC_4(VAR_8, VAR_4 + VAR_0);



  VAR_7 = VAR_2;
  do {
   if (!FUNC_0()) {
    break;
   }
   FUNC_3(10);
  } while (--VAR_7);

  if (!VAR_7) {
   FUNC_1("wait_dma_not_busy() Timed out of wait for DMA channel abort\n");
  } else {

   VAR_6 = 0;
  }


  VAR_8 = FUNC_2(VAR_4 + VAR_0);
  VAR_8 &= ~VAR_1;
  FUNC_4(VAR_8, VAR_4 + VAR_0);
 }

 return !VAR_6;
}
