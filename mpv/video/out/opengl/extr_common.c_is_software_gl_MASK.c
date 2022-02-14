
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* (* GetString ) (int ) ;} ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(GL *VAR_2)
{
    const char *VAR_3 = VAR_2->GetString(VAR_0);
    const char *VAR_4 = VAR_2->GetString(VAR_1);
    return !(VAR_3 && VAR_4) ||
           FUNC_0(VAR_3, "Software Rasterizer") == 0 ||
           FUNC_1(VAR_3, "llvmpipe") ||
           FUNC_0(VAR_4, "Microsoft Corporation") == 0 ||
           FUNC_0(VAR_3, "Mesa X11") == 0 ||
           FUNC_0(VAR_3, "Apple Software Renderer") == 0;
}
