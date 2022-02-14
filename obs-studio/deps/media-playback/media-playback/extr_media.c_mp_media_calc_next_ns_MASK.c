
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next_pts_ns; int next_ns; } ;
typedef TYPE_1__ mp_media_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(mp_media_t *VAR_0)
{
 int64_t VAR_1 = FUNC_1(VAR_0);

 int64_t VAR_2 = VAR_1 - VAR_0->next_pts_ns;



 if (VAR_2 < 0)
  VAR_2 = 0;
 if (VAR_2 > 3000000000)
  VAR_2 = 0;

 VAR_0->next_ns += VAR_2;
 VAR_0->next_pts_ns = VAR_1;
}
