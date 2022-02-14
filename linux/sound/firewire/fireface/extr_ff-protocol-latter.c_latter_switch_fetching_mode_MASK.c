
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ff {int unit; } ;
typedef int reg ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_ff *VAR_2, bool VAR_3)
{
 u32 VAR_4;
 __le32 VAR_5;

 if (VAR_3)
  VAR_4 = 0x00000000;
 else
  VAR_4 = 0xffffffff;
 VAR_5 = FUNC_0(VAR_4);

 return FUNC_1(VAR_2->unit, VAR_1,
      VAR_0, &VAR_5, sizeof(VAR_5), 0);
}
