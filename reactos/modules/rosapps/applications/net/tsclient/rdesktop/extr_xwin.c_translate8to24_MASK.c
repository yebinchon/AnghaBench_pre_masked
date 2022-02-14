
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_4__ {int * colmap; scalar_t__ compatible_arch; } ;
struct TYPE_5__ {TYPE_1__ xwin; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(RDPCLIENT * VAR_0, const uint8 * VAR_1, uint8 * VAR_2, uint8 * VAR_3)
{
 uint32 VAR_4;

 if (VAR_0->xwin.compatible_arch)
 {
  while (VAR_2 < VAR_3)
  {
   VAR_4 = VAR_0->xwin.colmap[*(VAR_1++)];
   FUNC_0(VAR_2, VAR_4);
  }
 }
 else
 {
  while (VAR_2 < VAR_3)
  {
   VAR_4 = VAR_0->xwin.colmap[*(VAR_1++)];
   FUNC_1(VAR_2, VAR_4);
  }
 }
}
