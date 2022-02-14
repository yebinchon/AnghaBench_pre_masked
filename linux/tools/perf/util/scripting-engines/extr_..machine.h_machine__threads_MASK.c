
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threads {int dummy; } ;
struct machine {struct threads* threads; } ;
typedef scalar_t__ pid_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline struct threads *FUNC_0(struct machine *VAR_1, pid_t VAR_2)
{

 return &VAR_1->threads[(unsigned int)VAR_2 % VAR_0];
}
