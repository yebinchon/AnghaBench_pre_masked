
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int *FUNC_2(int VAR_1)
{
 int *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2[VAR_3] = VAR_3;

 for (VAR_3 = VAR_1 - 1; VAR_3 > 1; VAR_3--) {
  VAR_4 = FUNC_0() % (VAR_3 + 1);
  if (VAR_4 != VAR_3) {
   VAR_5 = VAR_2[VAR_3];
   VAR_2[VAR_3] = VAR_2[VAR_4];
   VAR_2[VAR_4] = VAR_5;
  }
 }

 return VAR_2;
}
