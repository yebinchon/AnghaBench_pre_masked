
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int,int *,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static inline void *FUNC_4()
{
 void *VAR_2 = FUNC_3(VAR_0);
 if (!VAR_2) {
  return ((void*)0);
 }

 if (!FUNC_0(VAR_2, VAR_1)) {
  goto error;
 }

 if (!FUNC_1(VAR_2, 1, ((void*)0), 0)) {
  goto error;
 }

 return VAR_2;

error:
 FUNC_2(VAR_2);
 return ((void*)0);
}
