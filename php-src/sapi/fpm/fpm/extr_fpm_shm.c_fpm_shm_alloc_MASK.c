
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_0 (int ,size_t,int,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,size_t,...) ;

void *FUNC_3(size_t VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_0(0, VAR_8, VAR_3 | VAR_4, VAR_0 | VAR_2, -1, 0);
 if (!VAR_9) {
  FUNC_2(VAR_5, "unable to allocate %zu bytes in shared memory", VAR_8);
  return ((void*)0);
 }

 VAR_7 += VAR_8;
 return VAR_9;
}
