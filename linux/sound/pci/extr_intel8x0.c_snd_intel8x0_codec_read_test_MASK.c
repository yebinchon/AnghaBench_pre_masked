
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel8x0 {unsigned int codec_ready_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct intel8x0*,unsigned int) ;
 unsigned int FUNC_2 (struct intel8x0*,int ) ;
 int FUNC_3 (struct intel8x0*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct intel8x0*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct intel8x0 *VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_4(VAR_3, VAR_4) >= 0) {
  FUNC_1(VAR_3, VAR_4 * 0x80);
  if ((VAR_5 = FUNC_2(VAR_3, FUNC_0(VAR_0))) & VAR_2) {

   FUNC_3(VAR_3, FUNC_0(VAR_0), VAR_5 &
      ~(VAR_3->codec_ready_bits | VAR_1));
  }
 }
}
