
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cmp_connection {scalar_t__ direction; int pcr_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u64 FUNC_2(struct cmp_connection *VAR_2)
{
 if (VAR_2->direction == VAR_0)
  return VAR_1 + FUNC_0(VAR_2->pcr_index);
 else
  return VAR_1 + FUNC_1(VAR_2->pcr_index);
}
