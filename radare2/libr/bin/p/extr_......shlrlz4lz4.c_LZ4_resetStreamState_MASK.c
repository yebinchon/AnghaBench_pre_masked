
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int LZ4_stream_t ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(void* VAR_0, char* VAR_1) {
 if ((((size_t)VAR_0) & 3) != 0) return 1;
 FUNC_0((LZ4_stream_t*)VAR_0, (ut8*)VAR_1);
 return 0;
}
