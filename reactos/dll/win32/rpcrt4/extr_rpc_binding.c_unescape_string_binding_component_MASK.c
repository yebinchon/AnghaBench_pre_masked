
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* RPC_CSTR ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static RPC_CSTR FUNC_3(
    const unsigned char *VAR_0, int VAR_1)
{
  RPC_CSTR VAR_2, VAR_3;

  if (VAR_1 == -1) VAR_1 = FUNC_2((const char *)VAR_0);

  VAR_2 = FUNC_1(FUNC_0(), 0, (VAR_1 + 1) * sizeof(*VAR_2));
  if (!VAR_2) return ((void*)0);
  for (VAR_3 = VAR_2; VAR_1 > 0; VAR_0++, VAR_1--) {
    if (*VAR_0 == '\\') {
      VAR_0++;
      VAR_1--;
      *VAR_3++ = *VAR_0;
    } else {
      *VAR_3++ = *VAR_0;
    }
  }
  *VAR_3 = '\0';
  return VAR_2;
}
