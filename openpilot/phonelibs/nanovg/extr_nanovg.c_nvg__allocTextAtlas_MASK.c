
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* renderCreateTexture ) (int ,int ,int,int,int ,int *) ;int userPtr; } ;
struct TYPE_7__ {int fontImageIdx; scalar_t__* fontImages; int fs; TYPE_1__ params; } ;
typedef TYPE_2__ NVGcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int*,int*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(NVGcontext* VAR_3)
{
 int VAR_4, VAR_5;
 FUNC_2(VAR_3);
 if (VAR_3->fontImageIdx >= VAR_0-1)
  return 0;

 if (VAR_3->fontImages[VAR_3->fontImageIdx+1] != 0)
  FUNC_1(VAR_3, VAR_3->fontImages[VAR_3->fontImageIdx+1], &VAR_4, &VAR_5);
 else {
  FUNC_1(VAR_3, VAR_3->fontImages[VAR_3->fontImageIdx], &VAR_4, &VAR_5);
  if (VAR_4 > VAR_5)
   VAR_5 *= 2;
  else
   VAR_4 *= 2;
  if (VAR_4 > VAR_1 || VAR_5 > VAR_1)
   VAR_4 = VAR_5 = VAR_1;
  VAR_3->fontImages[VAR_3->fontImageIdx+1] = VAR_3->params.renderCreateTexture(VAR_3->params.userPtr, VAR_2, VAR_4, VAR_5, 0, ((void*)0));
 }
 ++VAR_3->fontImageIdx;
 FUNC_0(VAR_3->fs, VAR_4, VAR_5);
 return 1;
}
