
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct catinfo {int magic; int file; } ;
typedef int WCHAR ;
typedef struct catinfo* HCATINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct catinfo* FUNC_1 (int ,int ,int) ;
 struct catinfo* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*) ;

__attribute__((used)) static HCATINFO FUNC_4(const WCHAR *VAR_3)
{
    struct catinfo *VAR_4;

    if (!(VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_4))))
    {
        FUNC_2(VAR_1);
        return VAR_2;
    }
    FUNC_3(VAR_4->file, VAR_3);
    VAR_4->magic = VAR_0;
    return VAR_4;
}
