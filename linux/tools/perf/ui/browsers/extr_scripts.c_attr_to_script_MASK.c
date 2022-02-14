
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int read_format; int sample_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;

void FUNC_1(char *VAR_5, struct perf_event_attr *VAR_6)
{
 VAR_5[0] = 0;
 if (VAR_6->read_format & VAR_0)
  FUNC_0(VAR_5, " -F +metric");
 if (VAR_6->sample_type & VAR_1)
  FUNC_0(VAR_5, " -F +brstackinsn --xed");
 if (VAR_6->sample_type & VAR_3)
  FUNC_0(VAR_5, " -F +iregs");
 if (VAR_6->sample_type & VAR_4)
  FUNC_0(VAR_5, " -F +uregs");
 if (VAR_6->sample_type & VAR_2)
  FUNC_0(VAR_5, " -F +phys_addr");
}
