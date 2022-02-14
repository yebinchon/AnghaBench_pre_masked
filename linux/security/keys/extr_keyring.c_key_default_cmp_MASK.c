
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_match_data {int raw_data; } ;
struct key {int description; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

bool FUNC_1(const struct key *VAR_0,
       const struct key_match_data *VAR_1)
{
 return FUNC_0(VAR_0->description, VAR_1->raw_data) == 0;
}
