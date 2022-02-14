
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

__attribute__((used)) static u32 FUNC_0(struct snd_aes_iec958 * VAR_5)
{
 u32 VAR_6 = 0;
 VAR_6 |= (VAR_5->status[0] & VAR_1) ? VAR_4 : 0;
 if (VAR_6 & VAR_4)
  VAR_6 |= (VAR_5->status[0] & VAR_2) ? VAR_3 : 0;
 else
  VAR_6 |= (VAR_5->status[0] & VAR_0) ? VAR_3 : 0;
 return VAR_6;
}
