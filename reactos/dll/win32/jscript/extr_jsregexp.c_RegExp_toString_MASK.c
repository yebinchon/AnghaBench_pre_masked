
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {int str; TYPE_1__* jsregexp; } ;
struct TYPE_4__ {unsigned int flags; } ;
typedef TYPE_2__ RegExpInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (unsigned int,int **) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_7, vdisp_t *VAR_8, WORD VAR_9, unsigned VAR_10, jsval_t *VAR_11,
        jsval_t *VAR_12)
{
    RegExpInstance *VAR_13;
    unsigned VAR_14, VAR_15;
    jsstr_t *VAR_16;
    WCHAR *VAR_17;

    FUNC_1("\n");

    if(!FUNC_2(VAR_8, VAR_2)) {
        FUNC_0("Not a RegExp\n");
        return VAR_0;
    }

    VAR_13 = FUNC_7(VAR_8);

    if(!VAR_12)
        return VAR_6;

    VAR_14 = FUNC_5(VAR_13->str) + 2;

    VAR_15 = VAR_13->jsregexp->flags;
    if(VAR_15 & VAR_3)
        VAR_14++;
    if(VAR_15 & VAR_4)
        VAR_14++;
    if(VAR_15 & VAR_5)
        VAR_14++;

    VAR_16 = FUNC_3(VAR_14, &VAR_17);
    if(!VAR_16)
        return VAR_1;

    *VAR_17++ = '/';
    VAR_17 += FUNC_4(VAR_13->str, VAR_17);
    *VAR_17++ = '/';

    if(VAR_15 & VAR_3)
        *VAR_17++ = 'i';
    if(VAR_15 & VAR_4)
        *VAR_17++ = 'g';
    if(VAR_15 & VAR_5)
        *VAR_17++ = 'm';

    *VAR_12 = FUNC_6(VAR_16);
    return VAR_6;
}
