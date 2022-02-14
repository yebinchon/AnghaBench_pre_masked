
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_header {int dummy; } ;


 size_t FUNC_0 (int,int) ;

__attribute__((used)) static inline size_t FUNC_1(size_t VAR_0, size_t VAR_1)
{
 return FUNC_0(sizeof(struct table_header) + VAR_0 * VAR_1, 8);
}
