
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec64 const*,int ,int const) ;

__attribute__((used)) static int FUNC_1(const clockid_t VAR_3, int VAR_4,
    const struct timespec64 *VAR_5)
{
 return FUNC_0(VAR_5, VAR_4 & VAR_2 ?
     VAR_0 : VAR_1,
     VAR_3);
}
