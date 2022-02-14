
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct uuid_module {int max_instance; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct uuid_module *VAR_1, u64 *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = VAR_1->max_instance;
 VAR_8 = (u32)(*VAR_2 >> VAR_3);

 if (VAR_8 != 0xffffffff) {
  VAR_5 = FUNC_0(VAR_8);
  VAR_7 = VAR_5 + VAR_3 + VAR_4;
  if (VAR_7 <= (VAR_6 - 1)) {
   *VAR_2 |= 1ULL << (VAR_5 + VAR_3);
   return VAR_7;
  }
 }

 return -VAR_0;
}
