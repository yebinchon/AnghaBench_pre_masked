
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc1_ctx {int cfc; int inter; int cfd; int compte; short* cle; } ;


 int FUNC_0 (struct pc1_ctx*) ;

__attribute__((used)) static unsigned char FUNC_1(struct pc1_ctx *VAR_0, short VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->cfc = VAR_0->inter >> 8;
 VAR_0->cfd = VAR_0->inter & 255;

 VAR_1 = VAR_1 ^ (VAR_0->cfc ^ VAR_0->cfd);
 for (VAR_0->compte = 0; VAR_0->compte <= 15; VAR_0->compte++) {

  VAR_0->cle[VAR_0->compte] = VAR_0->cle[VAR_0->compte] ^ VAR_1;
 }

 return VAR_1;
}
