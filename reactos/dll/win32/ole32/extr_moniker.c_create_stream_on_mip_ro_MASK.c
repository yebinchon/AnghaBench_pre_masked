
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ulCntData; int abData; } ;
typedef TYPE_1__ InterfaceData ;
typedef int IStream ;
typedef int HRESULT ;
typedef int HGLOBAL ;


 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (void*,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_5(const InterfaceData *VAR_1, IStream **VAR_2)
{
    HGLOBAL VAR_3 = FUNC_1(0, VAR_1->ulCntData);
    void *VAR_4 = FUNC_2(VAR_3);
    FUNC_4(VAR_4, VAR_1->abData, VAR_1->ulCntData);
    FUNC_3(VAR_3);
    return FUNC_0(VAR_3, VAR_0, VAR_2);
}
