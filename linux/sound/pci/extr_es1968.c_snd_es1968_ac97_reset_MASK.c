
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1968 {unsigned long io_port; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (unsigned short,unsigned long) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int,unsigned short*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct es1968 *VAR_3)
{
 unsigned long VAR_4 = VAR_3->io_port;

 unsigned short VAR_5;
 unsigned short VAR_6;
 unsigned short VAR_7;
 unsigned int VAR_8;


 VAR_5 = FUNC_2(VAR_4 + 0x36);



 FUNC_5(FUNC_2(VAR_4 + 0x3a) & 0xfffc, VAR_4 + 0x3a);
 FUNC_5(FUNC_2(VAR_4 + 0x3c) & 0xfffc, VAR_4 + 0x3c);


 FUNC_5(0x0000, VAR_4 + 0x36);
 VAR_6 = FUNC_2(VAR_4 + 0x68);
 FUNC_7(VAR_3->pci, 0x58, &VAR_7);
 FUNC_6(VAR_3->pci, VAR_2, &VAR_8);
 if (VAR_7 & 1)
  VAR_6 |= 0x10;
 FUNC_5(0xfffe, VAR_4 + 0x64);
 FUNC_5(0x0001, VAR_4 + 0x68);
 FUNC_5(0x0000, VAR_4 + 0x60);
 FUNC_8(20);
 FUNC_5(0x0001, VAR_4 + 0x60);
 FUNC_3(20);

 FUNC_5(VAR_6 | 0x1, VAR_4 + 0x68);
 FUNC_5((FUNC_2(VAR_4 + 0x38) & 0xfffc) | 0x1, VAR_4 + 0x38);
 FUNC_5((FUNC_2(VAR_4 + 0x3a) & 0xfffc) | 0x1, VAR_4 + 0x3a);
 FUNC_5((FUNC_2(VAR_4 + 0x3c) & 0xfffc) | 0x1, VAR_4 + 0x3c);



 FUNC_5(0x0000, VAR_4 + 0x36);
 FUNC_5(0xfff7, VAR_4 + 0x64);
 VAR_6 = FUNC_2(VAR_4 + 0x68);
 FUNC_5(0x0009, VAR_4 + 0x68);
 FUNC_5(0x0001, VAR_4 + 0x60);
 FUNC_8(20);
 FUNC_5(0x0009, VAR_4 + 0x60);
 FUNC_3(500);

 FUNC_5(FUNC_2(VAR_4 + 0x3a) & 0xfffc, VAR_4 + 0x3a);
 FUNC_5(FUNC_2(VAR_4 + 0x3c) & 0xfffc, VAR_4 + 0x3c);
 if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {

  FUNC_5(0xf9ff, VAR_4 + 0x64);
  FUNC_5(FUNC_2(VAR_4 + 0x68) | 0x600, VAR_4 + 0x68);
  FUNC_5(0x0209, VAR_4 + 0x60);
 }


 FUNC_5(VAR_5, VAR_4 + 0x36);




 FUNC_4(FUNC_1(VAR_4+0xc0)|(1<<5), VAR_4+0xc0);
 FUNC_4(0xff, VAR_4+0xc3);
 FUNC_4(0xff, VAR_4+0xc4);
 FUNC_4(0xff, VAR_4+0xc6);
 FUNC_4(0xff, VAR_4+0xc8);
 FUNC_4(0x3f, VAR_4+0xcf);
 FUNC_4(0x3f, VAR_4+0xd0);
}
