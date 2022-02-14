
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {size_t totalbytes; int ud; void* (* frealloc ) (int ,void*,size_t,size_t) ;} ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,void*,size_t,size_t) ;

void *FUNC_4 (lua_State *VAR_1, void *VAR_2, size_t VAR_3, size_t VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_1);
  FUNC_2((VAR_3 == 0) == (VAR_2 == ((void*)0)));
  VAR_2 = (*VAR_5->frealloc)(VAR_5->ud, VAR_2, VAR_3, VAR_4);
  if (VAR_2 == ((void*)0) && VAR_4 > 0)
    FUNC_1(VAR_1, VAR_0);
  FUNC_2((VAR_4 == 0) == (VAR_2 == ((void*)0)));
  VAR_5->totalbytes = (VAR_5->totalbytes - VAR_3) + VAR_4;
  return VAR_2;
}
