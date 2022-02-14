
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int namelen; char* name; struct TYPE_3__* parent; } ;
typedef TYPE_1__ send_dir ;
typedef int ULONG ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char* VAR_0, send_dir* VAR_1, char* VAR_2, ULONG VAR_3) {
    ULONG VAR_4 = VAR_3;

    FUNC_0(VAR_0, VAR_2, VAR_3);

    while (VAR_1 && VAR_1->namelen > 0) {
        FUNC_1(VAR_0 + VAR_1->namelen + 1, VAR_0, VAR_4);
        FUNC_0(VAR_0, VAR_1->name, VAR_1->namelen);
        VAR_0[VAR_1->namelen] = '/';
        VAR_4 += VAR_1->namelen + 1;

        VAR_1 = VAR_1->parent;
    }
}
