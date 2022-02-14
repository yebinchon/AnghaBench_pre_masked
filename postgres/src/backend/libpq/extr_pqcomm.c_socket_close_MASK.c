
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ctx; scalar_t__ cred; } ;
struct TYPE_4__ {int sock; TYPE_2__* gss; } ;
typedef int OM_uint32 ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__*,int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(int VAR_4, Datum VAR_5)
{

 if (VAR_2 != ((void*)0))
 {
  FUNC_3(VAR_2);
  VAR_2->sock = VAR_3;
 }
}
