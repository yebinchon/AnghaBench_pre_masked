
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; int member_0; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (struct dstr*,struct dstr*) ;
 char FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,char*,char const*) ;
 char const* FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct dstr *VAR_0,
     const char *VAR_1, const char *VAR_2)
{
 struct dstr VAR_3 = {0};
 bool VAR_4 = 1;

 FUNC_2(&VAR_3, VAR_1);
 FUNC_6(&VAR_3, "%module%", VAR_2);
 if (FUNC_4(&VAR_3) != '/')
  FUNC_1(&VAR_3, '/');

 FUNC_3(VAR_0, &VAR_3);
 FUNC_0(VAR_0, VAR_2);
 FUNC_0(VAR_0, FUNC_7());

 if (!FUNC_8(VAR_0->array)) {

  FUNC_3(VAR_0, &VAR_3);
  FUNC_0(VAR_0, "lib");
  FUNC_0(VAR_0, VAR_2);
  FUNC_0(VAR_0, FUNC_7());


  if (!FUNC_8(VAR_0->array)) {
   FUNC_5(VAR_0);
   VAR_4 = 0;
  }
 }

 FUNC_5(&VAR_3);
 return VAR_4;
}
