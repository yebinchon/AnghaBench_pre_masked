
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; TYPE_5__ nsIFileURL_iface; int origin_charset; int scheme; int * uri; int is_mutable; TYPE_1__ nsIStandardURL_iface; } ;
typedef TYPE_2__ nsWineURI ;
typedef int NSContainer ;
typedef int IUri ;
typedef int HTMLOuterWindow ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static nsresult FUNC_10(IUri *VAR_6, HTMLOuterWindow *VAR_7, NSContainer *VAR_8,
        const char *VAR_9, nsWineURI **VAR_10)
{
    nsWineURI *VAR_11;
    HRESULT VAR_12;

    VAR_11 = FUNC_4(sizeof(nsWineURI));
    if(!VAR_11)
        return VAR_0;

    VAR_11->nsIFileURL_iface.lpVtbl = &VAR_4;
    VAR_11->nsIStandardURL_iface.lpVtbl = &VAR_5;
    VAR_11->ref = 1;
    VAR_11->is_mutable = VAR_2;

    FUNC_7(VAR_11, VAR_8);
    FUNC_8(VAR_11, VAR_7);

    FUNC_1(VAR_6);
    VAR_11->uri = VAR_6;

    VAR_12 = FUNC_2(VAR_6, &VAR_11->scheme);
    if(FUNC_0(VAR_12))
        VAR_11->scheme = VAR_3;

    if(VAR_9 && *VAR_9 && FUNC_9(VAR_9, "UTF-8")) {
        VAR_11->origin_charset = FUNC_5(VAR_9);
        if(!VAR_11->origin_charset) {
            FUNC_6(&VAR_11->nsIFileURL_iface);
            return VAR_0;
        }
    }

    FUNC_3("retval=%p\n", VAR_11);
    *VAR_10 = VAR_11;
    return VAR_1;
}
