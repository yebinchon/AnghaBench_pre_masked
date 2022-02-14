
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void* const) ;
 void* FUNC_4 (size_t const) ;
 int FUNC_5 (void* const,size_t const,void* const,size_t const,void const*,size_t,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(const void* VAR_1, size_t VAR_2, int VAR_3)
{
    size_t const VAR_4 = FUNC_0((int)VAR_2);
    void* const VAR_5 = FUNC_4(VAR_4);
    void* const VAR_6 = FUNC_4(VAR_4);

    if (!VAR_5 || !VAR_6) {
        FUNC_2(VAR_0, "not enough memory ! \n");
        FUNC_1(1);
    }

    FUNC_5(VAR_6, VAR_4,
                  VAR_5, VAR_4,
                  VAR_1, VAR_2,
                  VAR_3);

    FUNC_3(VAR_6);
    FUNC_3(VAR_5);
}
