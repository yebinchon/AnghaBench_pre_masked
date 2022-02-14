
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4_stream_t ;
typedef int LZ4F_CDict ;


 int FUNC_0 (int *,char const*,char*,int,int,int const) ;

__attribute__((used)) static int FUNC_1(void* VAR_0, const char* VAR_1, char* VAR_2, int VAR_3, int VAR_4, int VAR_5, const LZ4F_CDict* VAR_6)
{
    int const VAR_7 = (VAR_5 < 0) ? -VAR_5 + 1 : 1;
    (void)VAR_6;
    return FUNC_0((LZ4_stream_t*)VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
}
