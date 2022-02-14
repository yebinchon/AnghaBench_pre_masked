
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_ext_stream {scalar_t__ pplc_addr; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hdac_ext_stream*) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned char,unsigned char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char,scalar_t__) ;

void FUNC_5(struct hdac_ext_stream *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);

 FUNC_2(VAR_2->pplc_addr, VAR_1,
    VAR_0, VAR_0);
 FUNC_3(3);
 VAR_4 = 50;
 do {
  VAR_3 = FUNC_0(VAR_2->pplc_addr + VAR_1) &
    VAR_0;
  if (VAR_3)
   break;
  FUNC_3(3);
 } while (--VAR_4);
 VAR_3 &= ~VAR_0;
 FUNC_4(VAR_3, VAR_2->pplc_addr + VAR_1);
 FUNC_3(3);

 VAR_4 = 50;

 do {
  VAR_3 = FUNC_0(VAR_2->pplc_addr + VAR_1) & VAR_0;
  if (!VAR_3)
   break;
  FUNC_3(3);
 } while (--VAR_4);

}
