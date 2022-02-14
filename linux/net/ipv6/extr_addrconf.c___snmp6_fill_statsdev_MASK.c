
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int atomic_long_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static inline void FUNC_4(u64 *VAR_1, atomic_long_t *VAR_2,
     int VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3 - sizeof(u64) * VAR_0;
 FUNC_0(VAR_5 < 0);


 FUNC_3(VAR_0, &VAR_1[0]);
 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
  FUNC_3(FUNC_1(&VAR_2[VAR_4]), &VAR_1[VAR_4]);

 FUNC_2(&VAR_1[VAR_0], 0, VAR_5);
}
