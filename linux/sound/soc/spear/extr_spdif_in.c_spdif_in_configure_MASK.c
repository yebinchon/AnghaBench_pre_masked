
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_in_dev {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct spdif_in_dev *VAR_9)
{
 u32 VAR_10 = VAR_4 | VAR_5 | VAR_6 |
  VAR_7 | VAR_1;
 VAR_10 |= VAR_8 | VAR_0;

 FUNC_0(VAR_10, VAR_9->io_base + VAR_2);
 FUNC_0(0xF, VAR_9->io_base + VAR_3);
}
