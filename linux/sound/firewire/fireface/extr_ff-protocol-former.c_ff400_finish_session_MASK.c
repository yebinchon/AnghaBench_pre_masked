
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ff {int unit; } ;
typedef int reg ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_ff *VAR_2)
{
 __le32 VAR_3;

 VAR_3 = FUNC_0(0x80000000);
 FUNC_1(VAR_2->unit, VAR_1,
      VAR_0, &VAR_3, sizeof(VAR_3), 0);
}
