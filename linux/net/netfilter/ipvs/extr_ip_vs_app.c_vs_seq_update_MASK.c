
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_seq {int previous_delta; int delta; int init_seq; } ;
struct ip_vs_conn {unsigned int flags; int lock; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ip_vs_conn *VAR_0, struct ip_vs_seq *VAR_1,
     unsigned int VAR_2, __u32 VAR_3, int VAR_4)
{

 FUNC_1(&VAR_0->lock);
 if (!(VAR_0->flags & VAR_2) || FUNC_0(VAR_3, VAR_1->init_seq)) {
  VAR_1->previous_delta = VAR_1->delta;
  VAR_1->delta += VAR_4;
  VAR_1->init_seq = VAR_3;
  VAR_0->flags |= VAR_2;
 }
 FUNC_2(&VAR_0->lock);
}
