
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tdm_info {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (struct zx_tdm_info*,int ) ;
 int FUNC_1 (struct zx_tdm_info*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct zx_tdm_info *VAR_4, bool VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_6 |= VAR_2 | VAR_0;
 if (VAR_5)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_3, VAR_6);
}
