
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; scalar_t__ nargs; int argtypes; } ;
typedef TYPE_1__* SPIPlanPtr ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int *,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int,int,long) ;

int
FUNC_4(SPIPlanPtr VAR_4, Datum *VAR_5, const char *VAR_6,
     bool VAR_7, long VAR_8)
{
 int VAR_9;

 if (VAR_4 == ((void*)0) || VAR_4->magic != VAR_3 || VAR_8 < 0)
  return VAR_1;

 if (VAR_4->nargs > 0 && VAR_5 == ((void*)0))
  return VAR_2;

 VAR_9 = FUNC_0(1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_4,
       FUNC_1(VAR_4->nargs, VAR_4->argtypes,
            VAR_5, VAR_6),
       VAR_0, VAR_0,
       VAR_7, 1, VAR_8);

 FUNC_2(1);
 return VAR_9;
}
