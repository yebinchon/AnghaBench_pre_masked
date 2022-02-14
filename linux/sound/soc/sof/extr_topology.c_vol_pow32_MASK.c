
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_0, int VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5 = 1 << VAR_2;
 u64 VAR_6;


 if (VAR_1 == 0)
  return VAR_5;


 if (VAR_1 < 0)
  VAR_4 = VAR_1 * -1;
 else
  VAR_4 = VAR_1;


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {




  VAR_5 = FUNC_1((u64)VAR_5 * VAR_0, VAR_2);
 }

 if (VAR_1 > 0) {

  return VAR_5;
 }


 VAR_6 = (u64)1 << (VAR_2 << 1);
 FUNC_0(VAR_6, VAR_5);

 return (u32)VAR_6;
}
