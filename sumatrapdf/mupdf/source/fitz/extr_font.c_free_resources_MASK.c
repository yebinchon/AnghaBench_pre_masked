
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * t3procs; int * t3resources; int t3doc; int (* t3freeres ) (int *,int ,int *) ;} ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_font *VAR_1)
{
 int VAR_2;

 if (VAR_1->t3resources)
 {
  VAR_1->t3freeres(VAR_0, VAR_1->t3doc, VAR_1->t3resources);
  VAR_1->t3resources = ((void*)0);
 }

 if (VAR_1->t3procs)
 {
  for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
   FUNC_0(VAR_0, VAR_1->t3procs[VAR_2]);
 }
 FUNC_1(VAR_0, VAR_1->t3procs);
 VAR_1->t3procs = ((void*)0);
}
