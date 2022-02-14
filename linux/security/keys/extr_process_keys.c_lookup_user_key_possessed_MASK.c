
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_match_data {struct key const* raw_data; } ;
struct key {int dummy; } ;



bool FUNC_0(const struct key *VAR_0,
          const struct key_match_data *VAR_1)
{
 return VAR_0 == VAR_1->raw_data;
}
