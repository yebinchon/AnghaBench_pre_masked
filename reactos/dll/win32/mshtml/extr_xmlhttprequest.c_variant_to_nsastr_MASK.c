
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsAString ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;




 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_6(VARIANT VAR_2, nsAString *VAR_3)
{
    switch(FUNC_2(&VAR_2)) {
        case 128:
        case 129:
        case 130:
            FUNC_4(VAR_3, ((void*)0));
            return VAR_1;
        case 131:
            FUNC_5(VAR_3, FUNC_1(&VAR_2));
            return VAR_1;
        default:
            FUNC_0("Unsupported VARIANT: %s\n", FUNC_3(&VAR_2));
            return VAR_0;
    }
}
