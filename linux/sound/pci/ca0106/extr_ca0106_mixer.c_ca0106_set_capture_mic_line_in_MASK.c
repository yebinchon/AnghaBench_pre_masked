
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ca0106 {scalar_t__ port; scalar_t__ capture_mic_line_in; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_ca0106 *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->capture_mic_line_in) {

  VAR_2 = FUNC_0(VAR_1->port+VAR_0) & ~0x400;
  VAR_2 = VAR_2 | 0x400;
  FUNC_1(VAR_2, VAR_1->port+VAR_0);

 } else {

  VAR_2 = FUNC_0(VAR_1->port+VAR_0) & ~0x400;
  FUNC_1(VAR_2, VAR_1->port+VAR_0);

 }
}
