
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_fp_list {int count; int user; int * fp; } ;
struct scm_cookie {struct scm_fp_list* fp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scm_fp_list*) ;

void FUNC_3(struct scm_cookie *VAR_0)
{
 struct scm_fp_list *VAR_1 = VAR_0->fp;
 int VAR_2;

 if (VAR_1) {
  VAR_0->fp = ((void*)0);
  for (VAR_2=VAR_1->count-1; VAR_2>=0; VAR_2--)
   FUNC_0(VAR_1->fp[VAR_2]);
  FUNC_1(VAR_1->user);
  FUNC_2(VAR_1);
 }
}
