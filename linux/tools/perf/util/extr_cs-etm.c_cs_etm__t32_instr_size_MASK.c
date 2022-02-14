
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct cs_etm_queue {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct cs_etm_queue*,int,int ,int ,int*) ;

__attribute__((used)) static inline int FUNC_2(struct cs_etm_queue *VAR_0,
      u8 VAR_1, u64 VAR_2)
{
 u8 VAR_3[2];

 FUNC_1(VAR_0, VAR_1, VAR_2,
      FUNC_0(VAR_3), VAR_3);





 return ((VAR_3[1] & 0xF8) >= 0xE8) ? 4 : 2;
}
