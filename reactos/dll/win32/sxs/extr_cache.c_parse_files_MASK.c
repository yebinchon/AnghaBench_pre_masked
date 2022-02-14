
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int entry; int name; } ;
struct assembly {int files; } ;
typedef float WCHAR ;
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
 struct file* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct file*) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int **) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (float const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,float const*) ;
 int FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (int *) ;

__attribute__((used)) static HRESULT FUNC_17( IXMLDOMDocument *VAR_3, struct assembly *VAR_4 )
{
    static const WCHAR VAR_5[] = {'f','i','l','e',0};
    static const WCHAR VAR_6[] = {'n','a','m','e',0};
    IXMLDOMNamedNodeMap *VAR_7;
    IXMLDOMNodeList *VAR_8;
    IXMLDOMNode *VAR_9;
    struct file *VAR_10;
    BSTR VAR_11;
    HRESULT VAR_12;
    LONG VAR_13;

    VAR_11 = FUNC_10( VAR_5 );
    VAR_12 = FUNC_3( VAR_3, VAR_11, &VAR_8 );
    FUNC_11( VAR_11 );
    if (VAR_12 != VAR_2) return VAR_12;

    VAR_12 = FUNC_6( VAR_8, &VAR_13 );
    if (VAR_12 != VAR_2) goto done;
    FUNC_12("found %d files\n", VAR_13);
    if (!VAR_13)
    {
        VAR_12 = VAR_0;
        goto done;
    }

    for (;;)
    {
        VAR_12 = FUNC_7( VAR_8, &VAR_9 );
        if (VAR_12 != VAR_2 || !VAR_9)
        {
            VAR_12 = VAR_2;
            break;
        }



        VAR_12 = FUNC_9( VAR_9, &VAR_7 );
        FUNC_8( VAR_9 );
        if (VAR_12 != VAR_2)
            goto done;

        if (!(VAR_10 = FUNC_1( FUNC_0(), 0, sizeof(struct file) )))
        {
            FUNC_4( VAR_7 );
            VAR_12 = VAR_1;
            goto done;
        }

        VAR_10->name = FUNC_14( VAR_7, VAR_6 );
        FUNC_4( VAR_7 );
        if (!VAR_10->name)
        {
            FUNC_2( FUNC_0(), 0, VAR_10 );
            VAR_12 = VAR_0;
            goto done;
        }
        FUNC_15( &VAR_4->files, &VAR_10->entry );
    }

    if (FUNC_16( &VAR_4->files ))
    {
        FUNC_13("no files found\n");
        VAR_12 = VAR_0;
    }

done:
    FUNC_5( VAR_8 );
    return VAR_12;
}
