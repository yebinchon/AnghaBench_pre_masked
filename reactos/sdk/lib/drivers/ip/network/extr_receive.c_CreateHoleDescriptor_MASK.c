
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ULONG ;
struct TYPE_4__ {void* Last; void* First; } ;
typedef TYPE_1__* PIPDATAGRAM_HOLE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;

PIPDATAGRAM_HOLE FUNC_2(
  ULONG VAR_3,
  ULONG VAR_4)
{
 PIPDATAGRAM_HOLE VAR_5;

 FUNC_1(VAR_0, ("Called. First (%d)  Last (%d).\n", VAR_3, VAR_4));

 VAR_5 = FUNC_0(&VAR_1);
 if (!VAR_5) {
     FUNC_1(VAR_2, ("Insufficient resources.\n"));
     return ((void*)0);
 }

 VAR_5->First = VAR_3;
 VAR_5->Last = VAR_4;

 FUNC_1(VAR_0, ("Returning hole descriptor at (0x%X).\n", VAR_5));

 return VAR_5;
}
