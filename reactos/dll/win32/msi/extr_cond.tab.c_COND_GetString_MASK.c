
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_str {int len; int data; } ;
typedef int WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int COND_input ;


 int FUNC_0 (char*,int ) ;
 scalar_t__* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static LPWSTR FUNC_4( COND_input *VAR_0, const struct cond_str *VAR_1 )
{
    LPWSTR VAR_2;

    VAR_2 = FUNC_1( VAR_0, (VAR_1->len+1) * sizeof (WCHAR) );
    if( VAR_2 )
    {
        FUNC_3( VAR_2, VAR_1->data, VAR_1->len * sizeof(WCHAR));
        VAR_2[VAR_1->len]=0;
    }
    FUNC_0("Got identifier %s\n",FUNC_2(VAR_2));
    return VAR_2;
}
