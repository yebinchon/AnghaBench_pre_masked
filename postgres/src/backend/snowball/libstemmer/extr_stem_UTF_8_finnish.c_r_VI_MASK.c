
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int lb; char* p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_1) {
    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'i') return 0;
    VAR_1->c--;
    if (FUNC_0(VAR_1, VAR_0, 97, 246, 0)) return 0;
    return 1;
}
