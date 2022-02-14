
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpacket2_hdr {int tp_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(int VAR_2, void *VAR_3)
{
 struct tpacket2_hdr *VAR_4 = VAR_3;
 int VAR_5 = 0;

 while (VAR_5 < VAR_0 && VAR_4->tp_status & VAR_1) {
  VAR_5++;
  VAR_4 = VAR_3 + (VAR_5 * FUNC_0());
 }

 return VAR_5;
}
