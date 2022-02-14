
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t gl_pathc; char** gl_pathv; scalar_t__ gl_offs; } ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 size_t FUNC_2 (char*,int,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char**,int ,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_7(char *VAR_7, void *VAR_8)
{
 char *VAR_9;
 int *VAR_10 = (int *)VAR_8;



 size_t VAR_11;

 if (!VAR_7 || !VAR_8) return;
 if (*VAR_10) return;
 FUNC_4(&VAR_9, 0, "%s", VAR_5);
 if (0 > FUNC_1(VAR_7)) {
  FUNC_6(VAR_3, "Unable to include %s from %s at line %d", VAR_7, VAR_9, VAR_6);
  *VAR_10 = 1;
  FUNC_0(VAR_9);
  return;
 }


 FUNC_0(VAR_9);
}
