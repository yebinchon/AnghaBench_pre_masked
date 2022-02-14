
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_aes_iec958 {int* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct snd_aes_iec958 *VAR_7, u32 VAR_8)
{
 VAR_7->status[0] = ((VAR_8 & VAR_2) ? VAR_5 : 0) |
    ((VAR_8 & VAR_1) ? VAR_4 : 0);
 if (VAR_8 & VAR_2)
  VAR_7->status[0] |= (VAR_8 & VAR_0) ? VAR_6 : 0;
 else
  VAR_7->status[0] |= (VAR_8 & VAR_0) ? VAR_3 : 0;
}
