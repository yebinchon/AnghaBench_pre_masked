
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nscookie {int dummy; } ;
struct machine {int dummy; } ;
struct dso {scalar_t__ binary_type; int nsinfo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dso*,struct machine*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dso*) ;
 int FUNC_3 (int ,struct nscookie*) ;
 int FUNC_4 (struct nscookie*) ;

__attribute__((used)) static int FUNC_5(struct dso *VAR_1, struct machine *VAR_2)
{
 int VAR_3;
 struct nscookie VAR_4;

 if (VAR_1->binary_type != VAR_0)
  FUNC_3(VAR_1->nsinfo, &VAR_4);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_1->binary_type != VAR_0)
  FUNC_4(&VAR_4);

 if (VAR_3 >= 0) {
  FUNC_2(VAR_1);




  FUNC_1();
 }

 return VAR_3;
}
