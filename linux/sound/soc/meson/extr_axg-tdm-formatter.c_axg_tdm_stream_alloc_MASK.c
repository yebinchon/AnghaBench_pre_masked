
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axg_tdm_stream {struct axg_tdm_iface* iface; int lock; int formatter_list; } ;
struct axg_tdm_iface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct axg_tdm_stream* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct axg_tdm_stream *FUNC_3(struct axg_tdm_iface *VAR_1)
{
 struct axg_tdm_stream *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->formatter_list);
  FUNC_2(&VAR_2->lock);
  VAR_2->iface = VAR_1;
 }

 return VAR_2;
}
