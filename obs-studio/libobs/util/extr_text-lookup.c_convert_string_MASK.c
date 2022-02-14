
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; size_t capacity; size_t len; } ;


 char* FUNC_0 (char const*,size_t) ;
 int FUNC_1 (struct dstr*,char*,char*) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0, size_t VAR_1)
{
 struct dstr VAR_2;
 VAR_2.array = FUNC_0(VAR_0, VAR_1);
 VAR_2.capacity = VAR_1 + 1;
 VAR_2.len = VAR_1;

 FUNC_1(&VAR_2, "\\n", "\n");
 FUNC_1(&VAR_2, "\\t", "\t");
 FUNC_1(&VAR_2, "\\r", "\r");
 FUNC_1(&VAR_2, "\\\"", "\"");

 return VAR_2.array;
}
