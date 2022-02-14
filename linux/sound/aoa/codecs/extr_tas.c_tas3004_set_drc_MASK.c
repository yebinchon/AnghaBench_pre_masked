
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas {int drc_range; scalar_t__ drc_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct tas*,int ,int,unsigned char*) ;

__attribute__((used)) static void FUNC_1(struct tas *VAR_1)
{
 unsigned char VAR_2[6];

 if (VAR_1->drc_enabled)
  VAR_2[0] = 0x50;
 else
  VAR_2[0] = 0x51;
 VAR_2[1] = 0x02;
 if (VAR_1->drc_range > 0xef)
  VAR_2[2] = 0xef;
 else if (VAR_1->drc_range < 0)
  VAR_2[2] = 0x00;
 else
  VAR_2[2] = VAR_1->drc_range;
 VAR_2[3] = 0xb0;
 VAR_2[4] = 0x60;
 VAR_2[5] = 0xa0;

 FUNC_0(VAR_1, VAR_0, 6, VAR_2);
}
