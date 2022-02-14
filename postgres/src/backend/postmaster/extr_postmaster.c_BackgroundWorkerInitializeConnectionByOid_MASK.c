
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int bgw_flags; } ;
typedef int Oid ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *,int ,int *,int) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

void
FUNC_6(Oid VAR_7, Oid VAR_8, uint32 VAR_9)
{
 BackgroundWorker *VAR_10 = VAR_5;


 if (!(VAR_10->bgw_flags & VAR_0))
  FUNC_3(VAR_4,
    (FUNC_4(VAR_2),
     FUNC_5("database connection requirement not indicated during registration")));

 FUNC_0(((void*)0), VAR_7, ((void*)0), VAR_8, ((void*)0), (VAR_9 & VAR_1) != 0);


 if (!FUNC_1())
  FUNC_3(VAR_3,
    (FUNC_5("invalid processing mode in background worker")));
 FUNC_2(VAR_6);
}
