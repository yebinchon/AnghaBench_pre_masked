
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ major_version; scalar_t__ bin_version; } ;
struct TYPE_3__ {scalar_t__ major_version; scalar_t__ bin_version; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 FUNC_4("Checking cluster versions");


 FUNC_0(VAR_3.major_version != 0);
 FUNC_0(VAR_2.major_version != 0);






 if (FUNC_1(VAR_3.major_version) < 804)
  FUNC_3("This utility can only upgrade from PostgreSQL version 8.4 and later.\n");


 if (FUNC_1(VAR_2.major_version) != FUNC_1(VAR_1))
  FUNC_3("This utility can only upgrade to PostgreSQL version %s.\n",
     VAR_0);






 if (VAR_3.major_version > VAR_2.major_version)
  FUNC_3("This utility cannot be used to downgrade to older major PostgreSQL versions.\n");


 if (FUNC_1(VAR_3.major_version) !=
  FUNC_1(VAR_3.bin_version))
  FUNC_3("Old cluster data and binary directories are from different major versions.\n");
 if (FUNC_1(VAR_2.major_version) !=
  FUNC_1(VAR_2.bin_version))
  FUNC_3("New cluster data and binary directories are from different major versions.\n");

 FUNC_2();
}
