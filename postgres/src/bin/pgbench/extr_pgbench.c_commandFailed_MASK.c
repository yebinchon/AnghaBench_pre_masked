
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int command; int use_file; } ;
typedef TYPE_1__ CState ;


 int FUNC_0 (int ,char*,int,int,char const*,int,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(CState *VAR_1, const char *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_0,
   "client %d aborted in command %d (%s) of script %d; %s\n",
   VAR_1->id, VAR_1->command, VAR_2, VAR_1->use_file, VAR_3);
}
