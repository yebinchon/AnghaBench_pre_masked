
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_harmony {unsigned int iobase; } ;


 unsigned long FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned long
FUNC_1(struct snd_harmony *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1);
}
