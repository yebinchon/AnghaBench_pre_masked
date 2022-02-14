
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flow_keys {int dummy; } ;
typedef int siphash_key_t ;


 int FUNC_0 (struct flow_keys*) ;
 int FUNC_1 (struct flow_keys*) ;
 int FUNC_2 (struct flow_keys*) ;
 int FUNC_3 (int ,int ,int const*) ;

__attribute__((used)) static inline u32 FUNC_4(struct flow_keys *VAR_0,
     const siphash_key_t *VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_3(FUNC_2(VAR_0),
         FUNC_1(VAR_0), VAR_1);
 if (!VAR_2)
  VAR_2 = 1;

 return VAR_2;
}
