
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct elist_cb_state {int t; int n; unsigned char* ptr; unsigned char* rs; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct elist_cb_state*) ;

int FUNC_1(struct net_device *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 struct elist_cb_state VAR_5;

 VAR_5.dev = VAR_2;
 VAR_5.t = 0;
 VAR_5.n = VAR_4;
 VAR_5.ptr = VAR_3;
 VAR_5.rs = VAR_3;

 FUNC_0(&VAR_0, VAR_1, &VAR_5);

 return VAR_5.t;
}
