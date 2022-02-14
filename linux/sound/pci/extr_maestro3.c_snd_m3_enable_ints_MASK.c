
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_m3 {unsigned long iobase; int hv_config; } ;


 unsigned long VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned short,unsigned long) ;
 int FUNC_2 (unsigned short,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct snd_m3 *VAR_7)
{
 unsigned long VAR_8 = VAR_7->iobase;
 unsigned short VAR_9;


 VAR_9 = VAR_2 ;
 if (VAR_7->hv_config & VAR_5)
  VAR_9 |= VAR_6;
 FUNC_1(VAR_9, VAR_7->iobase + VAR_4);
 FUNC_2(VAR_9, VAR_8 + VAR_3);
 FUNC_1(FUNC_0(VAR_8 + VAR_0) | VAR_1,
      VAR_8 + VAR_0);
}
