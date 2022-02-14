
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assembly {void* type; void* token; void* arch; void* version; void* name; int files; } ;
typedef char WCHAR ;
typedef int LONG ;
typedef int IXMLDOMNodeList ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMNamedNodeMap ;
typedef int IXMLDOMDocument ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 struct assembly* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct assembly*) ;
 void* FUNC_13 (int *,char const*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,struct assembly*) ;
 scalar_t__ FUNC_16 (void*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_17( IXMLDOMDocument *VAR_6, struct assembly **VAR_7 )
{
    static const WCHAR VAR_8[] = {'a','s','s','e','m','b','l','y','I','d','e','n','t','i','t','y',0};
    static const WCHAR VAR_9[] = {'t','y','p','e',0};
    static const WCHAR VAR_10[] = {'n','a','m','e',0};
    static const WCHAR VAR_11[] = {'v','e','r','s','i','o','n',0};
    static const WCHAR VAR_12[] = {'p','r','o','c','e','s','s','o','r','A','r','c','h','i','t','e','c','t','u','r','e',0};
    static const WCHAR VAR_13[] = {'p','u','b','l','i','c','K','e','y','T','o','k','e','n',0};
    IXMLDOMNodeList *VAR_14 = ((void*)0);
    IXMLDOMNode *VAR_15 = ((void*)0);
    IXMLDOMNamedNodeMap *VAR_16 = ((void*)0);
    struct assembly *VAR_17 = ((void*)0);
    BSTR VAR_18;
    HRESULT VAR_19;
    LONG VAR_20;

    VAR_18 = FUNC_9( VAR_8 );
    VAR_19 = FUNC_2( VAR_6, VAR_18, &VAR_14 );
    FUNC_10( VAR_18 );
    if (VAR_19 != VAR_3) goto done;

    VAR_19 = FUNC_5( VAR_14, &VAR_20 );
    if (VAR_19 != VAR_3) goto done;
    if (!VAR_20)
    {
        VAR_19 = VAR_0;
        goto done;
    }
    VAR_19 = FUNC_6( VAR_14, &VAR_15 );
    if (VAR_19 != VAR_3) goto done;
    if (!VAR_15)
    {
        VAR_19 = VAR_0;
        goto done;
    }
    if (!(VAR_17 = FUNC_1( FUNC_0(), VAR_2, sizeof(struct assembly) )))
    {
        VAR_19 = VAR_1;
        goto done;
    }
    FUNC_14( &VAR_17->files );

    VAR_19 = FUNC_8( VAR_15, &VAR_16 );
    if (VAR_19 != VAR_3) goto done;

    VAR_17->type = FUNC_13( VAR_16, VAR_9 );
    VAR_17->name = FUNC_13( VAR_16, VAR_10 );
    VAR_17->version = FUNC_13( VAR_16, VAR_11 );
    VAR_17->arch = FUNC_13( VAR_16, VAR_12 );
    VAR_17->token = FUNC_13( VAR_16, VAR_13 );

    if (!VAR_17->type || (FUNC_16( VAR_17->type, VAR_4 ) && FUNC_16( VAR_17->type, VAR_5 )) ||
        !VAR_17->name || !VAR_17->version || !VAR_17->arch || !VAR_17->token)
    {
        FUNC_11("invalid win32 assembly\n");
        VAR_19 = VAR_0;
        goto done;
    }
    if (!FUNC_16( VAR_17->type, VAR_4 )) VAR_19 = FUNC_15( VAR_6, VAR_17 );

done:
    if (VAR_16) FUNC_3( VAR_16 );
    if (VAR_15) FUNC_7( VAR_15 );
    if (VAR_14) FUNC_4( VAR_14 );
    if (VAR_19 == VAR_3) *VAR_7 = VAR_17;
    else FUNC_12( VAR_17 );
    return VAR_19;
}
