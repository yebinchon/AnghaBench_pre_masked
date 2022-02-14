
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct dstr {scalar_t__ len; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,int ) ;

__attribute__((used)) static void FUNC_2(struct dstr *VAR_3, unsigned VAR_4,
          uint64_t VAR_5)
{
 VAR_3->len = 0;

 if (!VAR_4) {
  FUNC_1(VAR_3, 0);
  return;
 }

 for (size_t VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  const char *VAR_7 = "";
  bool VAR_8 = VAR_6 + 1 == VAR_4;
  if (VAR_5 & ((uint64_t)1 << VAR_6))
   VAR_7 = VAR_8 ? VAR_2 : VAR_1;
  else
   VAR_7 = VAR_8 ? VAR_0 : "  ";

  FUNC_0(VAR_3, VAR_7);
 }
}
