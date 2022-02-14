
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_record {int exception; int kthread; int * enq; int redir_err; int rx_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct stats_record *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = VAR_5;
 FUNC_0(VAR_7, 0, &VAR_6->rx_cnt);

 VAR_7 = VAR_4;
 FUNC_0(VAR_7, 1, &VAR_6->redir_err);

 VAR_7 = VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  FUNC_0(VAR_7, VAR_8, &VAR_6->enq[VAR_8]);

 VAR_7 = VAR_2;
 FUNC_0(VAR_7, 0, &VAR_6->kthread);

 VAR_7 = VAR_3;
 FUNC_0(VAR_7, 0, &VAR_6->exception);
}
