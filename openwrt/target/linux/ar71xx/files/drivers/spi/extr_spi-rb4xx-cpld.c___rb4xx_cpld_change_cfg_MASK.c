
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb4xx_cpld {unsigned int config; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rb4xx_cpld*,unsigned int) ;
 int FUNC_1 (struct rb4xx_cpld*,int ) ;

__attribute__((used)) static int FUNC_2(struct rb4xx_cpld *VAR_3, unsigned VAR_4,
       unsigned VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->config & ~VAR_4;
 VAR_6 |= VAR_5;

 if ((VAR_3->config ^ VAR_6) & 0xff) {
  VAR_7 = FUNC_0(VAR_3, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 if ((VAR_3->config ^ VAR_6) & VAR_0) {
  VAR_7 = FUNC_1(VAR_3, (VAR_5) ? VAR_2 :
          VAR_1);
  if (VAR_7)
   return VAR_7;
 }

 VAR_3->config = VAR_6;
 return 0;
}
