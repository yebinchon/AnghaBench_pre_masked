
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; scalar_t__ nargs; int argtypes; } ;
typedef int Snapshot ;
typedef TYPE_1__* SPIPlanPtr ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int *,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int,int,long) ;

int
FUNC_4(SPIPlanPtr VAR_3,
      Datum *VAR_4, const char *VAR_5,
      Snapshot VAR_6, Snapshot VAR_7,
      bool VAR_8, bool VAR_9, long VAR_10)
{
 int VAR_11;

 if (VAR_3 == ((void*)0) || VAR_3->magic != VAR_2 || VAR_10 < 0)
  return VAR_0;

 if (VAR_3->nargs > 0 && VAR_4 == ((void*)0))
  return VAR_1;

 VAR_11 = FUNC_0(1);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_3,
       FUNC_1(VAR_3->nargs, VAR_3->argtypes,
            VAR_4, VAR_5),
       VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10);

 FUNC_2(1);
 return VAR_11;
}
