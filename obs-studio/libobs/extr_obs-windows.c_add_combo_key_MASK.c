
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int member_0; } ;
typedef int obs_key_t ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (int ,struct dstr*) ;

__attribute__((used)) static inline void FUNC_5(obs_key_t VAR_0, struct dstr *VAR_1)
{
 struct dstr VAR_2 = {0};

 FUNC_4(VAR_0, &VAR_2);

 if (!FUNC_3(&VAR_2)) {
  if (!FUNC_3(VAR_1)) {
   FUNC_0(VAR_1, " + ");
  }
  FUNC_1(VAR_1, &VAR_2);
 }

 FUNC_2(&VAR_2);
}
