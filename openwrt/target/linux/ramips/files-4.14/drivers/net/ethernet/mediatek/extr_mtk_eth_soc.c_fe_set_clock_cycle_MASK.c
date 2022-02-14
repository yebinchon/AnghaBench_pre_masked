
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_priv {unsigned long sysclk; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

int FUNC_2(struct fe_priv *VAR_4)
{
 unsigned long VAR_5 = VAR_4->sysclk;

 VAR_5 /= VAR_1;
 VAR_5 <<= VAR_3;

 FUNC_1((FUNC_0(VAR_0) &
   ~(VAR_2 << VAR_3)) |
   VAR_5,
   VAR_0);
 return 0;
}
