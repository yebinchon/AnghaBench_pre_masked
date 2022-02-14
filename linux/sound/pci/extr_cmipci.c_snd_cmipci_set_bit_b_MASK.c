
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci {scalar_t__ iobase; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cmipci *VAR_0, unsigned int VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3, VAR_4;
 VAR_3 = VAR_4 = FUNC_0(VAR_0->iobase + VAR_1);
 VAR_3 |= VAR_2;
 if (VAR_3 == VAR_4)
  return 0;
 FUNC_1(VAR_3, VAR_0->iobase + VAR_1);
 return 1;
}
