
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int atomic; int internal_xact; int * procCxt; int savedcxt; int * execCxt; scalar_t__ outer_result; int * outer_tuptable; scalar_t__ outer_processed; int * queryEnv; int connectSubid; int tuptables; int execSubid; int * tuptable; scalar_t__ processed; } ;
typedef TYPE_1__ _SPI_connection ;


 int VAR_0 ;
 void* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;

int
FUNC_8(int VAR_15)
{
 int VAR_16;


 if (VAR_13 == ((void*)0))
 {
  if (VAR_11 != -1 || VAR_14 != 0)
   FUNC_5(VAR_1, "SPI stack corrupted");
  VAR_16 = 16;
  VAR_13 = (_SPI_connection *)
   FUNC_3(VAR_9,
          VAR_16 * sizeof(_SPI_connection));
  VAR_14 = VAR_16;
 }
 else
 {
  if (VAR_14 <= 0 || VAR_14 <= VAR_11)
   FUNC_5(VAR_1, "SPI stack corrupted");
  if (VAR_14 == VAR_11 + 1)
  {
   VAR_16 = VAR_14 * 2;
   VAR_13 = (_SPI_connection *)
    FUNC_6(VAR_13,
       VAR_16 * sizeof(_SPI_connection));
   VAR_14 = VAR_16;
  }
 }


 VAR_11++;
 FUNC_1(VAR_11 >= 0 && VAR_11 < VAR_14);

 VAR_12 = &(VAR_13[VAR_11]);
 VAR_12->processed = 0;
 VAR_12->tuptable = ((void*)0);
 VAR_12->execSubid = VAR_2;
 FUNC_7(&VAR_12->tuptables);
 VAR_12->procCxt = ((void*)0);
 VAR_12->execCxt = ((void*)0);
 VAR_12->connectSubid = FUNC_2();
 VAR_12->queryEnv = ((void*)0);
 VAR_12->atomic = (VAR_15 & VAR_5 ? 0 : 1);
 VAR_12->internal_xact = 0;
 VAR_12->outer_processed = VAR_6;
 VAR_12->outer_tuptable = VAR_8;
 VAR_12->outer_result = VAR_7;
 VAR_12->procCxt = FUNC_0(VAR_12->atomic ? VAR_10 : VAR_3,
              "SPI Proc",
              VAR_0);
 VAR_12->execCxt = FUNC_0(VAR_12->atomic ? VAR_10 : VAR_12->procCxt,
              "SPI Exec",
              VAR_0);

 VAR_12->savedcxt = FUNC_4(VAR_12->procCxt);





 VAR_6 = 0;
 VAR_8 = ((void*)0);
 VAR_7 = 0;

 return VAR_4;
}
