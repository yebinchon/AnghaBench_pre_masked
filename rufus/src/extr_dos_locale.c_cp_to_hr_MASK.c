
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ cp; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char* FUNC_2(ULONG VAR_1)
{
 int VAR_2;
 for (VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].cp == VAR_1) {
   return VAR_0[VAR_2].name;
  }
 }

 FUNC_1(VAR_2 < FUNC_0(VAR_0));
 return ((void*)0);
}
