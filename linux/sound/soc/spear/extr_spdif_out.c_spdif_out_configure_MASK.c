
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_out_dev {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spdif_out_dev *VAR_11)
{
 FUNC_2(VAR_7, VAR_11->io_base + VAR_8);
 FUNC_0(1);
 FUNC_2(FUNC_1(VAR_11->io_base + VAR_8) & ~VAR_7,
   VAR_11->io_base + VAR_8);

 FUNC_2(VAR_2 | VAR_5 |
   VAR_10 | VAR_9 |
   VAR_1 | VAR_6,
   VAR_11->io_base + VAR_0);

 FUNC_2(0x7F, VAR_11->io_base + VAR_4);
 FUNC_2(0x7F, VAR_11->io_base + VAR_3);
}
