
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int package; scalar_t__ retval; } ;
typedef TYPE_1__ msi_dialog ;
typedef char WCHAR ;
typedef int UINT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static UINT FUNC_5( msi_dialog *VAR_5, const WCHAR *VAR_6 )
{
    static const WCHAR VAR_7[] = {'E','x','i','t',0};
    static const WCHAR VAR_8[] = {'R','e','t','r','y',0};
    static const WCHAR VAR_9[] = {'I','g','n','o','r','e',0};
    static const WCHAR VAR_10[] = {'R','e','t','u','r','n',0};

    if (!FUNC_4( VAR_6, VAR_7 ))
        VAR_5->retval = VAR_2;
    else if (!FUNC_4( VAR_6, VAR_8 ))
        VAR_5->retval = VAR_4;
    else if (!FUNC_4( VAR_6, VAR_9 ))
        VAR_5->retval = VAR_3;
    else if (!FUNC_4( VAR_6, VAR_10 ))
        VAR_5->retval = 0;
    else
    {
        FUNC_0("Unknown argument string %s\n", FUNC_1(VAR_6));
        VAR_5->retval = VAR_1;
    }
    FUNC_2( VAR_5->package, VAR_5->name );
    FUNC_3( VAR_5 );
    return VAR_0;
}
