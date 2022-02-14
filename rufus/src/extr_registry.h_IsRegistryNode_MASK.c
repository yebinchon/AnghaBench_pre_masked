
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int ,int **) ;

__attribute__((used)) static __inline BOOL FUNC_2(HKEY VAR_2, const char* VAR_3)
{
 BOOL VAR_4;
 HKEY VAR_5 = ((void*)0);
 VAR_4 = (FUNC_1(VAR_2, VAR_3, 0, VAR_1, &VAR_5) == VAR_0);
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_5);
 return VAR_4;
}
