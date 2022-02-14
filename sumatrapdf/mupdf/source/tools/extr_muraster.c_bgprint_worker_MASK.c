
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ fz_cookie ;
typedef int cookie ;
struct TYPE_6__ {int pagenum; int stop; int render; int solo; int filename; int interptime; int ctx; int status; int start; } ;


 int FUNC_0 (char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,TYPE_1__*,int,int ,int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 fz_cookie VAR_2 = { 0 };
 int VAR_3;

 (void)VAR_1;

 do
 {
  FUNC_0(("BGPrint waiting\n"));
  FUNC_4(&VAR_0.start);
  VAR_3 = VAR_0.pagenum;
  FUNC_0(("BGPrint woken for pagenum %d\n", VAR_3));
  if (VAR_3 >= 0)
  {
   int VAR_4 = FUNC_1();
   FUNC_2(&VAR_2, 0, sizeof(VAR_2));
   VAR_0.status = FUNC_5(VAR_0.ctx, VAR_3, &VAR_2, VAR_4, VAR_0.interptime, VAR_0.filename, 1, VAR_0.solo, &VAR_0.render);
  }
  FUNC_0(("BGPrint completed page %d\n", VAR_3));
  FUNC_3(&VAR_0.stop);
 }
 while (VAR_3 >= 0);
}
