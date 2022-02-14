
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_stat {scalar_t__ bytes_alloc; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, void *VAR_1)
{
 struct alloc_stat *VAR_2 = VAR_0;
 struct alloc_stat *VAR_3 = VAR_1;

 if (VAR_2->bytes_alloc < VAR_3->bytes_alloc)
  return -1;
 else if (VAR_2->bytes_alloc > VAR_3->bytes_alloc)
  return 1;
 return 0;
}
