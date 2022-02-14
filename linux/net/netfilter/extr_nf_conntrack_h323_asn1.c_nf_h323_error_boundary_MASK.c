
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstr {scalar_t__ cur; scalar_t__ end; scalar_t__ bit; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct bitstr *VAR_1, size_t VAR_2, size_t VAR_3)
{
 VAR_3 += VAR_1->bit;
 VAR_2 += VAR_3 / VAR_0;
 if (VAR_3 % VAR_0 > 0)
  VAR_2++;

 if (VAR_1->cur + VAR_2 > VAR_1->end)
  return 1;

 return 0;
}
