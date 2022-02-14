
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {struct string_list* next; int str; } ;
typedef int WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static LPWSTR FUNC_4(struct string_list *VAR_0)
{
 struct string_list *VAR_1;
 LPWSTR VAR_2, VAR_3;
 DWORD VAR_4;


 VAR_4 = 1;
 for(VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
  VAR_4 += FUNC_3(VAR_1->str) + 1;

 VAR_2 = FUNC_1( FUNC_0(), 0, VAR_4*sizeof(WCHAR) );


 VAR_3 = VAR_2;
 for(VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
 {
  VAR_4 = FUNC_3(VAR_1->str);
  FUNC_2(VAR_3, VAR_1->str, VAR_4 );
  VAR_3 += VAR_4;
  if(VAR_1->next)
   *VAR_3++ = ';';
 }
 *VAR_3 = 0;

 return VAR_2;
}
