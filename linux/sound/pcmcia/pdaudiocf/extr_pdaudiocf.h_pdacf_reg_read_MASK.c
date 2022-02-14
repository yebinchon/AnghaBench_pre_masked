
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {scalar_t__ port; } ;


 unsigned short FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned short FUNC_1(struct snd_pdacf *VAR_0, unsigned char VAR_1)
{
 return FUNC_0(VAR_0->port + VAR_1);
}
