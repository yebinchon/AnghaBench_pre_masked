
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_aes_iec958 {int * status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct snd_aes_iec958 * VAR_5, u32 VAR_6)
{
 VAR_5->status[0] = ((VAR_6 & VAR_4) ? VAR_1 : 0);
 if (VAR_6 & VAR_4)
  VAR_5->status[0] |= (VAR_6 & VAR_3) ? VAR_2 : 0;
 else
  VAR_5->status[0] |= (VAR_6 & VAR_3) ? VAR_0 : 0;
}
