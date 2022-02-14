
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_11 ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8(void)
{
 char VAR_12[VAR_2];
 char VAR_13[VAR_2];

 FUNC_5(VAR_12, sizeof(VAR_12), "%s/PG_VERSION", VAR_10.pgdata);
 FUNC_5(VAR_13, sizeof(VAR_13), "%s/PG_VERSION.clonetest", VAR_9.pgdata);
 FUNC_7(VAR_13);
 FUNC_4("file cloning not supported on this platform\n");


 FUNC_7(VAR_13);
}
