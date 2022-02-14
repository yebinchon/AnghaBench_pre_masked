
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressionParameters {int cLevel; int LZ4_stream; } ;


 int FUNC_0 (int ,char const*,char*,int,int,int const) ;

__attribute__((used)) static int FUNC_1(
    const struct compressionParameters* VAR_0,
    const char* VAR_1, char* VAR_2,
    int VAR_3, int VAR_4)
{
    int const VAR_5 = (VAR_0->cLevel < 0) ? -VAR_0->cLevel + 1 : 1;
    return FUNC_0(VAR_0->LZ4_stream, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
