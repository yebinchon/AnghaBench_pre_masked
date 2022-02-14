
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axg_tdm_stream {int lock; int formatter_list; scalar_t__ ready; } ;
struct axg_tdm_formatter {int list; struct axg_tdm_stream* stream; } ;


 int FUNC_0 (struct axg_tdm_formatter*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct axg_tdm_formatter *VAR_0)
{
 struct axg_tdm_stream *VAR_1 = VAR_0->stream;
 int VAR_2 = 0;

 FUNC_2(&VAR_1->lock);


 if (VAR_1->ready) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2) {
   FUNC_4("failed to enable formatter\n");
   goto out;
  }
 }

 FUNC_1(&VAR_0->list, &VAR_1->formatter_list);
out:
 FUNC_3(&VAR_1->lock);
 return VAR_2;
}
