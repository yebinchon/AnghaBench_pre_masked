
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zip; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*,int,char*,char*) ;

int
FUNC_2(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2)
{
 char VAR_3[2048];
 if (VAR_2[0] == '/')
  VAR_2++;
 if (FUNC_0(VAR_0, VAR_1->zip, VAR_2))
  return 1;
 FUNC_1(VAR_3, sizeof VAR_3, "%s/[0].piece", VAR_2);
 if (FUNC_0(VAR_0, VAR_1->zip, VAR_3))
  return 1;
 FUNC_1(VAR_3, sizeof VAR_3, "%s/[0].last.piece", VAR_2);
 if (FUNC_0(VAR_0, VAR_1->zip, VAR_3))
  return 1;
 return 0;
}
