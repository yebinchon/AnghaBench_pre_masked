
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16 ;
typedef size_t Oid ;
typedef int FmgrBuiltin ;


 size_t VAR_0 ;
 size_t* VAR_1 ;
 int const* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static const FmgrBuiltin *
FUNC_0(Oid VAR_4)
{
 uint16 VAR_5;


 if (VAR_4 > VAR_3)
  return ((void*)0);





 VAR_5 = VAR_1[VAR_4];
 if (VAR_5 == VAR_0)
  return ((void*)0);

 return &VAR_2[VAR_5];
}
