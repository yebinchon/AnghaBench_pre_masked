
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sizeupvalues; TYPE_1__* upvalues; } ;
struct TYPE_4__ {int name; } ;
typedef int TString ;
typedef TYPE_2__ Proto ;


 int * FUNC_0 (int,int ) ;
 char const* FUNC_1 (int *) ;

__attribute__((used)) static const char *FUNC_2 (Proto *VAR_0, int VAR_1) {
  TString *VAR_2 = FUNC_0(VAR_1 < VAR_0->sizeupvalues, VAR_0->upvalues[VAR_1].name);
  if (VAR_2 == ((void*)0)) return "?";
  else return FUNC_1(VAR_2);
}
