
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int marshal_data; } ;
typedef TYPE_1__ ole_clipbrd ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int *) ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_5(ole_clipbrd *VAR_6, IDataObject *VAR_7)
{
    HGLOBAL VAR_8;

    if(VAR_7)
    {
        HGLOBAL VAR_9;
        FUNC_0(VAR_6->marshal_data, &VAR_9);
        FUNC_4(VAR_9, VAR_2|VAR_3, &VAR_8);
    }
    else
        VAR_8 = FUNC_1(VAR_2|VAR_3, 1);

    if(!VAR_8) return VAR_1;

    if(!FUNC_3(VAR_5, VAR_8))
    {
        FUNC_2(VAR_8);
        return VAR_0;
    }
    return VAR_4;
}
