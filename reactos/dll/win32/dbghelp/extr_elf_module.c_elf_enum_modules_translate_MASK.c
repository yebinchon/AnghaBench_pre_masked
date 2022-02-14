
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_enum_user {int user; int (* cb ) (int const*,unsigned long,int ) ;} ;
typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (int const*,unsigned long,int ) ;

__attribute__((used)) static BOOL FUNC_1(const WCHAR* VAR_0, unsigned long VAR_1,
                                       unsigned long VAR_2, BOOL VAR_3, void* VAR_4)
{
    struct elf_enum_user* VAR_5 = VAR_4;
    return VAR_5->cb(VAR_0, VAR_1, VAR_5->user);
}
