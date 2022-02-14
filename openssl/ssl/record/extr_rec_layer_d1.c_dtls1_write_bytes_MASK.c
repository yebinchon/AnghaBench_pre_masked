
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rwstate; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,void const*,size_t,int ,size_t*) ;
 int FUNC_2 (int) ;

int FUNC_3(SSL *VAR_5, int VAR_6, const void *VAR_7, size_t VAR_8,
                      size_t *VAR_9)
{
    int VAR_10;

    if (!FUNC_2(VAR_8 <= VAR_1)) {
        FUNC_0(VAR_5, VAR_2, VAR_3,
                 VAR_0);
        return -1;
    }
    VAR_5->rwstate = VAR_4;
    VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, 0, VAR_9);
    return VAR_10;
}
