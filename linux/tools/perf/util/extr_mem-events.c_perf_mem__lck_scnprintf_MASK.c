
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mem_lock; } ;
struct mem_info {TYPE_1__ data_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*) ;

int FUNC_1(char *VAR_2, size_t VAR_3, struct mem_info *VAR_4)
{
 u64 VAR_5 = VAR_1;
 int VAR_6;

 if (VAR_4)
  VAR_5 = VAR_4->data_src.mem_lock;

 if (VAR_5 & VAR_1)
  VAR_6 = FUNC_0(VAR_2, VAR_3, "N/A");
 else if (VAR_5 & VAR_0)
  VAR_6 = FUNC_0(VAR_2, VAR_3, "Yes");
 else
  VAR_6 = FUNC_0(VAR_2, VAR_3, "No");

 return VAR_6;
}
