
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_m3 {unsigned long iobase; int is_omnibook; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct snd_m3 *VAR_5)
{
 unsigned long VAR_6 = VAR_5->iobase;
 u16 VAR_7 = VAR_3 | VAR_4;

 if (!VAR_5->is_omnibook)
  return;





 FUNC_1(0xffff, VAR_6 + VAR_2);
 FUNC_1(0x0000, VAR_6 + VAR_0);

 FUNC_1(~VAR_7, VAR_6 + VAR_2);
 FUNC_1(FUNC_0(VAR_6 + VAR_1) & ~VAR_7, VAR_6 + VAR_1);
 FUNC_1(VAR_7, VAR_6 + VAR_2);

 FUNC_1(0xffff, VAR_6 + VAR_2);
}
