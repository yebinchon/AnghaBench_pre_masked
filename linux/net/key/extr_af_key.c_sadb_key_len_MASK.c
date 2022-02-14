
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sadb_key {int sadb_key_bits; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(const struct sadb_key *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->sadb_key_bits, 8);

 return FUNC_0(sizeof(struct sadb_key) + VAR_1,
       sizeof(uint64_t));
}
