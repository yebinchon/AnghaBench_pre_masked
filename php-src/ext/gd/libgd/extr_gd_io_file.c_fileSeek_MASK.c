
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdIOCtx {int dummy; } ;
struct TYPE_2__ {int f; } ;
typedef TYPE_1__ fileIOCtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const,int ) ;

__attribute__((used)) static int FUNC_1 (struct gdIOCtx *VAR_1, const int VAR_2)
{
 fileIOCtx *VAR_3;
 VAR_3 = (fileIOCtx *) VAR_1;

 return (FUNC_0 (VAR_3->f, VAR_2, VAR_0) == 0);
}
