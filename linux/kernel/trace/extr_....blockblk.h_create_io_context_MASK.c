
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct io_context {int dummy; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct io_context* io_context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline struct io_context *FUNC_4(gfp_t VAR_1, int VAR_2)
{
 FUNC_0(FUNC_2());
 if (FUNC_3(!VAR_0->io_context))
  FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_0->io_context;
}
