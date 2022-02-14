
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstr {int* cur; int bit; } ;


 int FUNC_0 (struct bitstr*) ;

__attribute__((used)) static unsigned int FUNC_1(struct bitstr *VAR_0)
{
 unsigned int VAR_1 = (*VAR_0->cur) & (0x80 >> VAR_0->bit);

 FUNC_0(VAR_0);

 return VAR_1;
}
