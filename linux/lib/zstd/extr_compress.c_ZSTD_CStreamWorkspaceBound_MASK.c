
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int ZSTD_CStream ;


 size_t FUNC_0 (int ,size_t const) ;
 size_t FUNC_1 (size_t const) ;
 int VAR_0 ;
 size_t FUNC_2 (TYPE_1__) ;
 int FUNC_3 (size_t const) ;

size_t FUNC_4(ZSTD_compressionParameters VAR_1)
{
 size_t const VAR_2 = (size_t)1 << VAR_1.windowLog;
 size_t const VAR_3 = FUNC_0(VAR_0, VAR_2);
 size_t const VAR_4 = FUNC_3(VAR_3) + 1;

 return FUNC_2(VAR_1) + FUNC_1(sizeof(ZSTD_CStream)) + FUNC_1(VAR_2) + FUNC_1(VAR_4);
}
