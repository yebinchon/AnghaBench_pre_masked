
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (void**) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void)
{
 void **VAR_2, **VAR_3, *VAR_4;
 int VAR_5;
 int VAR_6 = -1;
 int VAR_7;

 VAR_5 = FUNC_0(FUNC_1());
 VAR_5 *= (32 * 1024 * 1024 / VAR_0);

 VAR_2 = FUNC_3(sizeof(void *) * VAR_5);
 if (!VAR_2)
  return VAR_6;

 VAR_3 = FUNC_3(sizeof(void *) * VAR_5);
 if (!VAR_3) {
  FUNC_2(VAR_2);
  return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_2[VAR_7] = FUNC_3(1 * VAR_0);
  VAR_3[VAR_7] = FUNC_3(1 * VAR_0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_2(VAR_3[VAR_7]);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_4 = FUNC_3(1 * VAR_0);

  if (!VAR_4)
   goto error;

  *((__u8 *)VAR_4) = 1;
  FUNC_2(VAR_4);
 }


 VAR_6 = 0;

error:
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_2(VAR_2[VAR_7]);

 FUNC_2(VAR_2);
 FUNC_2(VAR_3);

 return VAR_6;
}
