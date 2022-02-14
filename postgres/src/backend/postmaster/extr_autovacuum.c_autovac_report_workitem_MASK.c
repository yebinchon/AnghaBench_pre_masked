
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int blk ;
struct TYPE_3__ {int avw_type; int avw_blockNumber; } ;
typedef TYPE_1__ AutoVacuumWorkItem ;



 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(AutoVacuumWorkItem *VAR_2,
      const char *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_0 + 12 + 2];
 char VAR_6[12 + 2];
 int VAR_7;

 switch (VAR_2->avw_type)
 {
  case 128:
   FUNC_3(VAR_5, VAR_0,
      "autovacuum: BRIN summarize");
   break;
 }




 VAR_7 = FUNC_4(VAR_5);

 if (FUNC_0(VAR_2->avw_blockNumber))
  FUNC_3(VAR_6, sizeof(VAR_6), " %u", VAR_2->avw_blockNumber);
 else
  VAR_6[0] = '\0';

 FUNC_3(VAR_5 + VAR_7, VAR_0 - VAR_7,
    " %s.%s%s", VAR_3, VAR_4, VAR_6);


 FUNC_1();

 FUNC_2(VAR_1, VAR_5);
}
