
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int LPCWSTR ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int,int *,int,int *,int *) ;

__attribute__((used)) static inline BOOL FUNC_3(LPCWSTR VAR_5, LPSTR* VAR_6, int VAR_7)
{
 if (!VAR_5)
 {
  *VAR_6 = ((void*)0);
  return VAR_4;
 }

 if (!*VAR_6)
 {
  VAR_7 = FUNC_2(VAR_0, 0, VAR_5, -1, ((void*)0), 0, ((void*)0), ((void*)0));
  *VAR_6 = FUNC_0(VAR_7 * sizeof(CHAR));
 }
 else if (VAR_7 < 0)
 {
  VAR_7 = VAR_3;
 }

 if (*VAR_6)
 {
  FUNC_2(VAR_0, 0, VAR_5, -1, *VAR_6, VAR_7, ((void*)0), ((void*)0));
  return VAR_4;
 }

 FUNC_1(VAR_1);
 return VAR_2;
}
