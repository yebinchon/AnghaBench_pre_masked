
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {TYPE_1__* mod_map; } ;
struct TYPE_7__ {TYPE_2__ xwin; int display; } ;
struct TYPE_5__ {int max_keypermod; scalar_t__* modifiermap; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef scalar_t__ KeyCode ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

BOOL
FUNC_1(RDPCLIENT * VAR_3, unsigned int VAR_4, uint32 VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;

 KeyCode VAR_10 = FUNC_0(VAR_3->display, VAR_5);

 if (VAR_10 == VAR_1)
  return VAR_0;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
 {
  VAR_9 = VAR_3->xwin.mod_map->max_keypermod * VAR_6;

  for (VAR_7 = 0; VAR_7 < VAR_3->xwin.mod_map->max_keypermod; VAR_7++)
  {
   if (VAR_3->xwin.mod_map->modifiermap[VAR_9 + VAR_7] == VAR_10)
    VAR_8 |= 1 << VAR_6;
  }
 }

 return (VAR_4 & VAR_8) ? VAR_2 : VAR_0;
}
