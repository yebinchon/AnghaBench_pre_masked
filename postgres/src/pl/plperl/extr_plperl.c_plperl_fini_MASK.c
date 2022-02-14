
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ interp; } ;
typedef TYPE_1__ plperl_interp_desc ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(int VAR_4, Datum VAR_5)
{
 HASH_SEQ_STATUS VAR_6;
 plperl_interp_desc *VAR_7;

 FUNC_1(VAR_0, "plperl_fini");







 VAR_1 = 1;


 if (VAR_4)
 {
  FUNC_1(VAR_0, "plperl_fini: skipped");
  return;
 }


 FUNC_4(&VAR_2);


 FUNC_2(&VAR_6, VAR_3);
 while ((VAR_7 = FUNC_3(&VAR_6)) != ((void*)0))
 {
  if (VAR_7->interp)
  {
   FUNC_0(VAR_7);
   FUNC_4(&VAR_7->interp);
  }
 }

 FUNC_1(VAR_0, "plperl_fini: done");
}
