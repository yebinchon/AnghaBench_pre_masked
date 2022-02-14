
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conn_seqadj {int * seq; } ;
struct nf_conn {int lock; int status; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,struct nlattr const* const) ;
 struct nf_conn_seqadj* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nf_conn *VAR_5,
    const struct nlattr * const VAR_6[])
{
 struct nf_conn_seqadj *VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = 0;

 if (!VAR_7)
  return 0;

 FUNC_3(&VAR_5->lock);
 if (VAR_6[VAR_0]) {
  VAR_8 = FUNC_0(&VAR_7->seq[VAR_3],
         VAR_6[VAR_0]);
  if (VAR_8 < 0)
   goto err;

  FUNC_2(VAR_2, &VAR_5->status);
 }

 if (VAR_6[VAR_1]) {
  VAR_8 = FUNC_0(&VAR_7->seq[VAR_4],
         VAR_6[VAR_1]);
  if (VAR_8 < 0)
   goto err;

  FUNC_2(VAR_2, &VAR_5->status);
 }

 FUNC_4(&VAR_5->lock);
 return 0;
err:
 FUNC_4(&VAR_5->lock);
 return VAR_8;
}
