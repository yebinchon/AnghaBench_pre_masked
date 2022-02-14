
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* intervals_; } ;
typedef TYPE_1__ CostManager ;
typedef int CostInterval ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const CostManager* const VAR_1,
                                    const CostInterval* const VAR_2) {
  return (VAR_2 >= &VAR_1->intervals_[0] &&
          VAR_2 <= &VAR_1->intervals_[VAR_0 - 1]);
}
