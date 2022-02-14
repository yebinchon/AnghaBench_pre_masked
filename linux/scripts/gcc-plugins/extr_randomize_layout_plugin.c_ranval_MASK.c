
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_3__ {int a; int b; int c; int d; } ;
typedef TYPE_1__ ranctx ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u64 FUNC_1(ranctx *VAR_0) {
 u64 VAR_1 = VAR_0->a - FUNC_0(VAR_0->b, 7);
 VAR_0->a = VAR_0->b ^ FUNC_0(VAR_0->c, 13);
 VAR_0->b = VAR_0->c + FUNC_0(VAR_0->d, 37);
 VAR_0->c = VAR_0->d + VAR_1;
 VAR_0->d = VAR_1 + VAR_0->a;
 return VAR_0->d;
}
