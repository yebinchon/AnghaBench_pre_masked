
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xExt; int yExt; int hMF; int mm; } ;
typedef TYPE_1__ METAFILEPICT ;
typedef int HMETAFILEPICT ;
typedef int HGLOBAL ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static HMETAFILEPICT FUNC_4(void)
{
    HGLOBAL VAR_2 = FUNC_0(VAR_0, sizeof(METAFILEPICT));
    METAFILEPICT *VAR_3 = FUNC_1(VAR_2);
    VAR_3->mm = VAR_1;
    VAR_3->xExt = 100;
    VAR_3->yExt = 200;
    VAR_3->hMF = FUNC_3();
    FUNC_2(VAR_2);
    return VAR_2;
}
