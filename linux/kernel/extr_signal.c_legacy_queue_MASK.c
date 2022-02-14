
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigpending {int signal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static inline bool FUNC_1(struct sigpending *VAR_1, int VAR_2)
{
 return (VAR_2 < VAR_0) && FUNC_0(&VAR_1->signal, VAR_2);
}
