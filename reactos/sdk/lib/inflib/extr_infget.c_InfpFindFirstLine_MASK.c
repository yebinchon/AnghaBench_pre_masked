
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int Id; } ;
struct TYPE_10__ {int Id; TYPE_3__* FirstLine; } ;
struct TYPE_9__ {int Line; int Section; scalar_t__ Inf; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHESECTION ;
typedef TYPE_3__* PINFCACHELINE ;
typedef int * PINFCACHE ;
typedef int * PCWSTR ;
typedef int INFSTATUS ;
typedef int INFCONTEXT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int) ;

INFSTATUS
FUNC_5(PINFCACHE VAR_4,
                  PCWSTR VAR_5,
                  PCWSTR VAR_6,
                  PINFCONTEXT *VAR_7)
{
  PINFCACHESECTION VAR_8;
  PINFCACHELINE VAR_9;

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == ((void*)0))
    {
      FUNC_1("Invalid parameter\n");
      return VAR_0;
    }

  VAR_8 = FUNC_3(VAR_4, VAR_5);
  if (((void*)0) == VAR_8)
    {
      FUNC_0("Section not found\n");
      return VAR_1;
    }

  if (VAR_6 != ((void*)0))
    {
      VAR_9 = FUNC_2(VAR_8, VAR_6);
    }
  else
    {
      VAR_9 = VAR_8->FirstLine;
    }

  if (((void*)0) == VAR_9)
    {
      FUNC_0("Key not found\n");
      return VAR_1;
    }

  *VAR_7 = FUNC_4(sizeof(INFCONTEXT));
  if (((void*)0) == *VAR_7)
    {
      FUNC_1("MALLOC() failed\n");
      return VAR_2;
    }
  (*VAR_7)->Inf = (PVOID)VAR_4;
  (*VAR_7)->Section = VAR_8->Id;
  (*VAR_7)->Line = VAR_9->Id;

  return VAR_3;
}
