
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801 {scalar_t__ irq; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned short FUNC_0 (struct fm801*,int ) ;
 int FUNC_1 (struct fm801*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct fm801 *VAR_9)
{
 unsigned short VAR_10;


 FUNC_1(VAR_9, VAR_8, 0x0808);
 FUNC_1(VAR_9, VAR_3, 0x9f1f);
 FUNC_1(VAR_9, VAR_5, 0x8808);


 FUNC_1(VAR_9, VAR_4, 0x0003);


 VAR_10 = FUNC_0(VAR_9, VAR_6);
 if (VAR_9->irq < 0)
  VAR_10 |= 0x00c3;
 else
  VAR_10 &= ~0x0083;
 FUNC_1(VAR_9, VAR_6, VAR_10);


 FUNC_1(VAR_9, VAR_7,
       VAR_2 | VAR_0 | VAR_1);
}
