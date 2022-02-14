
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void* const) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (void* const,char const*,size_t const) ;
 void* FUNC_5 (size_t const) ;
 int FUNC_6 (void* const,size_t const,int) ;

__attribute__((used)) static void FUNC_7(const char* VAR_0, int VAR_1)
{
    size_t const VAR_2 = FUNC_3(VAR_0);
    void* const VAR_3 = FUNC_5(VAR_2 + !VAR_2 );
    if (!VAR_3) {
        FUNC_0("not enough memory \n");
        FUNC_1(4);
    }
    FUNC_4(VAR_3, VAR_0, VAR_2);
    FUNC_6(VAR_3, VAR_2, VAR_1);
    FUNC_2 (VAR_3);
}
