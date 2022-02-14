
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_7, int *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 int VAR_11;


 if (VAR_7 == 0 && VAR_8[VAR_1])
  return 0;





 VAR_9 = VAR_8[VAR_0] + (VAR_7 * VAR_8[VAR_2]) / 100;





 VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_3);


 VAR_11 = VAR_8[VAR_2] - (VAR_8[VAR_2] / 100);


 if (VAR_11 == VAR_5 && (VAR_7 & 1))
  VAR_10 = FUNC_1((u64)VAR_10 *
        VAR_4,
        VAR_3);

 return VAR_10;
}
