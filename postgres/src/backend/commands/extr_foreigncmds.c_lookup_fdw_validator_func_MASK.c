
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * arg; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static Oid
FUNC_1(DefElem *VAR_3)
{
 Oid VAR_4[2];

 if (VAR_3 == ((void*)0) || VAR_3->arg == ((void*)0))
  return VAR_0;


 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_1;

 return FUNC_0((List *) VAR_3->arg, 2, VAR_4, 0);

}
