
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int bp_type; } ;


 int FUNC_0 (struct perf_event_attr*,int,void*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_0, void *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 struct perf_event_attr VAR_4;

 FUNC_0(&VAR_4, VAR_0, VAR_1, VAR_2);
 VAR_3 = FUNC_3(&VAR_4, 0, -1, -1,
     FUNC_1());
 if (VAR_3 < 0)
  FUNC_2("failed opening event %x\n", VAR_4.bp_type);

 return VAR_3;
}
