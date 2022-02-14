
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xcnt; } ;
typedef TYPE_1__* Snapshot ;
typedef int SnapBuild ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,char*,int ,char*,int ) ;

const char *
FUNC_7(SnapBuild *VAR_8)
{
 Snapshot VAR_9;
 char *VAR_10;

 if (FUNC_1())
  FUNC_4(VAR_1, "cannot export a snapshot from within a transaction");

 if (VAR_4)
  FUNC_4(VAR_1, "can only export one snapshot at a time");

 VAR_4 = VAR_0;
 VAR_2 = 1;

 FUNC_3();


 VAR_6 = VAR_5;
 VAR_7 = 1;

 VAR_9 = FUNC_2(VAR_8);





 VAR_10 = FUNC_0(VAR_9);

 FUNC_5(VAR_3,
   (FUNC_6("exported logical decoding snapshot: \"%s\" with %u transaction ID",
         "exported logical decoding snapshot: \"%s\" with %u transaction IDs",
         VAR_9->xcnt,
         VAR_10, VAR_9->xcnt)));
 return VAR_10;
}
