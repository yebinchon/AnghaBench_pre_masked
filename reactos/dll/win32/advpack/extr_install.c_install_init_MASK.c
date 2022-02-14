
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int default_install ;
typedef char WCHAR ;
struct TYPE_4__ {char const* inf_filename; char const* install_sec; char const* working_dir; char const* inf_path; scalar_t__ hinf; int flags; int need_reboot; } ;
typedef char const* LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ ADVInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char const*,int *,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,char const*) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (scalar_t__,char const*,char const*) ;
 char* FUNC_11 (char const*,char) ;

__attribute__((used)) static HRESULT FUNC_12(LPCWSTR VAR_6, LPCWSTR VAR_7,
                            LPCWSTR VAR_8, DWORD VAR_9, ADVInfo *VAR_10)
{
    DWORD VAR_11;
    HRESULT VAR_12;
    LPCWSTR VAR_13, VAR_14;

    static const WCHAR VAR_15[] = {'\\',0};
    static const WCHAR VAR_16[] = {
        'D','e','f','a','u','l','t','I','n','s','t','a','l','l',0
    };

    if (!(VAR_13 = FUNC_11(VAR_6, '\\')))
        VAR_13 = VAR_6;

    VAR_11 = FUNC_9(VAR_13);

    VAR_10->inf_filename = FUNC_4(FUNC_3(), 0, (VAR_11 + 1) * sizeof(WCHAR));
    if (!VAR_10->inf_filename)
        return VAR_0;

    FUNC_8(VAR_10->inf_filename, VAR_13);


    if (!VAR_7 || !*VAR_7)
    {
        VAR_11 = sizeof(VAR_16) - 1;
        VAR_13 = VAR_16;
    }
    else
    {
        VAR_11 = FUNC_9(VAR_7);
        VAR_13 = VAR_7;
    }

    VAR_10->install_sec = FUNC_4(FUNC_3(), 0, (VAR_11 + 1) * sizeof(WCHAR));
    if (!VAR_10->install_sec)
        return VAR_0;

    FUNC_8(VAR_10->install_sec, VAR_13);

    VAR_12 = FUNC_6(VAR_10, VAR_6, VAR_8);
    if (FUNC_1(VAR_12))
        return VAR_12;

    VAR_11 = FUNC_9(VAR_10->working_dir) + FUNC_9(VAR_10->inf_filename) + 2;
    VAR_10->inf_path = FUNC_4(FUNC_3(), 0, VAR_11 * sizeof(WCHAR));
    if (!VAR_10->inf_path)
        return VAR_0;

    FUNC_8(VAR_10->inf_path, VAR_10->working_dir);
    FUNC_7(VAR_10->inf_path, VAR_15);
    FUNC_7(VAR_10->inf_path, VAR_10->inf_filename);


    if (VAR_9 & VAR_4)
        VAR_14 = VAR_6;
    else
        VAR_14 = VAR_10->inf_path;

    VAR_10->hinf = FUNC_5(VAR_14, ((void*)0), VAR_2, ((void*)0));
    if (VAR_10->hinf == VAR_3)
        return FUNC_0(FUNC_2());

    FUNC_10(VAR_10->hinf, VAR_10->install_sec, VAR_10->working_dir);



    VAR_10->flags = VAR_9;
    VAR_10->need_reboot = VAR_1;

    return VAR_5;
}
