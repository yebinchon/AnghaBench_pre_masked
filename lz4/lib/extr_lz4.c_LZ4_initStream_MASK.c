
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4_stream_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int ,int) ;

LZ4_stream_t* FUNC_3 (void* VAR_0, size_t VAR_1)
{
    FUNC_0(5, "LZ4_initStream");
    if (VAR_0 == ((void*)0)) { return ((void*)0); }
    if (VAR_1 < sizeof(LZ4_stream_t)) { return ((void*)0); }



    if (((size_t)VAR_0) & (FUNC_1() - 1)) { return ((void*)0); }

    FUNC_2(VAR_0, 0, sizeof(LZ4_stream_t));
    return (LZ4_stream_t*)VAR_0;
}
