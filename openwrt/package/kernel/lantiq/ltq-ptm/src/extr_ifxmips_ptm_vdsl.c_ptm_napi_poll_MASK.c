
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dev; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct napi_struct*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct napi_struct *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    unsigned int VAR_5;

    VAR_5 = FUNC_3(VAR_4, VAR_3);


    if ( !FUNC_2(VAR_2->dev) ) {
        FUNC_1(VAR_2);
        return VAR_5;
    }


    FUNC_0(0, 1, VAR_1);

    if (VAR_5 < VAR_3) {
 FUNC_1(VAR_2);
        FUNC_0(0, 1, VAR_0);
        return VAR_5;
    }


    return VAR_5;
}
