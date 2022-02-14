
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ jsstr_rope_t ;
typedef int WCHAR ;


 int FUNC_0 (int ,unsigned int,unsigned int,int *) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(jsstr_rope_t *VAR_0, unsigned VAR_1, unsigned VAR_2, WCHAR *VAR_3)
{
    unsigned VAR_4 = FUNC_1(VAR_0->left);

    if(VAR_4 <= VAR_1) {
        FUNC_0(VAR_0->right, VAR_1-VAR_4, VAR_2, VAR_3);
    }else if(VAR_4 >= VAR_2+VAR_1) {
        FUNC_0(VAR_0->left, VAR_1, VAR_2, VAR_3);
    }else {
        VAR_4 -= VAR_1;
        FUNC_0(VAR_0->left, VAR_1, VAR_4, VAR_3);
        FUNC_0(VAR_0->right, 0, VAR_2-VAR_4, VAR_3+VAR_4);
    }
}
