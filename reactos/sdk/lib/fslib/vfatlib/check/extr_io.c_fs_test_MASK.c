
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 void* FUNC_0 (size_t const) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int const,int ) ;
 int FUNC_3 (char*,long long) ;
 int FUNC_4 (int ,void*,size_t const) ;

int FUNC_5(off_t VAR_1, int VAR_2)
{
    void *VAR_3;
    int VAR_4;
    if (FUNC_2(VAR_0, VAR_1, 0) != VAR_1)
 FUNC_3("Seek to %lld", (long long)VAR_1);
    VAR_3 = FUNC_0(VAR_2);
    VAR_4 = FUNC_4(VAR_0, VAR_3, VAR_2) == VAR_2;
    FUNC_1(VAR_3);

    return VAR_4;
}
