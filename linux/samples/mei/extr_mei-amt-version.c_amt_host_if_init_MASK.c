
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amt_host_if {unsigned long send_timeout; int initialized; int mei_cl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct amt_host_if *VAR_1,
        unsigned long VAR_2, bool VAR_3)
{
 VAR_1->send_timeout = (VAR_2) ? VAR_2 : 20000;
 VAR_1->initialized = FUNC_0(&VAR_1->mei_cl, &VAR_0, 0, VAR_3);
 return VAR_1->initialized;
}
