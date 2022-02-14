
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int new_link_file ;
typedef int existing_file ;
struct TYPE_4__ {char* pgdata; } ;
struct TYPE_3__ {char* pgdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];

 FUNC_2(VAR_4, sizeof(VAR_4), "%s/PG_VERSION", VAR_3.pgdata);
 FUNC_2(VAR_5, sizeof(VAR_5), "%s/PG_VERSION.linktest", VAR_2.pgdata);
 FUNC_4(VAR_5);

 if (FUNC_1(VAR_4, VAR_5) < 0)
  FUNC_0("could not create hard link between old and new data directories: %s\n"
     "In link mode the old and new data directories must be on the same file system.\n",
     FUNC_3(VAR_1));

 FUNC_4(VAR_5);
}
