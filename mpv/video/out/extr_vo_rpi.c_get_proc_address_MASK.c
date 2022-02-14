
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLubyte ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,int ) ;
 void* FUNC_2 (void*,int const*) ;
 void* FUNC_3 (int const*) ;

__attribute__((used)) static void *FUNC_4(const GLubyte *VAR_1)
{
    void *VAR_2 = FUNC_3(VAR_1);


    if (!VAR_2) {
        void *VAR_3 = FUNC_1("/opt/vc/lib/libGLESv2.so", VAR_0);
        if (VAR_3) {
            VAR_2 = FUNC_2(VAR_3, VAR_1);
            FUNC_0(VAR_3);
        }
    }
    return VAR_2;
}
