
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_decl_usage { ____Placeholder_wined3d_decl_usage } wined3d_decl_usage ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (char*,int) ;
 char const** VAR_0 ;

__attribute__((used)) static const char *FUNC_2(enum wined3d_decl_usage VAR_1)
{
    if (VAR_1 >= FUNC_0(VAR_0))
    {
        FUNC_1("Unrecognized usage %#x.\n", VAR_1);
        return "UNRECOGNIZED";
    }

    return VAR_0[VAR_1];
}
