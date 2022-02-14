
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pause_data {int ts_end; int ts_start; } ;



__attribute__((used)) static inline bool FUNC_0(struct pause_data *VAR_0)
{
 return !!VAR_0->ts_start && !VAR_0->ts_end;
}
