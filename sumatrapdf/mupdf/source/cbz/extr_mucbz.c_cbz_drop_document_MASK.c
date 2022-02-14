
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_document ;
typedef int fz_context ;
struct TYPE_2__ {scalar_t__ page; int arch; } ;
typedef TYPE_1__ cbz_document ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char**) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_document *VAR_1)
{
 cbz_document *VAR_2 = (cbz_document*)VAR_1;
 FUNC_0(VAR_0, VAR_2->arch);
 FUNC_1(VAR_0, (char **)VAR_2->page);
}
