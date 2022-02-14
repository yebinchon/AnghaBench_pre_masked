
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iucv_sock {int src_name; } ;
struct TYPE_2__ {int autobind_name; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct iucv_sock *VAR_1)
{
 char VAR_2[12];

 FUNC_3(VAR_2, "%08x", FUNC_1(&VAR_0.autobind_name));
 while (FUNC_0(VAR_2)) {
  FUNC_3(VAR_2, "%08x",
   FUNC_1(&VAR_0.autobind_name));
 }
 FUNC_2(VAR_1->src_name, VAR_2, 8);
}
