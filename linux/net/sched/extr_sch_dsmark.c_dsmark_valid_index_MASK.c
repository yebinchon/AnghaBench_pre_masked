
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dsmark_qdisc_data {scalar_t__ indices; } ;



__attribute__((used)) static inline int FUNC_0(struct dsmark_qdisc_data *VAR_0, u16 VAR_1)
{
 return VAR_1 <= VAR_0->indices && VAR_1 > 0;
}
