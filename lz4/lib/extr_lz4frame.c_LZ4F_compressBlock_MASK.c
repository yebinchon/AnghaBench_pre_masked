
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4_stream_t ;
typedef int LZ4F_CDict ;


 int VAR_0 ;
 int FUNC_0 (void*,int const*,int,int ) ;
 int FUNC_1 (int *,char const*,char*,int,int,int const) ;
 int FUNC_2 (void*,char const*,char*,int,int,int const) ;

__attribute__((used)) static int FUNC_3(void* VAR_1, const char* VAR_2, char* VAR_3, int VAR_4, int VAR_5, int VAR_6, const LZ4F_CDict* VAR_7)
{
    int const VAR_8 = (VAR_6 < 0) ? -VAR_6 + 1 : 1;
    FUNC_0(VAR_1, VAR_7, VAR_6, VAR_0);
    if (VAR_7) {
        return FUNC_1((LZ4_stream_t*)VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
    } else {
        return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
    }
}
