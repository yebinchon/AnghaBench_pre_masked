
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs5535audio {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct cs5535audio*,int ,unsigned int) ;
 int FUNC_1 (struct cs5535audio*,int) ;

__attribute__((used)) static void FUNC_2(struct cs5535audio *VAR_4,
     unsigned short VAR_5, unsigned short VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = ((unsigned int) VAR_5) << 24;
 VAR_7 |= VAR_6;
 VAR_7 &= VAR_2;
 VAR_7 |= VAR_3;
 VAR_7 &= VAR_1;

 FUNC_0(VAR_4, VAR_0, VAR_7);
 FUNC_1(VAR_4, 50);
}
