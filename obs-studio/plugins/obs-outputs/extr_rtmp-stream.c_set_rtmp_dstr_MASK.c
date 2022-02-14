
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dstr {scalar_t__ len; int * array; } ;
struct TYPE_3__ {int av_len; int * av_val; } ;
typedef TYPE_1__ AVal ;


 int FUNC_0 (struct dstr*) ;

__attribute__((used)) static inline void FUNC_1(AVal *VAR_0, struct dstr *VAR_1)
{
 bool VAR_2 = !FUNC_0(VAR_1);
 VAR_0->av_val = VAR_2 ? VAR_1->array : ((void*)0);
 VAR_0->av_len = VAR_2 ? (int)VAR_1->len : 0;
}
