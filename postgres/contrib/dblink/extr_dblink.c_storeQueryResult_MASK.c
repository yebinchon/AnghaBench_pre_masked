
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * last_res; int * cur_res; } ;
typedef TYPE_1__ storeInfo ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__ volatile*,int *,int) ;

__attribute__((used)) static PGresult *
FUNC_12(volatile storeInfo *VAR_3, PGconn *VAR_4, const char *VAR_5)
{
 bool VAR_6 = 1;
 int VAR_7 = -1;
 PGresult *VAR_8;

 if (!FUNC_5(VAR_4, VAR_5))
  FUNC_8(VAR_0, "could not send query: %s", FUNC_9(FUNC_2(VAR_4)));

 if (!FUNC_6(VAR_4))
  FUNC_8(VAR_0, "failed to set single-row mode for dblink query");

 for (;;)
 {
  FUNC_0();

  VAR_3->cur_res = FUNC_3(VAR_4);
  if (!VAR_3->cur_res)
   break;

  if (FUNC_4(VAR_3->cur_res) == VAR_1)
  {







   if (VAR_6 && VAR_7 < 0)
    VAR_7 = FUNC_7(VAR_4);

   FUNC_11(VAR_3, VAR_3->cur_res, VAR_6);

   FUNC_1(VAR_3->cur_res);
   VAR_3->cur_res = ((void*)0);
   VAR_6 = 0;
  }
  else
  {

   if (VAR_6 && FUNC_4(VAR_3->cur_res) == VAR_2)
    FUNC_11(VAR_3, VAR_3->cur_res, VAR_6);


   FUNC_1(VAR_3->last_res);
   VAR_3->last_res = VAR_3->cur_res;
   VAR_3->cur_res = ((void*)0);
   VAR_6 = 1;
  }
 }


 FUNC_10(VAR_7);


 VAR_8 = VAR_3->last_res;
 VAR_3->last_res = ((void*)0);
 return VAR_8;
}
