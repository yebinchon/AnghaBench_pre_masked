
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct src_mgr {int (* commit_write ) (struct src_mgr*) ;int (* src_disable ) (struct src_mgr*,struct src*) ;} ;
struct src {scalar_t__ mode; int multi; int * intlv; int * ops; int rsc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct src_mgr*,struct src*) ;
 int FUNC_2 (struct src_mgr*) ;

__attribute__((used)) static int FUNC_3(struct src *VAR_2, struct src_mgr *VAR_3)
{
 int VAR_4, VAR_5;
 struct src *VAR_6;

 VAR_5 = (VAR_0 == VAR_2->mode) ? VAR_2->multi : 1;
 for (VAR_4 = 0, VAR_6 = VAR_2; VAR_4 < VAR_5; VAR_4++, VAR_6++) {
  VAR_3->src_disable(VAR_3, VAR_6);
  FUNC_0(&VAR_6->rsc);
  VAR_6->multi = 0;
  VAR_6->ops = ((void*)0);
  VAR_6->mode = VAR_1;
  VAR_6->intlv = ((void*)0);
 }
 VAR_3->commit_write(VAR_3);

 return 0;
}
