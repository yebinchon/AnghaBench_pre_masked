
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * filter_by_origin_cb; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
typedef int RepOriginId ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static inline bool
FUNC_1(LogicalDecodingContext *VAR_0, RepOriginId VAR_1)
{
 if (VAR_0->callbacks.filter_by_origin_cb == ((void*)0))
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
