
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static size_t FUNC_4(uint64_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_2);
 size_t VAR_4;




 if (VAR_2 == 0)
  return 0;


 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_1); VAR_4++, VAR_3++) {
  if (!VAR_3 || VAR_3 >= FUNC_0(VAR_1))
   VAR_3 = 1;
  if (VAR_1[VAR_3] == 0) {
   VAR_1[VAR_3] = VAR_2;
   return VAR_3;
  }
  if (VAR_1[VAR_3] == VAR_2)
   return VAR_3;
 }

 FUNC_3("hash table full: bump up HASH_SHIFT?\n");
 FUNC_2(VAR_0);
}
