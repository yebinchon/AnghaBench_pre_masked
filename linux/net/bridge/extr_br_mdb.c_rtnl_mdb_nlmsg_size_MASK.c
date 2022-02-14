
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct br_port_msg {int dummy; } ;
struct br_mdb_entry {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct br_port_msg))
  + FUNC_1(sizeof(struct br_mdb_entry));
}
