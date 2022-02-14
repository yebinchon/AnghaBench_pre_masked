
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int working_dir; int install_sec; int inf_filename; int inf_path; int hinf; } ;
typedef TYPE_1__ ADVInfo ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const ADVInfo *VAR_0)
{
    FUNC_2(VAR_0->hinf);

    FUNC_1(FUNC_0(), 0, VAR_0->inf_path);
    FUNC_1(FUNC_0(), 0, VAR_0->inf_filename);
    FUNC_1(FUNC_0(), 0, VAR_0->install_sec);
    FUNC_1(FUNC_0(), 0, VAR_0->working_dir);
}
