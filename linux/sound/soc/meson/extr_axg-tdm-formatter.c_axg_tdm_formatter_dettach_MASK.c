
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axg_tdm_stream {int lock; } ;
struct axg_tdm_formatter {int list; struct axg_tdm_stream* stream; } ;


 int FUNC_0 (struct axg_tdm_formatter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct axg_tdm_formatter *VAR_0)
{
 struct axg_tdm_stream *VAR_1 = VAR_0->stream;

 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_0->list);
 FUNC_3(&VAR_1->lock);

 FUNC_0(VAR_0);
}
