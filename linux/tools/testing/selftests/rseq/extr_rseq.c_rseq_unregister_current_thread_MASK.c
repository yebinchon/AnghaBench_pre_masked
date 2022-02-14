
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rseq {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int ,int ) ;

int FUNC_3(void)
{
 int VAR_5, VAR_6 = 0;
 sigset_t VAR_7;

 if (!VAR_4)
  return 0;
 FUNC_0(&VAR_7);
 if (!VAR_3) {
  VAR_6 = -1;
  goto end;
 }
 if (--VAR_3)
  goto end;
 VAR_5 = FUNC_2(&VAR_2, sizeof(struct rseq),
        VAR_0, VAR_1);
 if (!VAR_5)
  goto end;
 VAR_3 = 1;
 VAR_6 = -1;
end:
 FUNC_1(VAR_7);
 return VAR_6;
}
