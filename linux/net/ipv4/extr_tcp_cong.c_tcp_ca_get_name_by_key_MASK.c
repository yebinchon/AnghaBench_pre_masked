
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_congestion_ops {int name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,int ,int ) ;
 struct tcp_congestion_ops* FUNC_3 (int ) ;

char *FUNC_4(u32 VAR_1, char *VAR_2)
{
 const struct tcp_congestion_ops *VAR_3;
 char *VAR_4 = ((void*)0);

 FUNC_0();
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_2, VAR_3->name,
         VAR_0);
 FUNC_1();

 return VAR_4;
}
