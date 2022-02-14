
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
struct rrdeng_page_descr {scalar_t__ start_time; scalar_t__ end_time; } ;



__attribute__((used)) static inline int FUNC_0(struct rrdeng_page_descr *VAR_0, usec_t VAR_1)
{
    return (VAR_1 >= VAR_0->start_time && VAR_1 <= VAR_0->end_time);
}
