
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_path {int flags; int exp_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct mesh_path *VAR_3)
{
 return (VAR_3->flags & VAR_0) &&
        FUNC_0(VAR_2, VAR_3->exp_time) &&
        !(VAR_3->flags & VAR_1);
}
