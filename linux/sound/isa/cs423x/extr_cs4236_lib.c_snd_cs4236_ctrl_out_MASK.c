
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {unsigned char* cimage; scalar_t__ cport; } ;


 int FUNC_0 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct snd_wss *VAR_0,
    unsigned char VAR_1, unsigned char VAR_2)
{
 FUNC_0(VAR_1, VAR_0->cport + 3);
 FUNC_0(VAR_0->cimage[VAR_1] = VAR_2, VAR_0->cport + 4);
}
