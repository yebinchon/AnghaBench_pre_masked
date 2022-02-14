
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm_spr_regs {scalar_t__ tm_tfhar; scalar_t__ tm_texasr; scalar_t__ tm_tfiar; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_1(struct tm_spr_regs *VAR_3)
{
 FUNC_0(VAR_3->tm_tfhar != VAR_2);
 FUNC_0((VAR_3->tm_texasr == VAR_1) && (VAR_3->tm_tfiar != 0));

 return VAR_0;
}
