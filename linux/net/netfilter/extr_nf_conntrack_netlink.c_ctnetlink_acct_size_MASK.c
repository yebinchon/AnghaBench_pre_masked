
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conn const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline size_t FUNC_3(const struct nf_conn *VAR_1)
{
 if (!FUNC_0(VAR_1, VAR_0))
  return 0;
 return 2 * FUNC_1(0)
        + 2 * FUNC_2(sizeof(uint64_t))
        + 2 * FUNC_2(sizeof(uint64_t))
        ;
}
