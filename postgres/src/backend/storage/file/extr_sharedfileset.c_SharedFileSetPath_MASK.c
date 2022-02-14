
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ creator_pid; int number; } ;
typedef TYPE_1__ SharedFileSet ;
typedef int Oid ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,char*,char*,char*,unsigned long,int ) ;

__attribute__((used)) static void
FUNC_2(char *VAR_2, SharedFileSet *VAR_3, Oid VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_0(VAR_5, VAR_4);
 FUNC_1(VAR_2, VAR_0, "%s/%s%lu.%u.sharedfileset",
    VAR_5, VAR_1,
    (unsigned long) VAR_3->creator_pid, VAR_3->number);
}
