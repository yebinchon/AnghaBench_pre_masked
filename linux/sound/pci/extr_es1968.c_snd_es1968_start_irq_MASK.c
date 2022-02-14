
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1968 {scalar_t__ io_port; scalar_t__ rmidi; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned short,scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct es1968 *VAR_4)
{
 unsigned short VAR_5;
 VAR_5 = VAR_0 | VAR_1;
 if (VAR_4->rmidi)
  VAR_5 |= VAR_2;
 FUNC_0(VAR_5, VAR_4->io_port + 0x1A);
 FUNC_1(VAR_5, VAR_4->io_port + VAR_3);
}
