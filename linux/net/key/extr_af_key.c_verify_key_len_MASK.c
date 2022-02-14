
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sadb_key {scalar_t__ sadb_key_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sadb_key const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1)
{
 const struct sadb_key *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2) > VAR_2->sadb_key_len)
  return -VAR_0;

 return 0;
}
