
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_impl_info {int res00; int next; int res04; int res07; int res08; short ref; int res0c; int res0e; int res10; int res12; scalar_t__ pos; scalar_t__ impltypeflags; } ;
struct sltg_data {int dummy; } ;
typedef int impl_info ;


 int FUNC_0 (struct sltg_data*,struct sltg_impl_info*,int) ;

__attribute__((used)) static void FUNC_1(struct sltg_data *VAR_0, short VAR_1)
{
    struct sltg_impl_info VAR_2;

    VAR_2.res00 = 0x004a;
    VAR_2.next = -1;
    VAR_2.res04 = -1;
    VAR_2.impltypeflags = 0;
    VAR_2.res07 = 0x80;
    VAR_2.res08 = 0x0012;
    VAR_2.ref = VAR_1;
    VAR_2.res0c = 0x4001;
    VAR_2.res0e = -2;
    VAR_2.res10 = -1;
    VAR_2.res12 = 0x001d;
    VAR_2.pos = 0;

    FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));
}
