
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int member_0; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,struct dstr*) ;
 int FUNC_2 (struct dstr*,struct dstr*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*,struct dstr*,size_t) ;
 int FUNC_5 (struct dstr*,struct dstr*,size_t) ;

__attribute__((used)) static void FUNC_6(struct dstr *VAR_0, size_t VAR_1, size_t VAR_2,
    const char *VAR_3)
{
 struct dstr VAR_4 = {0};
 struct dstr VAR_5 = {0};

 FUNC_4(&VAR_4, VAR_0, VAR_1);
 FUNC_5(&VAR_5, VAR_0, VAR_1 + VAR_2);
 FUNC_2(VAR_0, &VAR_4);
 FUNC_0(VAR_0, VAR_3);
 FUNC_1(VAR_0, &VAR_5);
 FUNC_3(&VAR_4);
 FUNC_3(&VAR_5);
}
