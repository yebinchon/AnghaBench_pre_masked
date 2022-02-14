
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; } ;
struct TYPE_5__ {unsigned char* texData; void** dirtyRect; TYPE_1__ params; int atlas; } ;
typedef TYPE_2__ FONScontext ;


 scalar_t__ FUNC_0 (int ,int,int,int*,int*) ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (void*,int) ;

__attribute__((used)) static void FUNC_3(FONScontext* VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned char* VAR_7;
 if (FUNC_0(VAR_0->atlas, VAR_1, VAR_2, &VAR_5, &VAR_6) == 0)
  return;


 VAR_7 = &VAR_0->texData[VAR_5 + VAR_6 * VAR_0->params.width];
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   VAR_7[VAR_3] = 0xff;
  VAR_7 += VAR_0->params.width;
 }

 VAR_0->dirtyRect[0] = FUNC_2(VAR_0->dirtyRect[0], VAR_5);
 VAR_0->dirtyRect[1] = FUNC_2(VAR_0->dirtyRect[1], VAR_6);
 VAR_0->dirtyRect[2] = FUNC_1(VAR_0->dirtyRect[2], VAR_5+VAR_1);
 VAR_0->dirtyRect[3] = FUNC_1(VAR_0->dirtyRect[3], VAR_6+VAR_2);
}
