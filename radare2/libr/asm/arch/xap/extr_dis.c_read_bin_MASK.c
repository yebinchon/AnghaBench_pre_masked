
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int s_off; int s_buf; } ;
struct directive {scalar_t__ d_off; int d_inst; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct state *VAR_0, struct directive *VAR_1) {
 FUNC_0(&VAR_1->d_inst, VAR_0->s_buf, sizeof(VAR_1->d_inst));
 VAR_1->d_off = VAR_0->s_off++;
 return 1;
}
