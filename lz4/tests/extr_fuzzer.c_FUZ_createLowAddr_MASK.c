
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,void* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (void*,size_t,int,int,int,int ) ;

__attribute__((used)) static void* FUNC_2(size_t VAR_4)
{
    void* const VAR_5 = FUNC_1((void*)(0x1000), VAR_4,
                    VAR_2 | VAR_3, VAR_1 | VAR_0,
                    -1, 0);
    FUNC_0(2, "generating low buffer at address %p \n", VAR_5);
    return VAR_5;
}
