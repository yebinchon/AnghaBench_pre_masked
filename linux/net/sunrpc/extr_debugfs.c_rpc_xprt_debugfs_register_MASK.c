
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int inject_disconnect; int debugfs; } ;
typedef int name ;
typedef int atomic_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,int ,struct rpc_xprt*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_3 ;

void
FUNC_5(struct rpc_xprt *VAR_4)
{
 int VAR_5, VAR_6;
 static atomic_t VAR_7;
 char VAR_8[9];

 VAR_6 = (unsigned int)FUNC_0(&VAR_7);

 VAR_5 = FUNC_4(VAR_8, sizeof(VAR_8), "%x", VAR_6);
 if (VAR_5 >= sizeof(VAR_8))
  return;


 VAR_4->debugfs = FUNC_2(VAR_8, VAR_2);


 FUNC_3("info", VAR_0 | 0400, VAR_4->debugfs, VAR_4,
       &VAR_3);

 FUNC_1(&VAR_4->inject_disconnect, VAR_1);
}
