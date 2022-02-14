
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int FUNC_0 (void* const,size_t,char*,int,int,size_t*,int,char const*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (void* const,size_t,double,double,int ) ;
 int FUNC_3 (void* const) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_6(int VAR_0, int VAR_1, double VAR_2,
                              const char* VAR_3, int VAR_4)
{
    char VAR_5[20] = {0};
    size_t VAR_6 = 10000000;
    void* const VAR_7 = FUNC_4(VAR_6);


    if (!VAR_7) FUNC_1(21, "not enough memory");


    FUNC_2(VAR_7, VAR_6, VAR_2, 0.0, 0);


    FUNC_5 (VAR_5, sizeof(VAR_5), "Synthetic %2u%%", (unsigned)(VAR_2*100));
    FUNC_0(VAR_7, VAR_6, VAR_5, VAR_0, VAR_1, &VAR_6, 1, VAR_3, VAR_4);


    FUNC_3(VAR_7);
}
