
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (void**,void*,int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int,int ) ;

__attribute__((used)) static u32 *FUNC_6(void **VAR_4, void *VAR_5, u32 *VAR_6)
{
 u32 *VAR_7 = ((void*)0);
 u32 VAR_8;
 int VAR_9;

 FUNC_2(VAR_4, VAR_5, VAR_8, VAR_3);
 if (VAR_8) {
  u32 VAR_10;

  VAR_7 = FUNC_5(VAR_8, sizeof(u32), VAR_2);
  if (!VAR_7) {
   VAR_9 = -VAR_1;
   goto fail;
  }

  FUNC_3(VAR_4, VAR_5, VAR_8 * sizeof(u32), VAR_3);
  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   VAR_7[VAR_10] = FUNC_1(VAR_4);
 }

 *VAR_6 = VAR_8;
 return VAR_7;

e_inval:
 VAR_9 = -VAR_0;
fail:
 FUNC_4(VAR_7);
 return FUNC_0(VAR_9);
}
