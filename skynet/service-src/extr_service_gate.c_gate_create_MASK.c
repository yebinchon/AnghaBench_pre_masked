
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gate {int listen_id; } ;


 int FUNC_0 (struct gate*,int ,int) ;
 struct gate* FUNC_1 (int) ;

struct gate *
FUNC_2(void) {
 struct gate * VAR_0 = FUNC_1(sizeof(*VAR_0));
 FUNC_0(VAR_0,0,sizeof(*VAR_0));
 VAR_0->listen_id = -1;
 return VAR_0;
}
