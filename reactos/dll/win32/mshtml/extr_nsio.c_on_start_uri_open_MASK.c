
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_5__ {int nsIFileURL_iface; TYPE_2__* container; scalar_t__ is_doc_uri; } ;
typedef TYPE_1__ nsWineURI ;
typedef int nsIURI ;
typedef int cpp_bool ;
struct TYPE_6__ {scalar_t__ doc; int nsIWebBrowserChrome_iface; } ;
typedef TYPE_2__ NSContainer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;

nsresult FUNC_6(NSContainer *VAR_5, nsIURI *VAR_6, cpp_bool *VAR_7)
{
    nsWineURI *VAR_8;
    nsresult VAR_9;

    *VAR_7 = VAR_0;

    VAR_9 = FUNC_3(VAR_6, &VAR_1, (void**)&VAR_8);
    if(FUNC_0(VAR_9)) {
        FUNC_1("Could not get nsWineURI: %08x\n", VAR_9);
        return VAR_2;
    }

    if(!VAR_8->is_doc_uri) {
        VAR_8->is_doc_uri = VAR_4;

        if(!VAR_8->container) {
            FUNC_4(&VAR_5->nsIWebBrowserChrome_iface);
            VAR_8->container = VAR_5;
        }

        if(VAR_5->doc)
            *VAR_7 = FUNC_5(VAR_5->doc, VAR_8);
    }

    FUNC_2(&VAR_8->nsIFileURL_iface);
    return VAR_3;
}
