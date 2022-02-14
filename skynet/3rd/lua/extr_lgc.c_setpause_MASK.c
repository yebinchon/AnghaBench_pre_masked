
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int l_mem ;
struct TYPE_5__ {int GCestimate; int gcpause; } ;
typedef TYPE_1__ global_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (global_State *VAR_2) {
  l_mem VAR_3, VAR_4;
  l_mem VAR_5 = VAR_2->GCestimate / VAR_1;
  FUNC_2(VAR_5 > 0);
  VAR_3 = (VAR_2->gcpause < VAR_0 / VAR_5)
            ? VAR_5 * VAR_2->gcpause
            : VAR_0;
  VAR_4 = FUNC_0(VAR_2) - VAR_3;
  FUNC_1(VAR_2, VAR_4);
}
