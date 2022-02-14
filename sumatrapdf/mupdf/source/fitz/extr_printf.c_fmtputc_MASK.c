
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmtbuf {int user; int ctx; int (* emit ) (int ,int ,int) ;} ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct fmtbuf *VAR_0, int VAR_1)
{
 VAR_0->emit(VAR_0->ctx, VAR_0->user, VAR_1);
}
