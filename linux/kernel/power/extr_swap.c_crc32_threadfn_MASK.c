
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crc_data {unsigned int run_threads; int done; int stop; int ** unc_len; int * unc; int * crc32; int ready; int * thr; int go; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 struct crc_data *VAR_1 = VAR_0;
 unsigned VAR_2;

 while (1) {
  FUNC_4(VAR_1->go, FUNC_0(&VAR_1->ready) ||
                    FUNC_3());
  if (FUNC_3()) {
   VAR_1->thr = ((void*)0);
   FUNC_1(&VAR_1->stop, 1);
   FUNC_5(&VAR_1->done);
   break;
  }
  FUNC_1(&VAR_1->ready, 0);

  for (VAR_2 = 0; VAR_2 < VAR_1->run_threads; VAR_2++)
   *VAR_1->crc32 = FUNC_2(*VAR_1->crc32,
                        VAR_1->unc[VAR_2], *VAR_1->unc_len[VAR_2]);
  FUNC_1(&VAR_1->stop, 1);
  FUNC_5(&VAR_1->done);
 }
 return 0;
}
