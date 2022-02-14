
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_4__ {scalar_t__* colmap; } ;
struct TYPE_5__ {TYPE_1__ xwin; } ;
typedef TYPE_2__ RDPCLIENT ;



__attribute__((used)) static void
FUNC_0(RDPCLIENT * VAR_0, const uint8 * VAR_1, uint8 * VAR_2, uint8 * VAR_3)
{
 while (VAR_2 < VAR_3)
  *(VAR_2++) = (uint8) VAR_0->xwin.colmap[*(VAR_1++)];
}
