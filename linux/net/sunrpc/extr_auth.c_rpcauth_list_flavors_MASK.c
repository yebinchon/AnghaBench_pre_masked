
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_authops {int (* list_pseudoflavors ) (size_t*,int ) ;size_t au_flavor; } ;
typedef size_t rpc_authflavor_t ;


 int FUNC_0 (size_t*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 struct rpc_authops* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (size_t*,int ) ;

int
FUNC_5(rpc_authflavor_t *VAR_3, int VAR_4)
{
 const struct rpc_authops *VAR_5;
 rpc_authflavor_t VAR_6, VAR_7[4];
 int VAR_8, VAR_9, VAR_10 = 0;

 FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_1(VAR_2[VAR_6]);
  if (VAR_10 >= VAR_4) {
   VAR_10 = -VAR_0;
   break;
  }

  if (VAR_5 == ((void*)0))
   continue;
  if (VAR_5->list_pseudoflavors == ((void*)0)) {
   VAR_3[VAR_10++] = VAR_5->au_flavor;
   continue;
  }
  VAR_9 = VAR_5->list_pseudoflavors(VAR_7, FUNC_0(VAR_7));
  if (VAR_9 < 0) {
   VAR_10 = VAR_9;
   break;
  }
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if (VAR_10 >= VAR_4) {
    VAR_10 = -VAR_0;
    break;
   }
   VAR_3[VAR_10++] = VAR_7[VAR_8];
  }
 }
 FUNC_3();
 return VAR_10;
}
