
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grouping_stddev {scalar_t__ count; double m_newM; } ;
typedef double calculated_number ;



__attribute__((used)) static inline calculated_number FUNC_0(struct grouping_stddev *VAR_0) {
    return (VAR_0->count > 0) ? VAR_0->m_newM : 0.0;
}
