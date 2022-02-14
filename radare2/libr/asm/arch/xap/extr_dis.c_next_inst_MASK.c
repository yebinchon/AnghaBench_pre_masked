
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ s_format; } ;
struct directive {int dummy; } ;


 int FUNC_0 (struct directive*) ;
 struct directive* FUNC_1 (int) ;
 int FUNC_2 (struct directive*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct state*,struct directive*) ;
 int FUNC_5 (struct state*,struct directive*) ;

__attribute__((used)) static inline struct directive *FUNC_6(struct state *VAR_0) {
 int VAR_1;
 struct directive *VAR_2 = FUNC_1 (sizeof (*VAR_2));
 if (!VAR_2) {
  FUNC_3 ("malloc()");
  return ((void*)0);
 }
 FUNC_2 (VAR_2, 0, sizeof (*VAR_2));





 VAR_1 = FUNC_4 (VAR_0, VAR_2);
 if (!VAR_1) {
  FUNC_0 (VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
