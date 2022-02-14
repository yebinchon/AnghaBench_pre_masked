
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stream {int dummy; } ;
typedef int buf ;
struct TYPE_3__ {char* member_0; int member_1; } ;
typedef TYPE_1__ bstr ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__,int ) ;
 int FUNC_1 (struct stream*,char*,int) ;
 int FUNC_2 (struct stream*,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct stream *VAR_1)
{
    char VAR_2[4];
    int VAR_3 = FUNC_1(VAR_1, VAR_2, sizeof(VAR_2));
    bstr VAR_4 = {VAR_2, VAR_3};
    for (int VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        if (FUNC_0(VAR_4, VAR_0[VAR_5])) {
            FUNC_2(VAR_1, FUNC_3(VAR_0[VAR_5]));
            return VAR_5;
        }
    }
    return -1;
}
