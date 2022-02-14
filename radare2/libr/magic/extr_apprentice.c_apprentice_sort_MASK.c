
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_magic_entry {int mp; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
 const struct r_magic_entry *VAR_2 = VAR_0;
 const struct r_magic_entry *VAR_3 = VAR_1;
 size_t VAR_4 = FUNC_0 (VAR_2->mp);
 size_t VAR_5 = FUNC_0 (VAR_3->mp);
 if (VAR_4 == VAR_5) {
  return 0;
 }
 if (VAR_4 > VAR_5) {
  return -1;
 }
 return 1;
}
