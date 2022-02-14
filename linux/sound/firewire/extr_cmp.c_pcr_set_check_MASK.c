
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_connection {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmp_connection*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct cmp_connection *VAR_5, __be32 VAR_6)
{
 if (VAR_6 & FUNC_1(VAR_2 |
         VAR_4)) {
  FUNC_0(VAR_5, "plug is already in use\n");
  return -VAR_0;
 }
 if (!(VAR_6 & FUNC_1(VAR_3))) {
  FUNC_0(VAR_5, "plug is not on-line\n");
  return -VAR_1;
 }

 return 0;
}
