
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int unit; } ;
typedef int data ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_dg00x *VAR_4)
{
 __be32 VAR_5;

 VAR_5 = FUNC_0(0x00000003);
 FUNC_2(VAR_4->unit, VAR_3,
      VAR_0 + VAR_2,
      &VAR_5, sizeof(VAR_5), 0);


 VAR_5 = 0;
 FUNC_2(VAR_4->unit, VAR_3,
      VAR_0 + VAR_1,
      &VAR_5, sizeof(VAR_5), 0);



 FUNC_1(50);
}
