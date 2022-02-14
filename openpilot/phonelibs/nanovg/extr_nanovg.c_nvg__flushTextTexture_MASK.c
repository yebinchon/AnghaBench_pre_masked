
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int userPtr; int (* renderUpdateTexture ) (int ,int,int,int,int,int,unsigned char const*) ;} ;
struct TYPE_5__ {int* fontImages; size_t fontImageIdx; TYPE_1__ params; int fs; } ;
typedef TYPE_2__ NVGcontext ;


 unsigned char* FUNC_0 (int ,int*,int*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,int,int,int,int,unsigned char const*) ;

__attribute__((used)) static void FUNC_3(NVGcontext* VAR_0)
{
 int VAR_1[4];

 if (FUNC_1(VAR_0->fs, VAR_1)) {
  int VAR_2 = VAR_0->fontImages[VAR_0->fontImageIdx];

  if (VAR_2 != 0) {
   int VAR_3, VAR_4;
   const unsigned char* VAR_5 = FUNC_0(VAR_0->fs, &VAR_3, &VAR_4);
   int VAR_6 = VAR_1[0];
   int VAR_7 = VAR_1[1];
   int VAR_8 = VAR_1[2] - VAR_1[0];
   int VAR_9 = VAR_1[3] - VAR_1[1];
   VAR_0->params.renderUpdateTexture(VAR_0->params.userPtr, VAR_2, VAR_6,VAR_7, VAR_8,VAR_9, VAR_5);
  }
 }
}
