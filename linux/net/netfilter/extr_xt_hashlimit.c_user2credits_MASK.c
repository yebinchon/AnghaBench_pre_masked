
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_5, int VAR_6)
{
 u64 VAR_7 = (VAR_6 == 1) ?
  VAR_3 : VAR_4;
 u64 VAR_8 = (VAR_6 == 1) ?
  VAR_1 : VAR_0;


 if (VAR_7 >= VAR_2 * VAR_8)
  return FUNC_0(VAR_5, FUNC_0(VAR_7, VAR_2 * VAR_8));

 return VAR_5 * FUNC_0(VAR_2 * VAR_8, VAR_7);
}
