
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ar_stream ;
typedef int ar_archive ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

ar_archive *FUNC_5(ar_stream *VAR_0, const char *VAR_1)
{
    ar_archive *VAR_2 = FUNC_1(VAR_0);
    if (!VAR_2)
        VAR_2 = FUNC_3(VAR_0, VAR_1 && (FUNC_4(VAR_1, ".xps") == 0 || FUNC_4(VAR_1, ".epub") == 0));
    if (!VAR_2)
        VAR_2 = FUNC_0(VAR_0);
    if (!VAR_2)
        VAR_2 = FUNC_2(VAR_0);
    return VAR_2;
}
