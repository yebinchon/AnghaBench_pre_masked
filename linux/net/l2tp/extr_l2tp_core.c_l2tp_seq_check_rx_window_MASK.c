
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct l2tp_session {scalar_t__ nr; scalar_t__ nr_max; scalar_t__ nr_window_size; } ;



__attribute__((used)) static int FUNC_0(struct l2tp_session *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 if (VAR_1 >= VAR_0->nr)
  VAR_2 = VAR_1 - VAR_0->nr;
 else
  VAR_2 = (VAR_0->nr_max + 1) - (VAR_0->nr - VAR_1);

 return VAR_2 < VAR_0->nr_window_size;
}
