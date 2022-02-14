
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ,int ,int ,int,int *,unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static inline BOOL FUNC_4(LPCSTR VAR_4, LPWSTR* VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 if (!VAR_4)
 {
  *VAR_5 = ((void*)0);
  return VAR_3;
 }
 VAR_7 = FUNC_1(VAR_0, 0, VAR_4, -1, ((void*)0), 0);
 if (VAR_6 == -1)
  *VAR_5 = FUNC_0(VAR_7 * sizeof(WCHAR));
 else
  VAR_7 = FUNC_3( VAR_7, VAR_6/sizeof(WCHAR) );
 if (*VAR_5)
 {
  FUNC_1(VAR_0, 0, VAR_4, -1, *VAR_5, VAR_7);
  return VAR_3;
 }
 FUNC_2(VAR_1);
 return VAR_2;
}
