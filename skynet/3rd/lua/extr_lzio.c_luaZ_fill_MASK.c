
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* (* reader ) (int *,int ,size_t*) ;size_t n; char const* p; int data; int * L; } ;
typedef TYPE_1__ ZIO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,size_t*) ;

int FUNC_4 (ZIO *VAR_1) {
  size_t VAR_2;
  lua_State *VAR_3 = VAR_1->L;
  const char *VAR_4;
  FUNC_2(VAR_3);
  VAR_4 = VAR_1->reader(VAR_3, VAR_1->data, &VAR_2);
  FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0) || VAR_2 == 0)
    return VAR_0;
  VAR_1->n = VAR_2 - 1;
  VAR_1->p = VAR_4;
  return FUNC_0(*(VAR_1->p++));
}
