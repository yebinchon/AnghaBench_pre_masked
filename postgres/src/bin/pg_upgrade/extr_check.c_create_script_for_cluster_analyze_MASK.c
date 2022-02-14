
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {char* bindir; } ;
struct TYPE_12__ {int major_version; } ;
struct TYPE_11__ {int user; scalar_t__ user_specified; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;

void
FUNC_15(char **VAR_9)
{
 FILE *VAR_10 = ((void*)0);
 PQExpBufferData VAR_11;

 FUNC_11("Creating script to analyze new cluster");

 FUNC_9(&VAR_11);
 if (VAR_8.user_specified)
 {
  FUNC_2(&VAR_11, "-U ");
  FUNC_3(&VAR_11, VAR_8.user);
  FUNC_1(&VAR_11, ' ');
 }

 *VAR_9 = FUNC_12("%sanalyze_new_cluster.%s",
           VAR_3, VAR_2);

 if ((VAR_10 = FUNC_7(*VAR_9, "w")) == ((void*)0))
  FUNC_10("could not open file \"%s\": %s\n",
     *VAR_9, FUNC_13(VAR_5));



 FUNC_8(VAR_10, "#!/bin/sh\n\n");





 FUNC_8(VAR_10, "echo %sThis script will generate minimal optimizer statistics rapidly%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %sso your system is usable, and then gather statistics twice more%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %swith increasing accuracy.  When it is done, your system will%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %shave the default level of optimizer statistics.%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo%s\n\n", VAR_0);

 FUNC_8(VAR_10, "echo %sIf you have used ALTER TABLE to modify the statistics target for%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %sany tables, you might want to remove them and restore them after%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %srunning this script because they will delay fast statistics generation.%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo%s\n\n", VAR_0);

 FUNC_8(VAR_10, "echo %sIf you would like default statistics as quickly as possible, cancel%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %sthis script and run:%s\n",
   VAR_1, VAR_1);
 FUNC_8(VAR_10, "echo %s    \"%s/vacuumdb\" %s--all %s%s\n", VAR_1,
   VAR_6.bindir, VAR_11.data,

   (FUNC_0(VAR_7.major_version) >= 804) ?
   "--analyze-only" : "--analyze", VAR_1);
 FUNC_8(VAR_10, "echo%s\n\n", VAR_0);

 FUNC_8(VAR_10, "\"%s/vacuumdb\" %s--all --analyze-in-stages\n",
   VAR_6.bindir, VAR_11.data);

 if (FUNC_0(VAR_7.major_version) < 804)
  FUNC_8(VAR_10, "\"%s/vacuumdb\" %s--all\n", VAR_6.bindir,
    VAR_11.data);

 FUNC_8(VAR_10, "echo%s\n\n", VAR_0);
 FUNC_8(VAR_10, "echo %sDone%s\n",
   VAR_1, VAR_1);

 FUNC_6(VAR_10);


 if (FUNC_5(*VAR_9, VAR_4) != 0)
  FUNC_10("could not add execute permission to file \"%s\": %s\n",
     *VAR_9, FUNC_13(VAR_5));


 FUNC_14(&VAR_11);

 FUNC_4();
}
