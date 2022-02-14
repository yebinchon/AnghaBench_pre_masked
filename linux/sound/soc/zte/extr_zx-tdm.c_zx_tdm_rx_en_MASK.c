
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tdm_info {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct zx_tdm_info*,int ) ;
 int FUNC_1 (struct zx_tdm_info*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct zx_tdm_info *VAR_3, bool VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  VAR_5 |= VAR_0 | VAR_1;
 else
  VAR_5 &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_3, VAR_2, VAR_5);
}
