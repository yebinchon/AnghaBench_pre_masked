
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {int time; } ;
typedef int he_time ;
struct TYPE_2__ {scalar_t__ nanosecs; } ;


 int FUNC_0 (char*,size_t,char*,unsigned int,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct hist_entry *VAR_1, char *VAR_2,
        size_t VAR_3, unsigned int VAR_4)
{
 char VAR_5[32];

 if (VAR_0.nanosecs)
  FUNC_1(VAR_1->time, VAR_5,
       sizeof(VAR_5));
 else
  FUNC_2(VAR_1->time, VAR_5,
       sizeof(VAR_5));

 return FUNC_0(VAR_2, VAR_3, "%-.*s", VAR_4, VAR_5);
}
