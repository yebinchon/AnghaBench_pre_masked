
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {int unit; } ;
typedef int reg ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_tscm *VAR_7)
{
 __be32 VAR_8;

 VAR_8 = 0;
 FUNC_1(VAR_7->unit, VAR_0,
      VAR_1 + VAR_5,
      &VAR_8, sizeof(VAR_8), 0);

 VAR_8 = 0;
 FUNC_1(VAR_7->unit, VAR_0,
      VAR_1 + VAR_3,
      &VAR_8, sizeof(VAR_8), 0);


 VAR_8 = FUNC_0(0x00000000);
 FUNC_1(VAR_7->unit, VAR_0,
      VAR_1 + VAR_4,
      &VAR_8, sizeof(VAR_8), 0);
 VAR_8 = FUNC_0(0x00000000);
 FUNC_1(VAR_7->unit, VAR_0,
      VAR_1 + VAR_6,
      &VAR_8, sizeof(VAR_8), 0);
 VAR_8 = FUNC_0(0x00000000);
 FUNC_1(VAR_7->unit, VAR_0,
      VAR_1 + VAR_2,
      &VAR_8, sizeof(VAR_8), 0);
}
