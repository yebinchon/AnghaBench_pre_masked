
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 void *VAR_2, *VAR_3;
 void **VAR_4;
 int VAR_5 = -1;
 int VAR_6;

 VAR_4 = FUNC_1(sizeof(void *) * 15000);
 if (!VAR_4)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < 15000; VAR_6++)
  VAR_4[VAR_6] = FUNC_1(1 * VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_2 = FUNC_1(100 * VAR_0);
  if (!VAR_2)
   goto leave;

  VAR_3 = FUNC_1(1 * VAR_0);
  if (!VAR_3) {
   FUNC_0(VAR_2);
   goto leave;
  }

  *((__u8 *)VAR_2) = 0;
  *((__u8 *)VAR_3) = 1;

  FUNC_0(VAR_2);
  FUNC_0(VAR_3);
 }


 VAR_5 = 0;

leave:
 for (VAR_6 = 0; VAR_6 < 15000; VAR_6++)
  FUNC_0(VAR_4[VAR_6]);

 FUNC_0(VAR_4);
 return VAR_5;
}
